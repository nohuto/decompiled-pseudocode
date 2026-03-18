/*
 * XREFs of SignExtendLong @ 0x1C0140370
 * Callers:
 *     RIMExtractPointerPropertyValues @ 0x1C013C920 (RIMExtractPointerPropertyValues.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SignExtendLong(unsigned int a1, char a2)
{
  int v2; // eax

  v2 = 1 << (a2 - 1);
  if ( (v2 & a1) != 0 )
    return a1 | -v2;
  else
    return a1;
}
