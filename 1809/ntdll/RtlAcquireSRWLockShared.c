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
 *     TppBarrierAdjust @ 0x180073CC8 (TppBarrierAdjust.c)
 *     SbAtomicCaptureContextGuid @ 0x180075F58 (SbAtomicCaptureContextGuid.c)
 *     RtlProcessFlsData @ 0x180076280 (RtlProcessFlsData.c)
 *     LdrpFreeTls @ 0x1800769CC (LdrpFreeTls.c)
 *     _LdrpInitialize @ 0x18007875C (_LdrpInitialize.c)
 *     RtlpHpTagQueryTags @ 0x18007B480 (RtlpHpTagQueryTags.c)
 *     RtlCheckHeldCriticalSections @ 0x1800819A0 (RtlCheckHeldCriticalSections.c)
 *     RtlQueryProtectedPolicy @ 0x180084440 (RtlQueryProtectedPolicy.c)
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
 *     RtlStackDbStackAdd @ 0x18011588C (RtlStackDbStackAdd.c)
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801163BC (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     RtlpWaitCouldDeadlock @ 0x18005EDEC (RtlpWaitCouldDeadlock.c)
 *     RtlBackoff @ 0x18006ADA0 (RtlBackoff.c)
 *     RtlpOptimizeSRWLockList @ 0x180075204 (RtlpOptimizeSRWLockList.c)
 *     ZwTerminateProcess @ 0x1800A0880 (ZwTerminateProcess.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3C10 (NtWaitForAlertByThreadId.c)
 */

void __cdecl RtlAcquireSRWLockShared(PRTL_SRWLOCK SRWLock)
{
  char *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 UniqueThread; // rcx
  unsigned __int64 Value; // rbx
  __int64 v7; // rsi
  signed __int64 v8; // rcx
  bool v9; // zf
  signed __int64 v10; // rax
  unsigned __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 *v13; // [rsp+28h] [rbp-30h]
  __int64 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]
  signed __int32 v17[5]; // [rsp+44h] [rbp-14h] BYREF
  int v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = 0;
  UniqueThread = 17LL;
  Value = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, 17LL, 0LL);
  if ( Value )
  {
    while ( 1 )
    {
      v7 = (Value >> 1) & 1;
      if ( (Value & 1) != 0 && (v7 || (Value & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
      {
        if ( (unsigned __int8)RtlpWaitCouldDeadlock(UniqueThread, v1, v2, v3, v12) )
          ZwTerminateProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, -1073741749);
        UniqueThread = (__int64)NtCurrentTeb()->ClientId.UniqueThread;
        v15 = UniqueThread;
        LOBYTE(UniqueThread) = 0;
        v17[0] = 2;
        v14 = 0LL;
        if ( v7 )
        {
          v13 = 0LL;
          v16 = -1;
          UniqueThread = (unsigned __int8)Value;
          v12 = Value & 0xFFFFFFFFFFFFFFF0uLL;
          v1 = (char *)((unsigned __int64)&v12 | Value & 8 | 7);
          LOBYTE(UniqueThread) = (Value & 4) == 0;
        }
        else
        {
          v16 = -2;
          v13 = &v12;
          v1 = (char *)&v12 + 3;
        }
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, (signed __int64)v1, Value);
        v9 = Value == v10;
        Value = v10;
        if ( !v9 )
          goto LABEL_8;
        if ( (_BYTE)UniqueThread )
          RtlpOptimizeSRWLockList(SRWLock);
        if ( MEMORY[0x7FFE036A] > 1u )
        {
          UniqueThread = (unsigned int)SRWLockSpinCount;
          if ( SRWLockSpinCount )
          {
            do
            {
              if ( (v17[0] & 2) == 0 )
                break;
              _mm_pause();
              v9 = (_DWORD)UniqueThread == 1;
              UniqueThread = (unsigned int)(UniqueThread - 1);
            }
            while ( !v9 );
          }
        }
        if ( _interlockedbittestandreset(v17, 1u) )
        {
          do
            NtWaitForAlertByThreadId(SRWLock, 0LL);
          while ( (v17[0] & 4) == 0 );
        }
      }
      else
      {
        v8 = (Value | 1) + 16;
        if ( v7 )
          v8 = Value | 1;
        if ( Value == _InterlockedCompareExchange64((volatile signed __int64 *)SRWLock, v8, Value) )
          return;
LABEL_8:
        RtlBackoff(&v18);
        _m_prefetchw(SRWLock);
        Value = SRWLock->Value;
      }
    }
  }
}
