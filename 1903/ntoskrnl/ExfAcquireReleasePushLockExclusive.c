/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140109B58
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140109AB0 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x140109B18 (PspLockUnlockProcessExclusive.c)
 *     PspLockUnlockWorkingSetChangeExclusiveUnsafe @ 0x140308178 (PspLockUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PsLookupProcessByProcessId @ 0x1405D05D0 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     AlpcReferenceBlobByHandle @ 0x14064B850 (AlpcReferenceBlobByHandle.c)
 *     PfpRpCHashDeleteEntries @ 0x1406A8B10 (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1408C6578 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x14090023C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E610 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14009C990 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockExclusive @ 0x14009E490 (ExfReleasePushLockExclusive.c)
 */

char __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  PRTL_BALANCED_NODE v2; // rbx
  char result; // al

  v2 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, (ULONG_PTR)BugCheckParameter2);
  if ( v2 )
    BYTE2(v2[1].Left) |= 1u;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
