/*
 * XREFs of RtlUpperChar @ 0x1800621B0
 * Callers:
 *     RtlPrefixString @ 0x1800619B0 (RtlPrefixString.c)
 *     RtlEqualString @ 0x180062110 (RtlEqualString.c)
 *     RtlCompareString @ 0x1800899C0 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800E8E40 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
