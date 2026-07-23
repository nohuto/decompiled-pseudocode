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

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
