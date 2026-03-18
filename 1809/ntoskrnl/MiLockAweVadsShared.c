/*
 * XREFs of MiLockAweVadsShared @ 0x1402B1214
 * Callers:
 *     MiProtectAweRegion @ 0x1402B14BC (MiProtectAweRegion.c)
 *     NtMapUserPhysicalPages @ 0x1408513E0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1408516D0 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockShared @ 0x1400050F0 (ExAcquireAutoExpandPushLockShared.c)
 *     MiUnlockAweVadsShared @ 0x1402B1FE0 (MiUnlockAweVadsShared.c)
 *     MiCopyOnWriteCheckConditions @ 0x1402CB11C (MiCopyOnWriteCheckConditions.c)
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
    result = ExAcquireAutoExpandPushLockShared(v3 + 360, 0LL);
    if ( !*(_QWORD *)(v1 + 896) )
      break;
    MiUnlockAweVadsShared(a1, result);
    MiCopyOnWriteCheckConditions(v1 + 1280, 3221226548LL);
  }
  return result;
}
