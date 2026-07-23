/*
 * XREFs of RtlUpperChar @ 0x14067AA60
 * Callers:
 *     RtlEqualString @ 0x1400F2E50 (RtlEqualString.c)
 *     RtlCompareString @ 0x14067A8A0 (RtlCompareString.c)
 *     RtlPrefixString @ 0x14067A950 (RtlPrefixString.c)
 *     RtlUpperString @ 0x14067AA00 (RtlUpperString.c)
 * Callees:
 *     <none>
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
