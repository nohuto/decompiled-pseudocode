/*
 * XREFs of CcGetPartitionFromFileObject @ 0x1400E1050
 * Callers:
 *     CcZeroData @ 0x1400E0CA0 (CcZeroData.c)
 *     CcDeferWrite @ 0x140269970 (CcDeferWrite.c)
 * Callees:
 *     CcGetPartition @ 0x1400ACF70 (CcGetPartition.c)
 */

__int64 __fastcall CcGetPartitionFromFileObject(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // rcx

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 && (v4 = *(_QWORD **)(v3 + 8)) != 0LL )
    return CcGetPartition(v4, a2, a3);
  else
    return *((_QWORD *)PspSystemPartition + 1);
}
