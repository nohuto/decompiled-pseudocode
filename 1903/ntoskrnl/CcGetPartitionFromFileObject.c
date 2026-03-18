/*
 * XREFs of CcGetPartitionFromFileObject @ 0x1400FCA00
 * Callers:
 *     CcZeroData @ 0x1400FC620 (CcZeroData.c)
 *     CcDeferWrite @ 0x14027D1C0 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x14007A340 (CcGetPartition.c)
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1)
{
  __int64 v1; // rcx
  _QWORD *v2; // rcx

  v1 = *(_QWORD *)(a1 + 40);
  if ( v1 && (v2 = *(_QWORD **)(v1 + 8)) != 0LL )
    return CcGetPartition(v2);
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
