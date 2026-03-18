/*
 * XREFs of PsBoostThreadIo @ 0x1400BBF50
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14001F590 (CcAcquireByteRangeForWrite.c)
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ExpReleaseResourceSharedForThreadLite @ 0x14004F6A0 (ExpReleaseResourceSharedForThreadLite.c)
 *     ExpReleaseResourceExclusiveForThreadLite @ 0x14004FB40 (ExpReleaseResourceExclusiveForThreadLite.c)
 *     ExpAcquireResourceExclusiveLite @ 0x140050D60 (ExpAcquireResourceExclusiveLite.c)
 *     CcApplyLowIoPriorityToThread @ 0x14007E034 (CcApplyLowIoPriorityToThread.c)
 *     ExFreeLargePool @ 0x14009ADD0 (ExFreeLargePool.c)
 *     ExpApplyPriorityBoost @ 0x1400CEA00 (ExpApplyPriorityBoost.c)
 *     ExpAllocateBigPool @ 0x1400E69D0 (ExpAllocateBigPool.c)
 *     CcBoostLowPriorityWorkerThread @ 0x140107F30 (CcBoostLowPriorityWorkerThread.c)
 *     ExpBoostIoAfterAcquire @ 0x140108250 (ExpBoostIoAfterAcquire.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     ExDeferredFreePool @ 0x14034D7A0 (ExDeferredFreePool.c)
 *     PopReleasePolicyLock @ 0x140565370 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140565690 (PopAcquirePolicyLock.c)
 *     CmpLockRegistryExclusive @ 0x1405B16C8 (CmpLockRegistryExclusive.c)
 *     CmEnumerateKey @ 0x1405D2A20 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     CmpDeleteKeyObject @ 0x14063F520 (CmpDeleteKeyObject.c)
 *     CmpLockRegistry @ 0x140645120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140645170 (CmpUnlockRegistry.c)
 *     CmQueryValueKey @ 0x1406451B0 (CmQueryValueKey.c)
 *     CmpReleaseWriteQueue @ 0x1406C7A60 (CmpReleaseWriteQueue.c)
 *     CmpBoostActiveHiveWriter @ 0x1406CF1D8 (CmpBoostActiveHiveWriter.c)
 * Callees:
 *     PsBoostThreadIoEx @ 0x1400BBF70 (PsBoostThreadIoEx.c)
 */

__int64 __fastcall PsBoostThreadIo(__int64 a1, __int64 a2)
{
  return PsBoostThreadIoEx(a1, a2, 0LL, 0LL);
}
