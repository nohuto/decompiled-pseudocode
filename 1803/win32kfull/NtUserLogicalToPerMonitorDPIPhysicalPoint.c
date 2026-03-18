/*
 * XREFs of NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C0133EB0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C003F350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     DCEPtInRect @ 0x1C00F61A8 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserLogicalToPerMonitorDPIPhysicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v10; // rdx
  unsigned int v11; // edi
  __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // r9
  int v17; // [rsp+20h] [rbp-58h]
  __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+18h] BYREF
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( a1 )
  {
    a1 = ValidateHwnd(a1);
    if ( !a1 )
    {
      v17 = 0;
      goto LABEL_15;
    }
  }
  v17 = 0;
  v8 = a2;
  if ( (unsigned __int64)a2 >= MmUserProbeAddress )
    v8 = (_QWORD *)MmUserProbeAddress;
  *v8 = *v8;
  v19 = *a2;
  CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress, (__int64)v8);
  v11 = CurrentThreadDpiAwarenessContext;
  if ( a1 )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 472) + 224LL) & 1) != 0
      || (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12) + 472) + 224LL) & 0x20) != 0
      || (((unsigned __int16)(v11 >> 8) ^ (unsigned __int16)(*(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL) >> 8)) & 0x1FF) == 0 )
    {
      v13 = v19;
    }
    else
    {
      TransformPointBetweenCoordinateSpaces(&v20, &v19, a1, 0LL);
      v13 = v20;
    }
    if ( !DCEPtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v13) )
      goto LABEL_13;
    v21 = GuessMonitorOverrideForCoordinateConversions(v19, *(unsigned int *)(v6 + 288), 0LL);
    v14 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL);
    v15 = &v21;
  }
  else
  {
    v18 = GuessMonitorOverrideForCoordinateConversions(v19, CurrentThreadDpiAwarenessContext, 0LL);
    v15 = &v18;
    v14 = v11;
  }
  LogicalToPhysicalDPIPoint(&v19, &v19, v14, v15);
  v17 = 1;
LABEL_13:
  if ( v17 == 1 )
  {
    *a2 = v19;
    v17 = 1;
  }
LABEL_15:
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v17;
}
