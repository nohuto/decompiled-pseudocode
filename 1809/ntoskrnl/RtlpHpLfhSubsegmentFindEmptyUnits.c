/*
 * XREFs of RtlpHpLfhSubsegmentFindEmptyUnits @ 0x14010E950
 * Callers:
 *     RtlpHpLfhSubsegmentFree @ 0x14010E8B0 (RtlpHpLfhSubsegmentFree.c)
 *     RtlpHpLfhSubsegmentDecommitPages @ 0x1402FD8EC (RtlpHpLfhSubsegmentDecommitPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpLfhSubsegmentFindEmptyUnits(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // r11
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  _WORD *v6; // rcx
  __int64 result; // rax
  _WORD *i; // rdx

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
