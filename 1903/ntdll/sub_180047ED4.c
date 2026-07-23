/*
 * XREFs of sub_180047ED4 @ 0x180047ED4
 * Callers:
 *     sub_180045188 @ 0x180045188 (sub_180045188.c)
 *     sub_18004F06C @ 0x18004F06C (sub_18004F06C.c)
 * Callees:
 *     sub_180047F94 @ 0x180047F94 (sub_180047F94.c)
 *     sub_180101024 @ 0x180101024 (sub_180101024.c)
 */

__int64 __fastcall sub_180047ED4(__int64 a1)
{
  __int64 v1; // rbp
  __int64 i; // rsi
  __int64 result; // rax

  v1 = a1 + 336;
  for ( i = *(_QWORD *)(a1 + 344); i != v1; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(i - 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(i - 5) != (*(_BYTE *)(i - 8) ^ (unsigned __int8)(*(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6))) )
        sub_180101024(a1, i - 16);
    }
    result = 256LL;
    if ( *(_WORD *)(i - 8) <= 0x100u )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
        result = *(unsigned int *)(a1 + 136);
        *(_DWORD *)(i - 8) ^= result;
      }
      return result;
    }
    if ( (*(_BYTE *)(i - 6) & 8) != 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(i - 5) = *(_BYTE *)(i - 8) ^ *(_BYTE *)(i - 7) ^ *(_BYTE *)(i - 6);
        result = *(unsigned int *)(a1 + 136);
        *(_DWORD *)(i - 8) ^= result;
      }
    }
    else
    {
      result = sub_180047F94(a1);
    }
  }
  return result;
}
