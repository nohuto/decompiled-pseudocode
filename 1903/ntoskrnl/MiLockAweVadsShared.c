/*
 * XREFs of MiLockAweVadsShared @ 0x1402D6EDC
 * Callers:
 *     MiGetAweVadPartition @ 0x1402D6504 (MiGetAweVadPartition.c)
 *     MiProtectAweRegion @ 0x1402D7184 (MiProtectAweRegion.c)
 *     NtMapUserPhysicalPages @ 0x140897C30 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140897F10 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x14009B6D0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiUnlockAweVadsShared @ 0x1402D7C70 (MiUnlockAweVadsShared.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402E575C (MiCopyOnWriteCheckConditions.c)
 */

ULONG_PTR __fastcall MiLockAweVadsShared(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  ULONG_PTR result; // rax

  v1 = *(_QWORD *)(a1 + 184);
  v3 = *(_QWORD *)(v1 + 1296);
  while ( 1 )
  {
    --*(_WORD *)(a1 + 486);
    result = ExAcquireAutoExpandPushLockShared(v3 + 408, 0LL);
    if ( !*(_QWORD *)(v1 + 904) )
      break;
    MiUnlockAweVadsShared(a1, result);
    MiCopyOnWriteCheckConditions(v1 + 1280, 3221226548LL);
  }
  return result;
}
