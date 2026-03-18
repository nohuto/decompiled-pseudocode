/*
 * XREFs of PspLockUnlockWorkingSetChangeExclusiveUnsafe @ 0x140308178
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 * Callees:
 *     ExfAcquireReleasePushLockExclusive @ 0x140109B58 (ExfAcquireReleasePushLockExclusive.c)
 */

char PspLockUnlockWorkingSetChangeExclusiveUnsafe()
{
  char result; // al
  signed __int32 v1[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v1, 0);
  result = qword_14042BDB0;
  if ( (qword_14042BDB0 & 1) != 0 )
    return ExfAcquireReleasePushLockExclusive(&qword_14042BDB0);
  return result;
}
