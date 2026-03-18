/*
 * XREFs of ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C005D060
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C005D10C (-ProcessDiscardedProducerPresentUpdate@FlipManagerObject@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 */

void __fastcall CFlipPresentUpdate::Discard(CFlipPresentUpdate *this)
{
  FlipManagerObject *v2; // rcx

  v2 = (FlipManagerObject *)*((_QWORD *)this + 1);
  if ( v2 )
    FlipManagerObject::ProcessDiscardedProducerPresentUpdate(v2, this);
  (*(void (__fastcall **)(CFlipPresentUpdate *, __int64))(*(_QWORD *)this + 24LL))(this, 1LL);
}
