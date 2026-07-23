/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x140108CE8
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140108C3C (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x140108CA8 (PspLockUnlockProcessExclusive.c)
 *     PspLockUnlockWorkingSetChangeExclusiveUnsafe @ 0x140307C28 (PspLockUnlockWorkingSetChangeExclusiveUnsafe.c)
 *     PsLookupProcessByProcessId @ 0x1405D0AD0 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1405D0D60 (PsLookupThreadByThreadId.c)
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 *     AlpcReferenceBlobByHandle @ 0x14065F4F0 (AlpcReferenceBlobByHandle.c)
 *     PfpRpCHashDeleteEntries @ 0x1406A83A0 (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x1408C5E58 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1408FFB9C (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfReleasePushLockExclusive @ 0x1400C62D0 (ExfReleasePushLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400EF920 (ExfAcquirePushLockExclusiveEx.c)
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
