/*
 * XREFs of MiLockPartitionSystemThreads @ 0x14019EAA8
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x1406502AC (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 176, 0LL);
}
