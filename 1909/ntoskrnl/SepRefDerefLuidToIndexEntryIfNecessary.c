/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x14060C7D0
 * Callers:
 *     SepTokenDeleteMethod @ 0x14060C660 (SepTokenDeleteMethod.c)
 *     SepSetProcessUniqueAttribute @ 0x14061AEA4 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 * Callees:
 *     SepReferenceLuidToIndexEntry @ 0x14000A490 (SepReferenceLuidToIndexEntry.c)
 *     SepDereferenceLuidToIndexEntry @ 0x140079AEC (SepDereferenceLuidToIndexEntry.c)
 */

signed __int64 __fastcall SepRefDerefLuidToIndexEntryIfNecessary(__int64 a1, char a2)
{
  __int64 v2; // rcx
  signed __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 1136);
  if ( v2 )
  {
    if ( a2 )
      return SepDereferenceLuidToIndexEntry(v2);
    else
      return SepReferenceLuidToIndexEntry(v2);
  }
  return result;
}
