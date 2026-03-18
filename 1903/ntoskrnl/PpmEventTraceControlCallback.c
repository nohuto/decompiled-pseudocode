/*
 * XREFs of PpmEventTraceControlCallback @ 0x14078A980
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     EtwEventEnabled @ 0x140047610 (EtwEventEnabled.c)
 *     PopExecuteOnTargetProcessors @ 0x1400B9068 (PopExecuteOnTargetProcessors.c)
 *     KeEnumerateNextProcessor @ 0x1400BE260 (KeEnumerateNextProcessor.c)
 *     PopAcquireRwLockExclusive @ 0x1400ED3F0 (PopAcquireRwLockExclusive.c)
 *     PpmReleaseLock @ 0x1400EDAA8 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400EDD3C (PpmAcquireLock.c)
 *     PpmEventPlatformVetoRundown @ 0x140302A98 (PpmEventPlatformVetoRundown.c)
 *     PpmEventProcessorVetoRundown @ 0x140302D98 (PpmEventProcessorVetoRundown.c)
 *     PpmEventTraceLPIState @ 0x140303564 (PpmEventTraceLPIState.c)
 *     PpmEventQosSupport @ 0x14074328C (PpmEventQosSupport.c)
 *     PpmEventHeteroPolicy @ 0x140773E84 (PpmEventHeteroPolicy.c)
 *     PpmEventTraceProfiles @ 0x14077D328 (PpmEventTraceProfiles.c)
 *     PpmInfoTraceProfileSettings @ 0x1408B263C (PpmInfoTraceProfileSettings.c)
 *     PpmEventStaticPolicyRundown @ 0x1408B4E70 (PpmEventStaticPolicyRundown.c)
 *     PpmEventTraceAccountingBucketIntervalsRundown @ 0x1408B4FEC (PpmEventTraceAccountingBucketIntervalsRundown.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x1408B50C4 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTraceParkNodeRundown @ 0x1408B531C (PpmEventTraceParkNodeRundown.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1408B5458 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTracePpmProfileStatusRundown @ 0x1408B56B0 (PpmEventTracePpmProfileStatusRundown.c)
 *     PpmEventTraceProcessorIdle @ 0x1408B573C (PpmEventTraceProcessorIdle.c)
 *     PpmEventTraceProcessorPerformance @ 0x1408B596C (PpmEventTraceProcessorPerformance.c)
 *     PpmEventVetoReasonRundown @ 0x1408B5DB0 (PpmEventVetoReasonRundown.c)
 */

void __fastcall PpmEventTraceControlCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  __int64 Prcb; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int i; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  struct _KTHREAD *CurrentThread; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rbx
  unsigned __int16 *v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  __int16 v32; // [rsp+30h] [rbp-10h]
  int v33; // [rsp+32h] [rbp-Eh]
  __int16 v34; // [rsp+36h] [rbp-Ah]
  ULONG v35; // [rsp+68h] [rbp+28h] BYREF

  if ( (ControlCode & 0xFFFFFFFD) == 0 )
  {
    v33 = 0;
    v34 = 0;
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    v31 = qword_140572748[0];
    v32 = 0;
    v30 = (unsigned __int16 *)KeActiveProcessors;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v35, &v30) )
    {
      Prcb = KeGetPrcb(v35);
      PpmEventTraceProcessorPerformance(Prcb);
    }
    if ( ControlCode == 2 )
    {
      PpmEventTraceLPIState();
      PpmEventStaticPolicyRundown(v7, v6, v8);
      PpmEventQosSupport(1);
      PpmEventHeteroPolicy(1);
    }
    for ( i = 0; i < PpmParkNumNodes; ++i )
      PpmEventTraceParkNodeRundown(PpmParkNodes + 272LL * i);
    PopAcquireRwLockExclusive((ULONG_PTR)&PpmIdlePolicyLock);
    PpmEventTracePpmProfileStatusRundown(v11, v10, v12);
    PpmEventTraceProfiles(1);
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_PROFILE_SETTING_RUNDOWN) )
      PpmInfoTraceProfileSettings(v14, v13, v15);
    PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    PpmReleaseLock(&PpmPerfPolicyLock);
    if ( ControlCode == 2 )
    {
      PpmEventTraceAccountingBucketIntervalsRundown(v17, v16, v18);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&PpmIdlePolicyLock, 0LL);
      PpmEventTraceCoordinatedIdleStates(v21, v20, v22);
      PpmEventTracePlatformIdleAccounting(v24, v23, v25);
      PpmEventVetoReasonRundown(v27, v26, v28);
      PpmEventPlatformVetoRundown();
      v31 = qword_140572748[0];
      v32 = 0;
      v30 = (unsigned __int16 *)KeActiveProcessors;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v35, &v30) )
      {
        v29 = KeGetPrcb(v35);
        PpmEventProcessorVetoRundown(v29);
        PpmEventTraceProcessorIdle(v29);
      }
      PopExecuteOnTargetProcessors((__int64)KeActiveProcessors, (__int64)PpmEventTraceProcessorIdleAccounting, 0LL, 0LL);
      PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
    }
  }
}
