/*
 * XREFs of ??_GCTransitionVariable@CAnimationEngine@@QEAAPEAXI@Z @ 0x18009D864
 * Callers:
 *     ?Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ @ 0x180030F60 (-Initialize@CTransitionVisual@CAnimationEngine@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

CAnimationEngine::CTransitionVariable *__fastcall CAnimationEngine::CTransitionVariable::`scalar deleting destructor'(
        CAnimationEngine::CTransitionVariable *this)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)this;
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *(_QWORD *)this = 0LL;
  }
  (*(void (__fastcall **)(WPF::HeapBase *, CAnimationEngine::CTransitionVariable *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
