/*
 * XREFs of PspLockJobListExclusive @ 0x140696A4C
 * Callers:
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x140696550 (NtCreateJobObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
}
