/*
 * XREFs of RtlpLfhFindClearBitAndSet @ 0x180069524
 * Callers:
 *     RtlpLocalInfoAllocFromCache @ 0x18006915C (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpLfhFindClearBitAndSet(unsigned __int64 *a1, unsigned int a2, int a3, unsigned int a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // r11
  __int64 *v6; // rdi
  __int64 *v8; // r10
  __int64 v9; // rbx
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 *v14; // rcx
  __int64 *v15; // rdx
  __int64 *v16; // rax

  v4 = *a1;
  v5 = -1LL;
  v6 = (__int64 *)a1[1];
  if ( *a1 >= 0x40 )
  {
    v14 = &v6[(v4 - 1) >> 6];
    v8 = &v6[(unsigned __int64)a2 >> 6];
    v15 = v8;
    do
    {
      if ( *v8 != -1 )
        break;
      v16 = v8++;
      if ( v16 == v14 )
        v8 = v6;
    }
    while ( v8 != v15 );
    if ( v8 == v14 && (v4 & 0x3F) != 0 && (v4 & 0x3F) < a4 )
      a4 = v4 & 0x3F;
  }
  else
  {
    v8 = (__int64 *)a1[1];
    if ( v4 < a4 )
      a4 = *a1;
  }
  v9 = *v8;
  v10 = (a4 * a3) >> 7;
  if ( a4 < 0x40 )
  {
    _BitScanForward64(&v11, ~v9);
    LOBYTE(v10) = v11 + v10;
    v5 = ((1LL << a4) - 1) << v11;
  }
  _BitScanForward64(&v12, ~__ROR8__(v9 | ~v5, v10));
  LODWORD(v12) = ((_BYTE)v10 + (_BYTE)v12) & 0x3F;
  *v8 = v9 | (1LL << v12);
  return (unsigned int)v12 + ((unsigned int)((__int64)((__int64)v8 - a1[1]) >> 3) << 6);
}
