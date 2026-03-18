/*
 * XREFs of PspLockProcessListExclusive @ 0x1400ADD20
 * Callers:
 *     PspProcessDelete @ 0x140670B40 (PspProcessDelete.c)
 *     PspInsertProcess @ 0x1406724A4 (PspInsertProcess.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall PspLockProcessListExclusive(__int64 a1)
{
  --*(_WORD *)(a1 + 486);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PspActiveProcessLock, 0LL);
}
