/*
 * XREFs of RtlUpperChar @ 0x1406798C0
 * Callers:
 *     RtlEqualString @ 0x1400F2DB0 (RtlEqualString.c)
 *     RtlCompareString @ 0x140679700 (RtlCompareString.c)
 *     RtlPrefixString @ 0x1406797B0 (RtlPrefixString.c)
 *     RtlUpperString @ 0x140679860 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
