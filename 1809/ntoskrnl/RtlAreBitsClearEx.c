/*
 * XREFs of RtlAreBitsClearEx @ 0x140114430
 * Callers:
 *     MiMarkRetpolineBits @ 0x140854FB0 (MiMarkRetpolineBits.c)
 *     MiHotAddPartitionMemory @ 0x140861634 (MiHotAddPartitionMemory.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlAreBitsClearEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  __int64 v4; // rcx
  __int64 *v5; // r10
  __int64 v6; // rbx
  __int64 *v7; // r11
  __int64 *v10; // r10

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
  if ( v5 != v7 )
  {
    if ( (v6 & (-1LL << a2)) == 0 )
    {
      v10 = v5 + 1;
      if ( v10 == v7 )
        return (*v10 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v3)) == 0;
      while ( !*v10 )
      {
        if ( ++v10 == v7 )
          return (*v10 & (0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v3)) == 0;
      }
    }
    return 0;
  }
  return (v6 & (0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << a2)) == 0;
}
