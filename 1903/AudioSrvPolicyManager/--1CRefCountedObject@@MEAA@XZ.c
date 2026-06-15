/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x180017FC4
 * Callers:
 *     _CApplication::CApplication_::_1_::dtor$0 @ 0x180036331 (_CApplication--CApplication_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
