/*
 * XREFs of PspLockWorkingSetChangeExclusiveUnsafe @ 0x140307110
 * Callers:
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void PspLockWorkingSetChangeExclusiveUnsafe()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14042BDB0, 0LL);
}
