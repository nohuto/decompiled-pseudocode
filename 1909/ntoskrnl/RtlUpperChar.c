/*
 * XREFs of RtlUpperChar @ 0x14066A150
 * Callers:
 *     RtlEqualString @ 0x1400D1010 (RtlEqualString.c)
 *     RtlPrefixString @ 0x14066A250 (RtlPrefixString.c)
 *     RtlCompareString @ 0x14066AD50 (RtlCompareString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1406672F0 (RtlpIsUtf8Process.c)
 */

CHAR __stdcall RtlUpperChar(CHAR Character)
{
  RtlpIsUtf8Process(0);
  if ( (unsigned __int8)(Character - 97) <= 0x19u )
    return Character ^ 0x20;
  return Character;
}
