/*
 * XREFs of ??1CAtlasedRectsMesh@@MEAA@XZ @ 0x18002A5B0
 * Callers:
 *     ??_ECAtlasedRectsMesh@@MEAAPEAXI@Z @ 0x18002A570 (--_ECAtlasedRectsMesh@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ @ 0x18002A9C0 (-UnRegisterNotifiers@CAtlasedRectsMesh@@MEAAXXZ.c)
 */

void __fastcall CAtlasedRectsMesh::~CAtlasedRectsMesh(CAtlasedRectsMesh *this)
{
  *(_QWORD *)this = &CAtlasedRectsMesh::`vftable';
  CAtlasedRectsMesh::UnRegisterNotifiers(this);
  CResource::~CResource(this);
}
