/*
 * XREFs of ??$MakeAndInitialize@VAcrylicPolicyManager@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18012610C
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VAcrylicPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x180127500 (-CreateInstance@-$SimpleClassFactory@VAcrylicPolicyManager@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknow.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0AcrylicPolicyManager@@QEAA@XZ @ 0x18012670C (--0AcrylicPolicyManager@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00U?$ImplementsMarker@VCImmersiveShellComponentWithGITSite@@@Details@23@UIWeakReferenceSource@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180127384 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00U-$Impleme_ea_180127384.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIAcrylicPolicyManager@@UIImmersiveWindowMessageNotification@@UIBatterySaverStateChangedHandler@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127EA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_180127EA0.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<AcrylicPolicyManager,IUnknown,>(
        AcrylicPolicyManager **a1)
{
  AcrylicPolicyManager *v2; // rax
  int CanCastTo; // edi
  AcrylicPolicyManager *v4; // rax
  AcrylicPolicyManager *v5; // rbx
  _DWORD *v6; // rcx
  __int64 v7; // r9

  *a1 = 0LL;
  v2 = (AcrylicPolicyManager *)operator new(0x1D8uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v2 )
  {
    v4 = AcrylicPolicyManager::AcrylicPolicyManager(v2);
    *a1 = 0LL;
    v5 = v4;
    if ( InlineIsEqualGUID(&GUID_00000000_0000_0000_c000_000000000046, &GUID_00000000_0000_0000_c000_000000000046)
      || InlineIsEqualGUID(v6, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *a1 = v5;
      (*(void (__fastcall **)(AcrylicPolicyManager *))(*(_QWORD *)v5 + 8LL))(v5);
      CanCastTo = 0;
    }
    else
    {
      CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<CImmersiveShellComponentWithGITSite>,IWeakReferenceSource,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,Microsoft::WRL::FtmBase>::CanCastTo(
                    (char *)v5 + 8,
                    v7,
                    a1);
      if ( CanCastTo >= 0 )
        (*(void (__fastcall **)(AcrylicPolicyManager *))(*(_QWORD *)*a1 + 8LL))(*a1);
    }
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IAcrylicPolicyManager,IImmersiveWindowMessageNotification,IBatterySaverStateChangedHandler,Microsoft::WRL::FtmBase>::Release(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)CanCastTo;
}
