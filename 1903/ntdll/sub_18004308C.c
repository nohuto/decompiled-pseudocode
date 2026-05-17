/*
 * XREFs of sub_18004308C @ 0x18004308C
 * Callers:
 *     sub_1800413B0 @ 0x1800413B0 (sub_1800413B0.c)
 *     sub_180050E08 @ 0x180050E08 (sub_180050E08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18004308C(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r11
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  _WORD *v6; // rcx
  _WORD *i; // rdx
  __int64 result; // rax

  v3 = a1 + *(unsigned __int16 *)(a1 + 46);
  LODWORD(v4) = a2;
  v5 = v3 + 2LL * *(unsigned __int8 *)(a1 + 45);
  v6 = (_WORD *)(v3 + 2LL * a2);
  if ( *v6 )
  {
    if ( (unsigned __int64)v6 >= v5 )
      return 0xFFFFFFFFLL;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
    }
    while ( (unsigned __int64)v6 < v5 );
    if ( (unsigned __int64)v6 >= v5 )
      return 0xFFFFFFFFLL;
    v4 = ((__int64)v6 - v3) >> 1;
  }
  else
  {
    do
      --v6;
    while ( !*v6 );
    ++v6;
  }
  for ( i = (_WORD *)(v3 + 2 * ((unsigned int)v4 + 1LL)); !*i && (unsigned __int64)i < v5; ++i )
    ;
  result = ((__int64)v6 - v3) >> 1;
  *a3 = i - v6;
  return result;
}
