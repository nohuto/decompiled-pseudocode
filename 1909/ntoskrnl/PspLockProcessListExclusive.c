/*
 * XREFs of PspLockProcessListExclusive @ 0x1400E4270
 * Callers:
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     PspInsertProcess @ 0x140677BB8 (PspInsertProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
