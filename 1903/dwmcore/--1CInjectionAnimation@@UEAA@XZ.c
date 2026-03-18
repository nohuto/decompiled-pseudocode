/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x1801D6868
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x1801D68A0 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  operator delete(this[39]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
