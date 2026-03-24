/*
 * XREFs of ExfAcquireReleasePushLockExclusive @ 0x14012F300
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140014AC8 (EtwpLockUnlockBufferList.c)
 *     PspLockUnlockProcessExclusive @ 0x14012F2C0 (PspLockUnlockProcessExclusive.c)
 *     NtSetInformationThread @ 0x1405E9EA0 (NtSetInformationThread.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     AlpcReferenceBlobByHandle @ 0x140618368 (AlpcReferenceBlobByHandle.c)
 *     PsLookupProcessByProcessId @ 0x140646C20 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1406487A0 (PsLookupThreadByThreadId.c)
 *     PfpRpCHashDeleteEntries @ 0x14069DF68 (PfpRpCHashDeleteEntries.c)
 *     PsSynchronizeWithThreadInsertion @ 0x140888618 (PsSynchronizeWithThreadInsertion.c)
 *     PsShutdownSystem @ 0x14088AFA4 (PsShutdownSystem.c)
 *     EtwpUpdateLoggerSecurityDescriptor @ 0x1408C3010 (EtwpUpdateLoggerSecurityDescriptor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLockExclusive @ 0x140091570 (ExfReleasePushLockExclusive.c)
 */

__int64 __fastcall ExfAcquireReleasePushLockExclusive(unsigned __int64 *BugCheckParameter2)
{
  __int64 v2; // rbx
  __int64 result; // rax

  v2 = KeAbPreAcquire((ULONG_PTR)BugCheckParameter2, 0LL, 0);
  ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, (ULONG_PTR)BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  result = ExfReleasePushLockExclusive((volatile signed __int64 *)BugCheckParameter2);
  if ( v2 )
    return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  return result;
}
