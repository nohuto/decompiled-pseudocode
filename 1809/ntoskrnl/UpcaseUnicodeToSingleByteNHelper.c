/*
 * XREFs of UpcaseUnicodeToSingleByteNHelper @ 0x1400F4B90
 * Callers:
 *     RtlUpcaseUnicodeToOemN @ 0x14067D420 (RtlUpcaseUnicodeToOemN.c)
 *     RtlUpcaseUnicodeToMultiByteN @ 0x14067D480 (RtlUpcaseUnicodeToMultiByteN.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpcaseUnicodeToSingleByteNHelper(
        _BYTE *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        __int64 a6,
        __int64 a7)
{
  unsigned int v7; // eax
  __int64 v10; // rbp
  unsigned __int16 v11; // r9

  v7 = a5;
  if ( a5 >= a2 )
    v7 = a2;
  if ( a3 )
    *a3 = v7;
  if ( v7 )
  {
    v10 = v7;
    do
    {
      v11 = *(_WORD *)(a7 + 2LL * *(unsigned __int8 *)(*a4 + a6));
      if ( v11 >= 0x61u )
      {
        if ( v11 > 0x7Au )
          v11 += *(_WORD *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * (v11 & 0xF)
                                                                         + 2
                                                                         * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((v11 >> 4) & 0xF) + 2 * *(unsigned __int16 *)&(*(BOOLEAN **)((char *)&NlsMbCodePageTag + 6))[2 * ((unsigned __int64)v11 >> 8)]]];
        else
          v11 -= 32;
      }
      ++a4;
      *a1++ = *(_BYTE *)(v11 + a6);
      --v10;
    }
    while ( v10 );
  }
  if ( a5 > a2 )
    return 2147483653LL;
  else
    return 0LL;
}
