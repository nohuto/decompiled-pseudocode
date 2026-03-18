/*
 * XREFs of SearchInCHSBaseFontFileNameSuffixes @ 0x1C013CED0
 * Callers:
 *     ?IsCHSBaseFont@@YAHPEBGIPEAJ@Z @ 0x1C013CE18 (-IsCHSBaseFont@@YAHPEBGIPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SearchInCHSBaseFontFileNameSuffixes(
        PCUNICODE_STRING String1,
        PCUNICODE_STRING String2,
        unsigned int a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !a3 )
    return 0xFFFFFFFFLL;
  while ( !RtlEqualUnicodeString(String1, String2, 0) )
  {
    ++String2;
    if ( ++v3 >= a3 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}
