/*
 * XREFs of RtlUpperChar @ 0x180062250
 * Callers:
 *     RtlPrefixString @ 0x180061A50 (RtlPrefixString.c)
 *     RtlEqualString @ 0x1800621B0 (RtlEqualString.c)
 *     RtlCompareString @ 0x18008A060 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800E8F30 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

char __fastcall RtlUpperChar(char a1)
{
  if ( (unsigned __int8)(a1 - 97) <= 0x19u )
    return a1 ^ 0x20;
  return a1;
}
