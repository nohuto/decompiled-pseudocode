/*
 * XREFs of RtlUpperChar @ 0x1406798A0
 * Callers:
 *     RtlEqualString @ 0x1400F2DD0 (RtlEqualString.c)
 *     RtlCompareString @ 0x1406796E0 (RtlCompareString.c)
 *     RtlPrefixString @ 0x140679790 (RtlPrefixString.c)
 *     RtlUpperString @ 0x140679840 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
