/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C021AB60
 * Callers:
 *     <none>
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0029850 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     DCEPtInRect @ 0x1C010B948 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, unsigned __int64 *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __int64 v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rdx
  unsigned __int64 v14; // [rsp+70h] [rbp+8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v8 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
    v14 = *a2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress, (__int64)v8);
    v11 = CurrentThreadDpiAwarenessContext;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10) + 480) + 224LL) & 1) == 0 )
        W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12);
      v15 = GuessMonitorOverrideForCoordinateConversions(v14, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 1LL);
      PhysicalToLogicalDPIPoint(&v14, &v14, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), &v15);
      LODWORD(a1) = DCEPtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v14);
    }
    else
    {
      v16 = GuessMonitorOverrideForCoordinateConversions(v14, CurrentThreadDpiAwarenessContext, 1LL);
      PhysicalToLogicalDPIPoint(&v14, &v14, v11, &v16);
      LODWORD(a1) = 1;
      v6 = v14;
    }
    if ( (_DWORD)a1 )
    {
      *a2 = v6;
      LODWORD(a1) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return (int)a1;
}
