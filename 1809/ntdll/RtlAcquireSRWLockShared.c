/*
 * XREFs of RtlAcquireSRWLockShared @ 0x180009F00
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x180002358 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x18000301C (RtlpLookupDynamicFunctionEntry.c)
 *     LdrpGetFromMUIMemCache @ 0x180009C84 (LdrpGetFromMUIMemCache.c)
 *     RtlpHpTagReAllocateHeap @ 0x18000A49C (RtlpHpTagReAllocateHeap.c)
 *     TppWorkerThread @ 0x180016320 (TppWorkerThread.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x18001CA30 (RtlpHpLfhSubsegmentDecommitPages.c)
 *     RtlpHpLfhContextCompact @ 0x1800208FC (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18002098C (RtlpHpLfhOwnerCompact.c)
 *     EtwpCheckForPrivatePreEnable @ 0x180020EE0 (EtwpCheckForPrivatePreEnable.c)
 *     LdrpCallTlsInitializers @ 0x180025DE4 (LdrpCallTlsInitializers.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002E600 (TppPoolpReferenceGlobalPool.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x1800313A4 (TpPoolReferenceExistingGlobalPool.c)
 *     LdrpAllocateTls @ 0x18003673C (LdrpAllocateTls.c)
 *     RtlpComputeDllPathWithOptions @ 0x180055730 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x180056450 (RtlpComputeDllPath.c)
 *     TpTrimPools @ 0x1800586A0 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x1800589C0 (RtlSleepConditionVariableSRW.c)
 *     RtlpCreateWnfNameSubscription @ 0x18005C110 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateSerializationGroup @ 0x18005C388 (RtlpCreateSerializationGroup.c)
 *     RtlpCSparseBitmapLock @ 0x18005D5B4 (RtlpCSparseBitmapLock.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005E058 (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180062088 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x1800631B0 (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800669A4 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpHpLargeAllocSize @ 0x180066A0C (RtlpHpLargeAllocSize.c)
 *     TppBarrierAdjust @ 0x180073CB8 (TppBarrierAdjust.c)
 *     SbAtomicCaptureContextGuid @ 0x180075F48 (SbAtomicCaptureContextGuid.c)
 *     RtlProcessFlsData @ 0x180076270 (RtlProcessFlsData.c)
 *     LdrpFreeTls @ 0x1800769BC (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x18007874C (_LdrpInitialize.c)
 *     RtlpHpTagQueryTags @ 0x18007B470 (RtlpHpTagQueryTags.c)
 *     RtlCheckHeldCriticalSections @ 0x180081990 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x180084430 (RtlQueryProtectedPolicy.c)
 *     RtlCloneUserProcess @ 0x1800D8540 (RtlCloneUserProcess.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8AC0 (RtlPrepareForProcessCloning.c)
 *     RtlQueryProcessLockInformation @ 0x1800D99E0 (RtlQueryProcessLockInformation.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800DFC28 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800E00E0 (RtlpWnfRetryTimerCallback.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E2828 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800ED504 (RtlPosixBarrier.c)
 *     RtlpHpStackTraceAddStack @ 0x18010449C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180104F80 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180105188 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x180105204 (RtlpHpStackTraceSerialize.c)
 *     RtlStackDbStackAdd @ 0x1801158F0 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x180116420 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18005EDEC (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x1800751F4 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A0860 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3BF0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlAcquireSRWLockShared(volatile signed __int64 *a1, char *a2, __int64 a3, __int64 a4)
{
  __int64 UniqueThread; // rcx
  signed __int64 result; // rax
  unsigned __int64 v7; // rbx
  __int64 v8; // rsi
  signed __int64 v9; // rcx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned __int64 v13; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  __int64 v16; // [rsp+38h] [rbp-20h]
  int v17; // [rsp+40h] [rbp-18h]
  signed __int32 v18[5]; // [rsp+44h] [rbp-14h] BYREF
  int v19; // [rsp+60h] [rbp+8h] BYREF

  v19 = 0;
  UniqueThread = 17LL;
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  v7 = result;
  if ( result )
  {
    while ( 1 )
    {
      v8 = (v7 >> 1) & 1;
      if ( (v7 & 1) != 0 && (v8 || (v7 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, a2, a3, a4, v13) )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
        v16 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v18[0] = 2;
        v15 = 0LL;
        if ( v8 )
        {
          v14 = 0LL;
          v17 = -1;
          UniqueThread = (unsigned __int8)v7;
          v13 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
          a2 = (char *)((unsigned __int64)&v13 | v7 & 8 | 7);
          LOBYTE(UniqueThread) = (v7 & 4) == 0;
        }
        else
        {
          v17 = -2;
          v14 = &v13;
          a2 = (char *)&v13 + 3;
        }
        v11 = _InterlockedCompareExchange64(a1, (signed __int64)a2, v7);
        v10 = v7 == v11;
        v7 = v11;
        if ( !v10 )
          goto LABEL_8;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(a1);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          UniqueThread = (unsigned int)SRWLockSpinCount;
          if ( SRWLockSpinCount )
          {
            do
            {
              if ( (v18[0] & 2) == 0 )
                break;
              _mm_pause();
              v10 = (_DWORD)UniqueThread == 1;
              UniqueThread = (unsigned int)(UniqueThread - 1);
            }
            while ( !v10 );
          }
        }
        if ( _interlockedbittestandreset(v18, 1u) )
        {
          do
            NtWaitForAlertByThreadId(a1, 0LL);
          while ( (v18[0] & 4) == 0 );
        }
      }
      else
      {
        v9 = (v7 | 1) + 16;
        if ( v8 )
          v9 = v7 | 1;
        result = _InterlockedCompareExchange64(a1, v9, v7);
        if ( v7 == result )
          return result;
LABEL_8:
        RtlBackoff(&v19);
        _m_prefetchw((const void *)a1);
        v7 = *a1;
      }
    }
  }
  return result;
}
