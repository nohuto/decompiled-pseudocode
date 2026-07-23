/*
 * XREFs of PopDripsWatchdogWorkerRoutine @ 0x14087AE80
 * Callers:
 *     <none>
 * Callees:
 *     PopDeepSleepEnabled @ 0x140003A5C (PopDeepSleepEnabled.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     PopOkayToQueueNextWorkItem @ 0x14013BB40 (PopOkayToQueueNextWorkItem.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1401BBBD0 (ZwUpdateWnfStateData.c)
 *     PopBatteryCapacityToRate @ 0x1402DC828 (PopBatteryCapacityToRate.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x1402DE694 (PopAccumulateNonActivatedCpuTime.c)
 *     PopCalculateIdleInformation @ 0x1402DF198 (PopCalculateIdleInformation.c)
 *     PopDiagTraceCsDripsDivergence @ 0x1402DF9A0 (PopDiagTraceCsDripsDivergence.c)
 *     PpmConvertTimeTo @ 0x1402E3394 (PpmConvertTimeTo.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1408136F0 (DbgkWerCaptureLiveKernelDump.c)
 *     PopDeepSleepWatchdogTakeAction @ 0x14087A6DC (PopDeepSleepWatchdogTakeAction.c)
 *     PopDripsCallbackTakeAction @ 0x14087A7A8 (PopDripsCallbackTakeAction.c)
 *     PopDripsWatchdogTakeAction @ 0x14087A9E8 (PopDripsWatchdogTakeAction.c)
 *     PopSetDripsWatchdog @ 0x14087B2B0 (PopSetDripsWatchdog.c)
 */

void __fastcall PopDripsWatchdogWorkerRoutine(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v2; // rsi
  __int64 v4; // r12
  int v5; // edx
  __int64 v6; // r14
  int v7; // r15d
  unsigned __int64 v8; // r9
  unsigned int v9; // r13d
  unsigned int v10; // ebx
  unsigned __int64 v11; // r14
  int v12; // r11d
  __int64 v13; // rcx
  int v14; // r10d
  __int64 v15; // rax
  unsigned __int8 v16; // r15
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // [rsp+58h] [rbp-19h]
  int v23; // [rsp+5Ch] [rbp-15h]
  int v24; // [rsp+60h] [rbp-11h]
  int v25; // [rsp+64h] [rbp-Dh]
  __int64 v26; // [rsp+68h] [rbp-9h] BYREF
  __int64 v27; // [rsp+70h] [rbp-1h]
  __int64 v28; // [rsp+78h] [rbp+7h]
  int v29; // [rsp+80h] [rbp+Fh]
  unsigned __int64 Buffer; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int64 v31; // [rsp+90h] [rbp+1Fh]

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&stru_1404C7888, 1u);
  if ( qword_1404C7848 )
  {
    PopCalculateIdleInformation(a1 + 88);
    v4 = MEMORY[0xFFFFF78000000008];
    v5 = *(_DWORD *)(a1 + 112);
    v6 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 408);
    v7 = v5 - *(_DWORD *)(a1 + 404);
    v8 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 56);
    v9 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 404) = v5;
    *(_QWORD *)(a1 + 408) = v4;
    *(_QWORD *)(a1 + 64) = v4;
    v24 = v5;
    if ( v8 >= (unsigned int)(10000000 * PopDripsWatchdogTimeout) )
    {
      v11 = *(_QWORD *)(a1 + 96) - *(_QWORD *)(a1 + 24);
      v12 = v5 - *(_DWORD *)(a1 + 8);
      v13 = *(_QWORD *)(a1 + 104);
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      v29 = 0;
      v14 = *(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 12);
      v25 = *(_DWORD *)(a1 + 116);
      v22 = v12;
      v23 = v14;
      if ( v13 == -1 || (v15 = *(_QWORD *)(a1 + 32), v15 == -1) )
      {
        v16 = 0;
      }
      else
      {
        v16 = 1;
        v2 = v13 - v15;
      }
      if ( v12 )
        LODWORD(v17) = 0;
      else
        v17 = (v4 - *(_QWORD *)(a1 + 40)) / 0x2710uLL;
      LODWORD(v26) = v17;
      if ( v14 )
        HIDWORD(v26) = 0;
      else
        HIDWORD(v26) = (v4 - *(_QWORD *)(a1 + 48)) / 0x2710uLL;
      LODWORD(v27) = v8 / 0x2710;
      if ( !v12 )
      {
        v18 = 1000LL * (unsigned int)v17;
        if ( !v18 || (unk_1404189F4 & 0x40000000) != 0 || (v19 = *(_DWORD *)(a1 + 16), dword_1404189E4 >= v19) )
          v20 = 0;
        else
          v20 = PopBatteryCapacityToRate(v19 - dword_1404189E4, v18);
        HIDWORD(v28) = v20;
      }
      PopAccumulateNonActivatedCpuTime(0, (_QWORD *)(a1 + 72), (_QWORD *)(a1 + 80));
      HIDWORD(v27) = PpmConvertTimeTo(*(_QWORD *)(a1 + 80), 0x3E8uLL);
      if ( v22 )
      {
        *(_DWORD *)(a1 + 8) = v24;
        *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 96);
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(a1 + 104);
        *(_QWORD *)(a1 + 40) = v4;
        *(_DWORD *)(a1 + 16) = dword_1404189E4;
      }
      if ( v23 )
      {
        *(_DWORD *)(a1 + 12) = v25;
        *(_QWORD *)(a1 + 48) = v4;
      }
      v21 = *(_DWORD *)(a1 + 400);
      *(_QWORD *)(a1 + 56) = v4;
      *(_DWORD *)(a1 + 400) = v21 + 1;
      PopSetDripsWatchdog();
      PopOkayToQueueNextWorkItem(a1 + 360);
      ExReleaseResourceLite(&stru_1404C7888);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      LOBYTE(v29) = byte_14043D510 & 1;
      LODWORD(v28) = 100 * HIDWORD(v27) / (unsigned int)v27;
      if ( v22 )
      {
        if ( PopDeepSleepEnabled() && !v23 )
          PopDeepSleepWatchdogTakeAction((__int64)&v26, v9);
      }
      else if ( !qword_14043D498 )
      {
        PopDripsWatchdogTakeAction((__int64)&v26, v9, v21);
      }
      PopDiagTraceCsDripsDivergence(v16, v11, v2);
      if ( v16 )
      {
        if ( v11 > v2 && (unsigned int)PopDripsSwHwDivergenceThreshold < (v11 - v2) / 0xF4240 )
        {
          Buffer = v11;
          v31 = v2;
          ZwUpdateWnfStateData(&WNF_PO_SW_HW_DRIPS_DIVERGENCE, &Buffer, 0x10u, 0LL, 0LL, 0, 0);
          if ( PopDripsSwHwDivergenceEnableLiveDump )
            DbgkWerCaptureLiveKernelDump(L"DripsDiverge", 420, Buffer, v31, 0LL, 0LL, 0LL, 0LL, 0);
        }
      }
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 400);
      *(_DWORD *)(a1 + 400) = v10 + 1;
      PopSetDripsWatchdog();
      PopOkayToQueueNextWorkItem(a1 + 360);
      ExReleaseResourceLite(&stru_1404C7888);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( v7 || qword_14043D498 )
      {
        _m_prefetchw(&PopDirectedDripsState);
        if ( (_InterlockedOr(&PopDirectedDripsState, 0) & 1) != 0 && !PopDirectedDripsEnableV2 )
          _InterlockedExchange(&dword_14041A244, dword_14041A240);
      }
      else
      {
        PopDripsCallbackTakeAction(v6, v9, v10);
      }
    }
  }
  else
  {
    ExReleaseResourceLite(&stru_1404C7888);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
}
