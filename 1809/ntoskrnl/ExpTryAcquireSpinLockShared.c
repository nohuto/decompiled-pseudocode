/*
 * XREFs of ExpTryAcquireSpinLockShared @ 0x1400AFC00
 * Callers:
 *     MiOffsetToProtos @ 0x1400AF810 (MiOffsetToProtos.c)
 *     ExTryAcquireSpinLockSharedAtDpcLevel @ 0x14031BF20 (ExTryAcquireSpinLockSharedAtDpcLevel.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C064 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14031C260 (ExpTryAcquireSpinLockSharedAtDpcLevelInstrumented.c)
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
