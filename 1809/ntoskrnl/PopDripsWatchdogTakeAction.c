/*
 * XREFs of PopDripsWatchdogTakeAction @ 0x14087A9E8
 * Callers:
 *     PopDripsWatchdogDiagnosticWorker @ 0x14086F680 (PopDripsWatchdogDiagnosticWorker.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14087AE80 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x14013BAE0 (VfIsVerifierEnabled.c)
 *     PpmIdlePrevetoWatchdog @ 0x1402D4F60 (PpmIdlePrevetoWatchdog.c)
 *     PopQueueDirectedDripsWork @ 0x1402D6D58 (PopQueueDirectedDripsWork.c)
 *     PopFxBugCheck @ 0x1402D76B0 (PopFxBugCheck.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopDiagTraceCsDripsWatchdog @ 0x1402DFA98 (PopDiagTraceCsDripsWatchdog.c)
 *     PopDiagTraceCsDripsWatchdogPerfTrack @ 0x1402DFC94 (PopDiagTraceCsDripsWatchdogPerfTrack.c)
 *     PopDeviceConstraintsEnforced @ 0x1402E7348 (PopDeviceConstraintsEnforced.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopCheckTestsigningEnabled @ 0x1408670E4 (PopCheckTestsigningEnabled.c)
 *     PopFxDestroyDripsBlockingDeviceList @ 0x14086A854 (PopFxDestroyDripsBlockingDeviceList.c)
 *     PopDripsWatchdogInvokeDeviceCallbacks @ 0x14087A8EC (PopDripsWatchdogInvokeDeviceCallbacks.c)
 *     PopDripsWatchdogReportDirectedDripsDevice @ 0x14087A99C (PopDripsWatchdogReportDirectedDripsDevice.c)
 */

void __fastcall PopDripsWatchdogTakeAction(__int64 a1, __int16 a2, unsigned int a3)
{
  __int64 v3; // r14
  char v4; // r13
  unsigned int v7; // r12d
  _QWORD *v8; // r15
  char v9; // si
  __int64 *v10; // rsi
  unsigned __int16 *v11; // r14
  __int64 v12; // r13
  unsigned __int8 v13; // al
  __int64 v14; // rsi
  ULONG_PTR *v15; // r13
  ULONG_PTR v16; // r13
  __int64 v17; // rcx
  _QWORD *i; // rbx
  signed __int32 v19; // ecx
  signed __int32 v20; // eax
  unsigned __int64 v21; // rdx
  _DWORD v22[2]; // [rsp+60h] [rbp-9h] BYREF
  __int64 v23; // [rsp+68h] [rbp-1h] BYREF
  __int64 v24; // [rsp+70h] [rbp+7h]
  _QWORD *v25; // [rsp+78h] [rbp+Fh]
  _QWORD v26[8]; // [rsp+80h] [rbp+17h] BYREF
  bool v28; // [rsp+E8h] [rbp+7Fh]

  v3 = 0LL;
  v4 = a3;
  v22[0] = 0;
  v7 = 0;
  v23 = 0LL;
  if ( !PopDirectedDripsEnableV2 )
  {
    v24 = 0LL;
    if ( (a2 & 0x100) != 0 )
    {
      _m_prefetchw(&PopDirectedDripsState);
      if ( (_InterlockedOr(&PopDirectedDripsState, 0) & 1) != 0 && !PopDirectedDripsEnableV2 )
      {
        _InterlockedExchange(&dword_14041A244, 0);
        LOBYTE(v24) = 1;
      }
      v7 = v22[0];
    }
  }
  if ( (int)PopFxBuildDripsBlockingDeviceList((unsigned int)(10000 * *(_DWORD *)(a1 + 8)), v26) >= 0 )
  {
    v8 = (_QWORD *)v26[0];
    v25 = (_QWORD *)v26[0];
    v9 = v26[0] != (_QWORD)v26;
    v28 = v26[0] != (_QWORD)v26;
    if ( (_QWORD *)v26[0] == v26 )
    {
      PpmIdlePrevetoWatchdog((unsigned int)(10000 * *(_DWORD *)(a1 + 8)), v22, &v23);
      v7 = v22[0];
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
        v22[0],
        v4);
    }
    else
    {
      v10 = (__int64 *)v26[0];
      do
      {
        v11 = (unsigned __int16 *)(*(v10 - 101) + 56);
        if ( *((_DWORD *)v10 + 8) )
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
              (unsigned __int16 *)(*(_QWORD *)(v10[3] + 8 * v12) + 56LL),
              0,
              a3);
            v12 = (unsigned int)(v12 + 1);
          }
          while ( (unsigned int)v12 < *((_DWORD *)v10 + 8) );
          v4 = a3;
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
            v4);
        }
        v10 = (__int64 *)*v10;
      }
      while ( v10 != v26 );
      v8 = v25;
      v3 = 0LL;
      v9 = v28;
    }
    v13 = *(_BYTE *)(a1 + 24);
    if ( !v13 || (a2 & 1) != 0 )
    {
      if ( (a2 & 2) != 0 )
        PopDiagTraceCsDripsWatchdogPerfTrack(
          *(_DWORD *)a1,
          *(_DWORD *)(a1 + 12),
          *(_DWORD *)(a1 + 8),
          v13,
          *(_DWORD *)(a1 + 20),
          v9,
          a2);
      if ( v8 == v26 )
      {
        v16 = 0LL;
        v14 = 0LL;
      }
      else
      {
        v14 = v26[0] - 856LL;
        v3 = v26[0];
        v15 = (ULONG_PTR *)(v26[0] - 856LL + 48);
        if ( *(_DWORD *)(v26[0] + 32LL) )
          v15 = *(ULONG_PTR **)(v26[0] + 24LL);
        v16 = *v15;
      }
      if ( !(_BYTE)KdDebuggerEnabled || (_BYTE)KdDebuggerNotPresent )
      {
        if ( ((unsigned int)VfIsVerifierEnabled() || PopCheckTestsigningEnabled()) && v8 != v26 && (a2 & 0x20) != 0 )
          PopFxBugCheck(0x619uLL, v14, *(unsigned int *)(v3 + 16), v16);
      }
      else if ( (a2 & 8) != 0 )
      {
        if ( *(_DWORD *)(a1 + 16) <= 0x64u )
          __debugbreak();
      }
      else if ( v8 != v26 )
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
          PopFxBugCheck(0x619uLL, v14, *(unsigned int *)(v3 + 16), v16);
      }
      if ( PopDeviceConstraintsEnforced() && (a2 & 4) != 0 )
      {
        v22[1] = 0;
        if ( v8 == v26 )
        {
          if ( v7 )
          {
            if ( PopFxProcessorPlugin )
              v17 = *(_QWORD *)(PopFxProcessorPlugin + 104);
            else
              v17 = 0LL;
            DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 3LL, v7, v23, v17, 0LL, 0LL, 0);
          }
        }
        else
        {
          DbgkWerCaptureLiveKernelDump(L"DripsWatchdog", 351, 2LL, v14, *(unsigned int *)(v3 + 16), v16, 0LL, 0LL, 0);
        }
      }
      if ( PopDeviceConstraintsEnforced() && !PopDirectedDripsEnableV2 )
      {
        for ( i = (_QWORD *)v26[0]; i != v26; i = (_QWORD *)*i )
        {
          if ( (a2 & 0x80) != 0 )
            PopDripsWatchdogInvokeDeviceCallbacks((__int64)(i - 107), a3);
          PopDripsWatchdogReportDirectedDripsDevice((__int64)(i - 107), a2, 2u);
        }
      }
    }
    PopFxDestroyDripsBlockingDeviceList(v26);
  }
  if ( !PopDirectedDripsEnableV2 && (a2 & 0x100) != 0 )
  {
    _m_prefetchw(&PopDirectedDripsState);
    if ( (_InterlockedOr(&PopDirectedDripsState, 0) & 1) != 0
      && !PopDirectedDripsEnableV2
      && _InterlockedExchangeAdd(&dword_14041A244, 0) <= 0 )
    {
      v19 = _InterlockedExchangeAdd(&dword_14041A250, 0);
      v20 = _InterlockedExchangeAdd(&dword_14041A24C, 0);
      if ( v19 )
      {
        if ( v19 != v20 )
        {
          v21 = 256LL;
          if ( v20 )
            v21 = 2048LL;
          PopQueueDirectedDripsWork((struct _KEVENT *)&PopDirectedDripsState, v21);
        }
      }
    }
  }
}
