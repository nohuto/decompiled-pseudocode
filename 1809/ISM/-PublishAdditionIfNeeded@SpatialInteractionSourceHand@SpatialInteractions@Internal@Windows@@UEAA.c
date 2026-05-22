/*
 * XREFs of ?PublishAdditionIfNeeded@SpatialInteractionSourceHand@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800BD7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand::PublishAdditionIfNeeded(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceHand *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  *((_DWORD *)this + 3) = (*(__int64 (__fastcall **)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))(*(_QWORD *)a2 + 48LL))(a2);
  return 0LL;
}
