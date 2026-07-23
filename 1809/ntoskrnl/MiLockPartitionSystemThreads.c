/*
 * XREFs of MiLockPartitionSystemThreads @ 0x140193F40
 * Callers:
 *     MiEnablePartitionMappedWrites @ 0x14061CE6C (MiEnablePartitionMappedWrites.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 */

void __fastcall MiLockPartitionSystemThreads(__int64 a1, __int64 a2)
{
  --*(_WORD *)(a2 + 486);
  ExAcquirePushLockExclusiveEx(a1 + 176, 0LL);
}
