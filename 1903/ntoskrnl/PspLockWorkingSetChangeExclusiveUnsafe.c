/*
 * XREFs of PspLockWorkingSetChangeExclusiveUnsafe @ 0x140307660
 * Callers:
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     PspSetQuotaLimits @ 0x1406D8200 (PspSetQuotaLimits.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void PspLockWorkingSetChangeExclusiveUnsafe()
{
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_14042BDB0, 0LL);
}
