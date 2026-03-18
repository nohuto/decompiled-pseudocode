/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x1801D5138
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x1801D5170 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[39]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
