/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$0A@U?$ImplementsMarker@VCopyToViewValueSetBase@@@Details@23@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18009EF04
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToViewValueSetBase@@UIOleWindow@@UIShouldSwitchToDesktop@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009EFA0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCopyToVie.c)
 *     ?QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x18009F010 (-QueryService@DelayedTileActivationCallSite@@UEAAJAEBU_GUID@@0PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIUpdateViewValueSet@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18022C8E0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UIUpdateViewValueSet@@V.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,0,Microsoft::WRL::Details::ImplementsMarker<CopyToViewValueSetBase>,IOleWindow,IShouldSwitchToDesktop>::CanCastTo(
        __int64 a1,
        _DWORD *a2)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  _QWORD *v5; // r8
  __int64 v6; // r9
  _DWORD *v7; // r11
  __int64 result; // rax
  _DWORD *v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r10d

  if ( InlineIsEqualGUID(a2, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352) )
  {
    *v4 = a1;
    return 0LL;
  }
  if ( InlineIsEqualGUID(v3, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa) )
  {
    *v5 = v6;
    result = 0LL;
  }
  else
  {
    result = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IUpdateViewValueSet,Microsoft::WRL::FtmBase>::CanCastTo(
               v6 + 8,
               v7);
  }
  if ( (_DWORD)result == -2147467262 )
  {
    if ( InlineIsEqualGUID(v7, &GUID_00000114_0000_0000_c000_000000000046) )
    {
      *v10 = v11;
      return 0LL;
    }
    if ( InlineIsEqualGUID(v9, &GUID_23710692_92e0_4a33_a781_a81596a4cd7d) )
    {
      *v12 = v13 + 8;
      return 0LL;
    }
    return v14;
  }
  return result;
}
