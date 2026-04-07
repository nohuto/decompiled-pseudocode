/*
 * XREFs of ??_ECAnimationComponent@@UEAAPEAXI@Z @ 0x18000BE90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAnimationComponent@@UEAA@XZ @ 0x18000BED4 (--1CAnimationComponent@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CAnimationComponent *__fastcall CAnimationComponent::`vector deleting destructor'(CAnimationComponent *this, char a2)
{
  CAnimationComponent::~CAnimationComponent(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CAnimationComponent *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
