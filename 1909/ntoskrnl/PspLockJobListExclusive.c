/*
 * XREFs of PspLockJobListExclusive @ 0x140689FBC
 * Callers:
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     NtCreateJobObject @ 0x140689AC0 (NtCreateJobObject.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockJobListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspJobListLock, 0LL);
}
