/*
 * XREFs of ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x180029DD0
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x180029D90 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x18002AE80 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsGroup::~CAtlasedRectsGroup(CAtlasedRectsGroup *this)
{
  *(_QWORD *)this = &CAtlasedRectsGroup::`vftable';
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
