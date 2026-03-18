/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x14064EFA0
 * Callers:
 *     SepSetProcessUniqueAttribute @ 0x14064EEB4 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 * Callees:
 *     SepDereferenceLuidToIndexEntry @ 0x140021220 (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x1400CCAE0 (SepReferenceLuidToIndexEntry.c)
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
