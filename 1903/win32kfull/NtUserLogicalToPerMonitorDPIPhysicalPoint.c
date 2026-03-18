/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C015BB90
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C00A1C48 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C0113848 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edx
  int v17; // ecx
  int v18; // eax
  unsigned __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r8
  __int64 *v22; // r9
  int v24; // [rsp+20h] [rbp-58h]
  __int64 v25; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v26; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v27; // [rsp+90h] [rbp+18h] BYREF
  __int64 v28; // [rsp+98h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v24 = 0;
      goto LABEL_20;
    }
  }
  v24 = 0;
  v26 = 0LL;
  v7 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v7 = (_QWORD *)MmUserProbeAddress;
  *v7 = *v7;
  v26 = *a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress, (__int64)v7, v4, v5);
  v12 = CurrentThreadDpiAwarenessContext;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v10, v11) + 472) + 224LL) & 1) != 0
      || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v14, v15) + 472) + 224LL) & 0x20) != 0
      || (v16 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL),
          (((unsigned __int16)(v12 >> 8) ^ (unsigned __int16)(v16 >> 8)) & 0x1FF) == 0)
      && ((v16 & 0xF) != 2 || (v16 & 0x20000000) == 0 ? (v17 = 0) : (v17 = 1),
          (v12 & 0xF) != 2 || (v12 & 0x20000000) == 0 ? (v18 = 0) : (v18 = 1),
          v17 == v18) )
    {
      v19 = v26;
    }
    else
    {
      v27 = 0LL;
      TransformPointBetweenCoordinateSpaces(&v27, &v26, a1, 0LL);
      v19 = v27;
    }
    if ( !DCEPtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v19) )
      goto LABEL_18;
    v28 = GuessMonitorOverrideForCoordinateConversions(v26, *(unsigned int *)(v20 + 288), 0LL);
    v21 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
    v22 = &v28;
  }
  else
  {
    v25 = GuessMonitorOverrideForCoordinateConversions(v26, CurrentThreadDpiAwarenessContext, 0LL);
    v22 = &v25;
    v21 = v12;
  }
  LogicalToPhysicalDPIPoint(&v26, &v26, v21, v22);
  v24 = 1;
LABEL_18:
  if ( v24 == 1 )
  {
    *a2 = v26;
    v24 = 1;
  }
LABEL_20:
  UserSessionSwitchLeaveCrit(v6);
  return v24;
}
