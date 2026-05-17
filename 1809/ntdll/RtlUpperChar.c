/*
 * XREFs of RtlUpperChar @ 0x180075060
 * Callers:
 *     RtlPrefixString @ 0x180074F40 (RtlPrefixString.c)
 *     RtlEqualString @ 0x180074FC0 (RtlEqualString.c)
 *     RtlCompareString @ 0x18008D430 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800EC240 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlUpperChar(char a1)
{
  if ( (unsigned __int8)(a1 - 97) <= 0x19u )
    return a1 ^ 0x20;
  return a1;
}
