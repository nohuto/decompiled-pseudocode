/*
 * XREFs of RtlAcquireSRWLockShared @ 0x18001A940
 * Callers:
 *     RtlpHpLfhSubsegmentWalk @ 0x1800019C8 (RtlpHpLfhSubsegmentWalk.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x1800066EC (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlpCreateSerializationGroup @ 0x1800097B0 (RtlpCreateSerializationGroup.c)
 *     RtlpCreateWnfNameSubscription @ 0x18000A060 (RtlpCreateWnfNameSubscription.c)
 *     EtwpCheckForPrivatePreEnable @ 0x18000AA3C (EtwpCheckForPrivatePreEnable.c)
 *     LdrpGetFromMUIMemCache @ 0x18001ABAC (LdrpGetFromMUIMemCache.c)
 *     LdrpCallTlsInitializers @ 0x18002507C (LdrpCallTlsInitializers.c)
 *     TppPoolpReferenceGlobalPool @ 0x18002FBA8 (TppPoolpReferenceGlobalPool.c)
 *     TppWorkerThread @ 0x180033CE0 (TppWorkerThread.c)
 *     RtlpHpLfhSlotAllocate @ 0x18003E150 (RtlpHpLfhSlotAllocate.c)
 *     RtlpHpLfhSubsegmentFreeBlock @ 0x1800413B0 (RtlpHpLfhSubsegmentFreeBlock.c)
 *     RtlpHpTagContextUpdate @ 0x180046F54 (RtlpHpTagContextUpdate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x180049FA8 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpVaMgrCtxAlloc @ 0x18004DE8C (RtlpHpVaMgrCtxAlloc.c)
 *     RtlpCSparseBitmapLock @ 0x18004E87C (RtlpCSparseBitmapLock.c)
 *     RtlpHpLfhContextCompact @ 0x18004F3B8 (RtlpHpLfhContextCompact.c)
 *     RtlpHpLfhOwnerCompact @ 0x18004F448 (RtlpHpLfhOwnerCompact.c)
 *     LdrpAllocateTls @ 0x180055E24 (LdrpAllocateTls.c)
 *     TpTrimPools @ 0x180060860 (TpTrimPools.c)
 *     RtlSleepConditionVariableSRW @ 0x180060B80 (RtlSleepConditionVariableSRW.c)
 *     TpAllocPoolInternal @ 0x180062FD4 (TpAllocPoolInternal.c)
 *     TppBarrierAdjust @ 0x180066E0C (TppBarrierAdjust.c)
 *     RtlpHpTagQueryTags @ 0x180067C90 (RtlpHpTagQueryTags.c)
 *     ?RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z @ 0x18006B674 (-RtlpFlsDataCleanup@@YAXPEAU_RTLP_FLS_CONTEXT@@PEAU_RTLP_FLS_DATA@@K@Z.c)
 *     RtlpComputeDllPathWithOptions @ 0x18006BBD0 (RtlpComputeDllPathWithOptions.c)
 *     RtlpComputeDllPath @ 0x18006BD10 (RtlpComputeDllPath.c)
 *     SbAtomicCaptureContextGuid @ 0x18006CF40 (SbAtomicCaptureContextGuid.c)
 *     LdrpFreeTls @ 0x18006E3E4 (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x1800720BC (_LdrpInitialize.c)
 *     ?RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z @ 0x180074A90 (-RtlpFlsFree@@YAJPEAU_RTLP_FLS_CONTEXT@@K@Z.c)
 *     RtlpLookupDynamicFunctionEntry @ 0x180079FE4 (RtlpLookupDynamicFunctionEntry.c)
 *     RtlCheckHeldCriticalSections @ 0x18007DC10 (RtlCheckHeldCriticalSections.c)
 *     TpPoolReferenceExistingGlobalPool @ 0x18007EE6C (TpPoolReferenceExistingGlobalPool.c)
 *     RtlQueryProtectedPolicy @ 0x180080180 (RtlQueryProtectedPolicy.c)
 *     RtlpHpLargeAllocSize @ 0x1800843E0 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocSetExtraPresent @ 0x1800849D8 (RtlpHpLargeAllocSetExtraPresent.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18008C310 (RtlpWnfCalculateAndSetNextTimer.c)
 *     RtlpWnfRetryTimerCallback @ 0x18008C460 (RtlpWnfRetryTimerCallback.c)
 *     RtlPrepareForProcessCloning @ 0x18009C0C0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 *     RtlQueryProcessLockInformation @ 0x1800D7930 (RtlQueryProcessLockInformation.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1800E03D0 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     RtlPosixBarrier @ 0x1800EA704 (RtlPosixBarrier.c)
 *     RtlpHpStackTraceAddStack @ 0x180101C3C (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceHeapSerialize @ 0x180102670 (RtlpHpStackTraceHeapSerialize.c)
 *     RtlpHpStackTraceRemoveStack @ 0x180102864 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x1801028E0 (RtlpHpStackTraceSerialize.c)
 *     RtlStackDbStackAdd @ 0x180114C98 (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801156D4 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlBackoff @ 0x1800365A0 (RtlBackoff.c)
 *     RtlpWaitCouldDeadlock @ 0x180036790 (RtlpWaitCouldDeadlock.c)
 *     RtlpOptimizeSRWLockList @ 0x180078328 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x18009D410 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A07C0 (NtWaitForAlertByThreadId.c)
 */

signed __int64 __fastcall RtlAcquireSRWLockShared(
        volatile signed __int64 *a1,
        unsigned __int64 i,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 UniqueThread; // rcx
  signed __int64 result; // rax
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  signed __int64 v9; // rcx
  bool v10; // zf
  signed __int64 v11; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 *v15; // [rsp+28h] [rbp-40h]
  __int64 v16; // [rsp+30h] [rbp-38h]
  unsigned __int64 v17; // [rsp+38h] [rbp-30h]
  int v18; // [rsp+40h] [rbp-28h]
  unsigned int v19[9]; // [rsp+44h] [rbp-24h] BYREF
  int v20; // [rsp+70h] [rbp+8h] BYREF

  v20 = 0;
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
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, i, a3, a4, v14) )
          ZwTerminateProcess(-1LL, 3221225547LL);
        UniqueThread = (unsigned __int64)NtCurrentTeb()->ClientId.UniqueThread;
        v17 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v19[0] = 2;
        v16 = 0LL;
        if ( v8 )
        {
          v15 = 0LL;
          v18 = -1;
          UniqueThread = (unsigned __int8)v7;
          v14 = v7 & 0xFFFFFFFFFFFFFFF0uLL;
          i = (unsigned __int64)&v14 | v7 & 8 | 7;
          LOBYTE(UniqueThread) = (v7 & 4) == 0;
        }
        else
        {
          v18 = -2;
          v15 = &v14;
          i = (unsigned __int64)&v14 + 3;
        }
        v11 = _InterlockedCompareExchange64(a1, i, v7);
        v10 = v7 == v11;
        v7 = v11;
        if ( !v10 )
          goto LABEL_14;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(a1);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          if ( MEMORY[0x7FFE0297] )
          {
            a3 = __rdtsc();
            a4 = a3 + (unsigned int)SRWLockSpinCycleCount;
            while ( 1 )
            {
              i = 0LL;
              __asm { monitorx rax, rcx, rdx }
              UniqueThread = v19[0];
              if ( (v19[0] & 2) == 0 )
                break;
              UniqueThread = a3;
              v13 = __rdtsc();
              i = (unsigned __int64)HIDWORD(v13) << 32;
              a3 = v13;
              if ( v13 <= UniqueThread || v13 >= a4 )
                break;
              __asm { mwaitx  rax, rcx, rbx }
            }
          }
          else
          {
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              UniqueThread = v19[0];
              if ( (v19[0] & 2) == 0 || (_DWORD)i == SRWLockSpinCycleCount / (unsigned int)MEMORY[0x7FFE02D6] )
                break;
              _mm_pause();
            }
          }
        }
        if ( _interlockedbittestandreset((volatile signed __int32 *)v19, 1u) )
        {
          do
            NtWaitForAlertByThreadId(a1, 0LL);
          while ( (v19[0] & 4) == 0 );
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
LABEL_14:
        RtlBackoff(&v20);
        _m_prefetchw((const void *)a1);
        v7 = *a1;
      }
    }
  }
  return result;
}
