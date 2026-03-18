/*
 * XREFs of ExpTryAcquireSpinLockShared @ 0x1400B6040
 * Callers:
 *     MiOffsetToProtos @ 0x1400B5C30 (MiOffsetToProtos.c)
 *     MiEndingOffsetWithLock @ 0x1400B88C0 (MiEndingOffsetWithLock.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14033AA20 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AB64 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033AD60 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTryAcquireSpinLockShared(_DWORD *a1)
{
  signed __int32 v1; // ett

  _m_prefetchw(a1);
  v1 = *a1 & 0x7FFFFFFF;
  return v1 == _InterlockedCompareExchange(a1, v1 + 1, v1);
}
