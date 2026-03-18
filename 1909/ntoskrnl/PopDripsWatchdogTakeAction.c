/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x1408BA018
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x1408AA750 (PopDripsWatchdogDiagnosticWorker.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14013DB34 (VfIsVerifierEnabled.c)
 *     PpmIdlePrevetoWatchdog @ 0x1402EF180 (PpmIdlePrevetoWatchdog.c)
 *     PopFxBugCheck @ 0x1402F1DB0 (PopFxBugCheck.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402F204C (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402FC438 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402FC634 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDeviceConstraintsEnforced @ 0x1403058F4 (PopDeviceConstraintsEnforced.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14084B640 (DbgkWerCaptureLiveKernelDump.c)
 *     PopCheckTestsigningEnabled @ 0x1408A1C18 (PopCheckTestsigningEnabled.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x1408A52D4 (PopFxDestroyDripsBlockingDeviceList.c)
 */

void __fastcall PopDripsWatchdogTakeAction(__int64 a1, __int16 a2, char a3)
{
  __int64 v5; // rcx
  unsigned int v6; // r13d
  char v7; // r15
  __int64 *v8; // rdi
  bool v9; // r12
  char v10; // r14
  unsigned __int16 *v11; // r15
  __int64 v12; // r12
  unsigned __int8 v13; // al
  ULONG_PTR v14; // rdi
  ULONG_PTR v15; // r14
  ULONG_PTR *v16; // r15
  ULONG_PTR v17; // r15
  __int64 v18; // rcx
  __int64 v19; // [rsp+60h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-18h] BYREF
  bool v21; // [rsp+C0h] [rbp+40h]
  unsigned int v23; // [rsp+D8h] [rbp+58h] BYREF

  v20[0] = 0LL;
  v23 = 0;
  v5 = (unsigned int)(10000 * *(_DWORD *)(a1 + 8));
  v6 = 0;
  v19 = 0LL;
  v7 = a3;
  v20[1] = 0LL;
  if ( (int)PopFxBuildDripsBlockingDeviceList(v5, v20) >= 0 )
  {
    v8 = (__int64 *)v20[0];
    v9 = v20[0] == (_QWORD)v20;
    v21 = v20[0] == (_QWORD)v20;
    v10 = v20[0] != (_QWORD)v20;
    if ( (_QWORD *)v20[0] != v20 )
    {
      do
      {
        v11 = (unsigned __int16 *)(*(v8 - 102) + 56);
        if ( *((_DWORD *)v8 + 8) )
        {
          v12 = 0LL;
          do
          {
            PopDiagTraceCsDripsWatchdog(
              *(_DWORD *)a1,
              *(_DWORD *)(a1 + 12),
              *(_DWORD *)(a1 + 8),
              *(_BYTE *)(a1 + 24) != 0,
              *(_DWORD *)(a1 + 20),
              1u,
              a2,
              v11,
              (unsigned __int16 *)(*(_QWORD *)(v8[3] + 8 * v12) + 56LL),
              0,
              a3);
            v12 = (unsigned int)(v12 + 1);
          }
          while ( (unsigned int)v12 < *((_DWORD *)v8 + 8) );
        }
        else
        {
          PopDiagTraceCsDripsWatchdog(
            *(_DWORD *)a1,
            *(_DWORD *)(a1 + 12),
            *(_DWORD *)(a1 + 8),
            *(_BYTE *)(a1 + 24) != 0,
            *(_DWORD *)(a1 + 20),
            1u,
            a2,
            v11,
            0LL,
            0,
            a3);
        }
        v8 = (__int64 *)*v8;
      }
      while ( v8 != v20 );
      v8 = (__int64 *)v20[0];
      v9 = v21;
      v6 = v23;
      v7 = a3;
    }
    if ( !v10 )
    {
      PpmIdlePrevetoWatchdog((unsigned int)(10000 * *(_DWORD *)(a1 + 8)), &v23, &v19);
      v6 = v23;
      PopDiagTraceCsDripsWatchdog(
        *(_DWORD *)a1,
        *(_DWORD *)(a1 + 12),
        *(_DWORD *)(a1 + 8),
        *(_BYTE *)(a1 + 24) != 0,
        *(_DWORD *)(a1 + 20),
        0,
        a2,
        0LL,
        0LL,
        v23,
        v7);
      v8 = (__int64 *)v20[0];
    }
    v13 = *(_BYTE *)(a1 + 24);
    if ( !v13 || (a2 & 1) != 0 )
    {
      if ( (a2 & 2) != 0 )
      {
        PopDiagTraceCsDripsWatchdogPerfTrack(
          *(_DWORD *)a1,
          *(_DWORD *)(a1 + 12),
          *(_DWORD *)(a1 + 8),
          v13,
          *(_DWORD *)(a1 + 20),
          v10,
          a2);
        v8 = (__int64 *)v20[0];
      }
      if ( v9 )
      {
        v17 = 0LL;
        v14 = 0LL;
        v15 = 0LL;
      }
      else
      {
        v14 = (ULONG_PTR)(v8 - 108);
        v15 = v14 + 864;
        v16 = (ULONG_PTR *)(v14 + 48);
        if ( *(_DWORD *)(v14 + 896) )
          v16 = *(ULONG_PTR **)(v14 + 888);
        v17 = *v16;
      }
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
      {
        if ( ((unsigned int)VfIsVerifierEnabled() || PopCheckTestsigningEnabled()) && !v9 && (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v14, *(unsigned int *)(v15 + 16), v17);
      }
      else if ( (a2 & 8) != 0 )
      {
        if ( *(_DWORD *)(a1 + 16) <= 0x64u )
          __debugbreak();
      }
      else if ( !v9 )
      {
        if ( (a2 & 0x40) != 0 )
          NT_ASSERT(
            "*** DRIPS watchdog timeout
    This break point indicates that screen-off battery
    life is being compromi"
            "sed. This AOAC system broke
    into the debugger because a device has prevented
    the deepest runtime idl"
            "e platform state (DRIPS) for
    a certain period of time, despite being in the
    resiliency phase of conn"
            "ected standby without
    activators active.

    Run !platformidle to identify the device with an
    unsat"
            "isifed DRIPS constraint.
");
        if ( (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v14, *(unsigned int *)(v15 + 16), v17);
      }
      if ( PopDeviceConstraintsEnforced() && (a2 & 4) != 0 )
      {
        if ( v9 )
        {
          if ( v6 )
          {
            if ( PopFxProcessorPlugin )
              v18 = *(_QWORD *)(PopFxProcessorPlugin + 104);
            else
              v18 = 0LL;
            DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 3LL, v6, v19, v18, 0LL, 0LL, 0);
          }
        }
        else
        {
          DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 2LL, v14, *(unsigned int *)(v15 + 16), v17, 0LL, 0LL, 0);
        }
      }
    }
    PopFxDestroyDripsBlockingDeviceList(v20);
  }
}
