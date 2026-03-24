/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x14064EF80
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x14064EE94 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x140657CCC (SepFilterToken.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x140021220 (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x1400CCB00 (SepReferenceLuidToIndexEntry.c)
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
