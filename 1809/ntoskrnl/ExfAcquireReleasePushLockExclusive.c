/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x14012F3D0
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140014AC8 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x14012F390 (PspLockUnlockProcessExclusive.c)
 *     NtSetInformationThread @ 0x1405EAEA0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     AlpcReferenceBlobByHandle @ 0x140619368 (AlpcReferenceBlobByHandle.c)
 *     PsLookupProcessByProcessId @ 0x140647C40 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x140649960 (PsLookupThreadByThreadId.c)
 *     PfpRpCHashDeleteEntries @ 0x14069F228 (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140889878 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1408C42D0 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockExclusive @ 0x1400914B0 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  PRTL_BALANCED_NODE v2; // rbx
  __int64 result; // rax

  v2 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, (ULONG_PTR)BugCheckParameter2);
  if ( v2 )
    BYTE2(v2[1].Left) |= 1u;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
