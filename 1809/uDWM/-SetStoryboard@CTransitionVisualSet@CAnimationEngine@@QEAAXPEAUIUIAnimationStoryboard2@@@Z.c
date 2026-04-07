/*
 * XREFs of ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x18000CBFC
 * Callers:
 *     ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x18000FB54 (-SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAnimationEngine::CTransitionVisualSet::SetStoryboard(
        CAnimationEngine::CTransitionVisualSet *this,
        struct IUIAnimationStoryboard2 *a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    *((_QWORD *)this + 4) = 0LL;
  }
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))a2->lpVtbl->AddRef)(a2);
  *((_BYTE *)this + 48) = 1;
}
