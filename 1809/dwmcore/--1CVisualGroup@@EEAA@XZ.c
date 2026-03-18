/*
 * XREFs of ??1CVisualGroup@@EEAA@XZ @ 0x1801B8CDC
 * Callers:
 *     ??_GCVisualGroup@@EEAAPEAXI@Z @ 0x1801B8D30 (--_GCVisualGroup@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ClearVisualGroupData@CVisualGroup@@AEAAXXZ @ 0x1801B8D78 (-ClearVisualGroupData@CVisualGroup@@AEAAXXZ.c)
 */

void __fastcall CVisualGroup::~CVisualGroup(void **this)
{
  *this = &CVisualGroup::`vftable';
  CVisualGroup::ClearVisualGroupData((CVisualGroup *)this);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 11);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 7);
  CResource::~CResource((CResource *)this);
}
