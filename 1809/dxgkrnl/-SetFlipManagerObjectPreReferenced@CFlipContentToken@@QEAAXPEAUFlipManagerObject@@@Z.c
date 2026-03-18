/*
 * XREFs of ?SetFlipManagerObjectPreReferenced@CFlipContentToken@@QEAAXPEAUFlipManagerObject@@@Z @ 0x1C005DC40
 * Callers:
 *     ?FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4FlipPresentProcessResult@@@Z @ 0x1C0059088 (-FlipManagerApplyDwmConsumerUpdates@@YAJ_KPEAUFlipManagerTokenObject@@AEAU_LIST_ENTRY@@PEAW4Flip.c)
 *     ??1CFlipContentToken@@UEAA@XZ @ 0x1C005D9F0 (--1CFlipContentToken@@UEAA@XZ.c)
 *     ?Discard@CFlipContentToken@@UEAAXXZ @ 0x1C005DB20 (-Discard@CFlipContentToken@@UEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipContentToken::SetFlipManagerObjectPreReferenced(
        CFlipContentToken *this,
        struct FlipManagerObject *a2)
{
  void *v4; // rcx

  v4 = (void *)*((_QWORD *)this + 11);
  if ( v4 )
    ObfDereferenceObject(v4);
  *((_QWORD *)this + 11) = a2;
}
