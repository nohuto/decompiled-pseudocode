/*
 * XREFs of RtlAreBitsSetEx @ 0x1402EE220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlAreBitsSetEx(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  char v3; // r9
  unsigned __int64 v4; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // r10
  __int64 *v9; // r11

  v3 = a2;
  v4 = a2 + a3 - 1;
  if ( v4 >= *(_QWORD *)a1 )
    return 0;
  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
      return _bittest64(*(const signed __int64 **)(a1 + 8), a2);
    return 0;
  }
  v6 = *(_QWORD *)(a1 + 8);
  v7 = (__int64 *)(v6 + 8 * (a2 >> 6));
  v8 = *v7;
  v9 = (__int64 *)(v6 + 8 * (v4 >> 6));
  if ( v7 == v9 )
    return ((0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << v3) & v8) == 0xFFFFFFFFFFFFFFFFuLL >> (64 - (unsigned __int8)a3) << v3;
  if ( ((-1LL << v3) & v8) != -1LL << v3 )
    return 0;
  while ( ++v7 != v9 )
  {
    if ( *v7 != -1 )
      return 0;
  }
  return ((0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v4) & *v7) == 0xFFFFFFFFFFFFFFFFuLL >> ~(_BYTE)v4;
}
