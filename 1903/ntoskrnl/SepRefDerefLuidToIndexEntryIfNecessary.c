/*
 * XREFs of SepRefDerefLuidToIndexEntryIfNecessary @ 0x14060ACC0
 * Callers:
 *     SepTokenDeleteMethod @ 0x14060AB50 (SepTokenDeleteMethod.c)
 *     SepSetProcessUniqueAttribute @ 0x140619394 (SepSetProcessUniqueAttribute.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 * Callees:
 *     SepReferenceLuidToIndexEntry @ 0x14000A400 (SepReferenceLuidToIndexEntry.c)
 *     SepDereferenceLuidToIndexEntry @ 0x14007972C (SepDereferenceLuidToIndexEntry.c)
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
