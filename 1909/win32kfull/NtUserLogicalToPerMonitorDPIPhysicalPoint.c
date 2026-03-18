/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C015CB40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DCEPtInRect @ 0x1C00EDB98 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // edi
  __int64 v11; // rdx
  __int64 v12; // r8
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // eax
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 *v19; // r9
  int v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v23; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v24; // [rsp+90h] [rbp+18h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v21 = 0;
      goto LABEL_20;
    }
  }
  v21 = 0;
  v23 = 0LL;
  v6 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v6 = (_QWORD *)MmUserProbeAddress;
  *v6 = *v6;
  v23 = *a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress, (__int64)v6, v4);
  v10 = CurrentThreadDpiAwarenessContext;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9) + 472) + 224LL) & 1) != 0
      || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12) + 472) + 224LL) & 0x20) != 0
      || (v13 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
          (((unsigned __int16)(v10 >> 8) ^ (unsigned __int16)(v13 >> 8)) & 0x1FF) == 0)
      && ((v13 & 0xF) != 2 || (v13 & 0x20000000) == 0 ? (v14 = 0) : (v14 = 1),
          (v10 & 0xF) != 2 || (v10 & 0x20000000) == 0 ? (v15 = 0) : (v15 = 1),
          v14 == v15) )
    {
      v16 = v23;
    }
    else
    {
      v24 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v24, &v23, a1, 0LL);
      v16 = v24;
    }
    if ( !DCEPtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v16) )
      goto LABEL_18;
    v25 = GuessMonitorOverrideForCoordinateConversions(v23, *(unsigned int *)(v17 + 288), 0LL);
    v18 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
    v19 = &v25;
  }
  else
  {
    v22 = GuessMonitorOverrideForCoordinateConversions(v23, CurrentThreadDpiAwarenessContext, 0LL);
    v19 = &v22;
    v18 = v10;
  }
  LogicalToPhysicalDPIPoint(&v23, &v23, v18, v19);
  v21 = 1;
LABEL_18:
  if ( v21 == 1 )
  {
    *a2 = v23;
    v21 = 1;
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v5);
  return v21;
}
