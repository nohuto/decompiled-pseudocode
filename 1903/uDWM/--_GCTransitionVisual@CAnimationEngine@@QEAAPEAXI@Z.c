/*
 * XREFs of ??_GCTransitionVisual@CAnimationEngine@@QEAAPEAXI@Z @ 0x18000773C
 * Callers:
 *     ??1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ @ 0x1800076B4 (--1CTransitionVisualSet@CAnimationEngine@@UEAA@XZ.c)
 *     ?Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z @ 0x180007900 (-Initialize@CTransitionVisualSet@CAnimationEngine@@QEAAJPEAPEAUIAnimatedVisual@@I@Z.c)
 * Callees:
 *     ??1CTransitionVisual@CAnimationEngine@@QEAA@XZ @ 0x180007770 (--1CTransitionVisual@CAnimationEngine@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18004FE00 (_guard_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVisual *__fastcall CAnimationEngine::CTransitionVisual::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVisual *this)
{
  CAnimationEngine::CTransitionVisual::~CTransitionVisual(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CAnimationEngine::CTransitionVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
