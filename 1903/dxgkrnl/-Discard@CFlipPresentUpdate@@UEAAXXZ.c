/*
 * XREFs of ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0064290
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C006433C (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipPresentUpdate::Discard(CFlipPresentUpdate *this)
{
  FlipManagerObject *v2; // rcx

  v2 = (FlipManagerObject *)*((_QWORD *)this + 1);
  if ( v2 )
    FlipManagerObject::ProcessDiscardedProducerPresentUpdate(v2, this);
  (*(void (__fastcall **)(CFlipPresentUpdate *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
}
