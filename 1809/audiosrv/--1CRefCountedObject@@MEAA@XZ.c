/*
 * XREFs of ??1CRefCountedObject@@MEAA@XZ @ 0x180042EC4
 * Callers:
 *     _CPolicyConfig::CPolicyConfig_::_1_::dtor$0 @ 0x180070378 (_CPolicyConfig--CPolicyConfig_--_1_--dtor$0.c)
 *     _CPolicyConfig::_CPolicyConfig_::_1_::dtor$0 @ 0x1800CEB01 (_CPolicyConfig--_CPolicyConfig_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

void __fastcall CRefCountedObject::~CRefCountedObject(CRefCountedObject *this)
{
  *(_QWORD *)this = &CRefCountedObject::`vftable';
}
