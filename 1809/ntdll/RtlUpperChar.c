/*
 * XREFs of RtlUpperChar @ 0x180075070
 * Callers:
 *     RtlPrefixString @ 0x180074F50 (RtlPrefixString.c)
 *     RtlEqualString @ 0x180074FD0 (RtlEqualString.c)
 *     RtlCompareString @ 0x18008D440 (RtlCompareString.c)
 *     RtlUpperString @ 0x1800EC240 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __cdecl RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
