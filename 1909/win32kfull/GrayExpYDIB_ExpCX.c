/*
 * XREFs of GrayExpYDIB_ExpCX @ 0x1C0265DC4
 * Callers:
 *     GrayExpandDIB_CY_ExpCX @ 0x1C02668C0 (GrayExpandDIB_CY_ExpCX.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GrayExpYDIB_ExpCX(unsigned __int64 *a1, unsigned __int8 *a2, _BYTE *a3, _BYTE *a4)
{
  unsigned __int64 v7; // rax
  int v8; // r8d
  __int64 result; // rax

  do
  {
    v7 = *a1++;
    a2 += (unsigned __int64)(unsigned __int16)v7 >> 15;
    v8 = *a2 * HIWORD(v7);
    if ( WORD2(v7) )
    {
      v8 += WORD2(v7) * *(a2 - 1);
      if ( WORD1(v7) )
      {
        v8 += WORD1(v7) * *(a2 - 2);
        if ( (v7 & 0x3FFF) != 0 )
          v8 += (v7 & 0x3FFF) * *(a2 - 3);
      }
    }
    result = (unsigned int)(v8 + 4096) >> 13;
    *a3++ = result;
  }
  while ( a3 != a4 );
  return result;
}
