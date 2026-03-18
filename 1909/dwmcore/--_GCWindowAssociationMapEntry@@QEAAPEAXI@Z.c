/*
 * XREFs of ??_GCWindowAssociationMapEntry@@QEAAPEAXI@Z @ 0x18004B428
 * Callers:
 *     ?RemoveEntry@CWindowManager@@AEAAJ_K@Z @ 0x18004B3A8 (-RemoveEntry@CWindowManager@@AEAAJ_K@Z.c)
 *     ??$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z @ 0x1801A9B9C (--$SAFE_DELETE@VCWindowAssociationMapEntry@@@@YAXAEAPEAVCWindowAssociationMapEntry@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?Clear@CPtrArrayBase@@IEAAXXZ @ 0x1800D521C (-Clear@CPtrArrayBase@@IEAAXXZ.c)
 */

CWindowAssociationMapEntry *__fastcall CWindowAssociationMapEntry::`scalar deleting destructor'(
        CWindowAssociationMapEntry *this)
{
  CPtrArrayBase::Clear((CWindowAssociationMapEntry *)((char *)this + 16));
  operator delete(this);
  return this;
}
