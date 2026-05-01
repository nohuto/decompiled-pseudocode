/*
 * XREFs of ?QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18009F010
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCopyToViewValueSetBase@@@Details@23@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18009EF04 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U-$Implem_ea_18009EF04.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180390650 (-QueryService@CopyToViewValueSetBase@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 */

__int64 __fastcall DelayedTileActivationCallSite::QueryService(
        DelayedTileActivationCallSite *this,
        const struct _GUID *a2,
        struct _GUID *a3,
        void **a4)
{
  void *v5; // r9
  _DWORD *v6; // r10
  int CanCastTo; // ebx

  *a4 = 0LL;
  if ( *(_OWORD *)a2 != *(_OWORD *)&GUID_23710692_92e0_4a33_a781_a81596a4cd7d || !*((_BYTE *)this + 109) )
    return CopyToViewValueSetBase::QueryService(this, a2, a3, a4);
  if ( InlineIsEqualGUID(a3, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    *a4 = v5;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CopyToViewValueSetBase>,IOleWindow,IShouldSwitchToDesktop>::CanCastTo(
                  (__int64)v5,
                  v6);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 8LL))(*a4);
  }
  return (unsigned int)CanCastTo;
}
