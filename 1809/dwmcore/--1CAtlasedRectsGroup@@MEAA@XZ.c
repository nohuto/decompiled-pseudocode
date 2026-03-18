/*
 * XREFs of ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x18009FED0
 * Callers:
 *     ??_ECAtlasedRectsGroup@@MEAAPEAXI@Z @ 0x18009FE90 (--_ECAtlasedRectsGroup@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800A00D0 (-UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsGroup::~CAtlasedRectsGroup(CAtlasedRectsGroup *this)
{
  *(_QWORD *)this = &CAtlasedRectsGroup::`vftable';
  CAtlasedRectsGroup::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
