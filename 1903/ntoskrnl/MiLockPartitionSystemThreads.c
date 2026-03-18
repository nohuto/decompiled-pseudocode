/*
 * XREFs of MiLockPartitionSystemThreads @ 0x14019E388
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x14068A18C (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 176, 0LL);
}
