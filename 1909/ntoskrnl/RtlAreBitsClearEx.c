/*
 * XREFs of RtlAreBitsClearEx @ 0x140117040
 * Callers:
 *     MiCommitPageTablesForVad @ 0x140605760 (MiCommitPageTablesForVad.c)
 *     MiReturnPageTablePageCommitment @ 0x1406073C0 (MiReturnPageTablePageCommitment.c)
 *     MiMarkRetpolineBits @ 0x140711694 (MiMarkRetpolineBits.c)
 *     MiHotAddPartitionMemory @ 0x14089C0A0 (MiHotAddPartitionMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlAreBitsClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  __int64 *v5; // r10
  __int64 v6; // rbx
  __int64 *v7; // r11
  __int64 *v9; // r10

  v3 = a2 + a3 - 1;
  if ( v3 >= *(_QWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return !_bittest64(*(const signed __int64 **)(a1 + 8), a2);
    return 0;
  }
  v4 = *(_QWORD *)(a1 + 8);
  v5 = (__int64 *)(v4 + 8 * (a2 >> 6));
  v6 = *v5;
  v7 = (__int64 *)(v4 + 8 * (v3 >> 6));
  if ( v5 == v7 )
    return (v6 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2)) == 0;
  if ( (v6 & (-1LL << a2)) == 0 )
  {
    v9 = v5 + 1;
    if ( v9 == v7 )
    {
LABEL_10:
      if ( (*v9 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v3)) == 0 )
        return 1;
    }
    else
    {
      while ( !*v9 )
      {
        if ( ++v9 == v7 )
          goto LABEL_10;
      }
    }
  }
  return 0;
}
