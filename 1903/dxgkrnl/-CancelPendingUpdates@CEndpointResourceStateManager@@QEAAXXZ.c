/*
 * XREFs of ?CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00622D0
 * Callers:
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0060C5C (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAJ_K0AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006433C (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CEndpointResourceStateManager::CancelPendingUpdates(CEndpointResourceStateManager *this)
{
  char *v1; // rsi
  char *v3; // rcx
  char *v4; // rbx
  CEndpointResourceStateManager **v5; // rcx
  CEndpointResourceStateManager *v6; // rbx

  v1 = (char *)this + 16;
  v3 = (char *)*((_QWORD *)this + 2);
  if ( v3 != v1 )
  {
    do
    {
      v4 = *(char **)v3;
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v3 - 1) + 8LL))((_QWORD *)v3 - 1);
      v3 = v4;
    }
    while ( v4 != v1 );
  }
  v5 = *(CEndpointResourceStateManager ***)this;
  if ( *(CEndpointResourceStateManager **)this != this )
  {
    do
    {
      v6 = *v5;
      (*((void (__fastcall **)(CEndpointResourceStateManager **))*(v5 - 1) + 1))(v5 - 1);
      v5 = (CEndpointResourceStateManager **)v6;
    }
    while ( v6 != this );
  }
}
