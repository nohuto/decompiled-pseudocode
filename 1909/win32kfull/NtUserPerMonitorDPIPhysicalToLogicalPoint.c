/*
 * XREFs of NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C0232550
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0042A18 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     DCEPtInRect @ 0x1C00EDB98 (DCEPtInRect.c)
 */

__int64 __fastcall NtUserPerMonitorDPIPhysicalToLogicalPoint(__int64 a1, unsigned __int64 *a2)
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
  unsigned __int64 v16; // r8
  __int64 v18[7]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+90h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  EnterSharedCrit(0LL, 1LL);
  if ( !a1 || (a1 = ValidateHwnd(a1)) != 0 )
  {
    v19 = 0LL;
    v20 = 0LL;
    v6 = a2;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      v6 = (_QWORD *)MmUserProbeAddress;
    *v6 = *v6;
    v19 = *a2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(MmUserProbeAddress, (__int64)v6, v4);
    v10 = CurrentThreadDpiAwarenessContext;
    if ( a1 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v9) + 472) + 224LL) & 1) == 0
        && (*(_BYTE *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12) + 472) + 224LL) & 0x20) == 0 )
      {
        v13 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 288LL);
        if ( (((unsigned __int16)(v10 >> 8) ^ (unsigned __int16)(v13 >> 8)) & 0x1FF) != 0
          || ((v13 & 0xF) != 2 || (v13 & 0x20000000) == 0 ? (v14 = 0) : (v14 = 1),
              (v10 & 0xF) != 2 || (v10 & 0x20000000) == 0 ? (v15 = 0) : (v15 = 1),
              v14 != v15) )
        {
          v20 = v19;
        }
      }
      v21 = GuessMonitorOverrideForCoordinateConversions(v19, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), 1LL);
      PhysicalToLogicalDPIPoint(&v19, &v19, *(unsigned int *)(*(_QWORD *)(a1 + 40) + 288LL), &v21);
      LODWORD(a1) = DCEPtInRect((_DWORD *)(*(_QWORD *)(a1 + 40) + 88LL), v19);
    }
    else
    {
      v18[0] = GuessMonitorOverrideForCoordinateConversions(v19, CurrentThreadDpiAwarenessContext, 1LL);
      PhysicalToLogicalDPIPoint(&v19, &v19, v10, v18);
      LODWORD(a1) = 1;
      v16 = v19;
    }
    if ( (_DWORD)a1 )
    {
      *a2 = v16;
      LODWORD(a1) = 1;
    }
  }
  UserSessionSwitchLeaveCrit(v5);
  return (int)a1;
}
