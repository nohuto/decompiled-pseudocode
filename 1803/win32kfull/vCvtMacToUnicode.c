/*
 * XREFs of vCvtMacToUnicode @ 0x1C0224434
 * Callers:
 *     bConvertMac @ 0x1C0218EF4 (bConvertMac.c)
 *     bIndexToWchar @ 0x1C021E758 (bIndexToWchar.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall vCvtMacToUnicode(__int64 a1, _WORD *a2, unsigned __int8 *a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  v4 = 0LL;
  result = (unsigned __int64)&a3[(unsigned int)a4];
  a4 = (unsigned int)a4;
  if ( (unsigned __int64)a3 > result )
    a4 = 0LL;
  if ( a4 )
  {
    do
    {
      result = *a3;
      ++v4;
      ++a3;
      *a2++ = result;
    }
    while ( v4 < a4 );
  }
  return result;
}
