/*
 * XREFs of ??1CInjectionAnimation@@UEAA@XZ @ 0x18019AB94
 * Callers:
 *     ??_ECInjectionAnimation@@UEAAPEAXI@Z @ 0x18019ABD0 (--_ECInjectionAnimation@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CInjectionAnimation::~CInjectionAnimation(void **this)
{
  *this = &CInjectionAnimation::`vftable';
  WPF::ProcessHeapImpl::Free(this[36]);
  CBaseExpression::~CBaseExpression((CBaseExpression *)this);
}
