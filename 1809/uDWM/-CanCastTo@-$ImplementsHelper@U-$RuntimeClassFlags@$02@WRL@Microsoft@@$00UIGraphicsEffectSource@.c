/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGraphicsEffectSource@Effects@Graphics@Windows@@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18003BC50
 * Callers:
 *     ?QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003BCC0 (-QueryInterface@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B43A0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_1800B43A0.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18003BD58 (InlineIsEqualGUID.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::CanCastTo(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r10
  __int64 v5; // rcx
  _QWORD *v6; // r8
  unsigned int v7; // r9d
  __int64 v8; // r10
  _QWORD *v10; // r8
  __int64 v11; // r10

  if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_2d8f9ddc_4339_4eb9_9216_f9deb75658a2) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( (unsigned int)InlineIsEqualGUID(v2, &GUID_2fc57384_a068_44d7_a331_30982fcf7177) )
    {
      *v6 = v8;
    }
    else if ( (unsigned int)InlineIsEqualGUID(v5, &GUID_cc3ff255_a83d_5aed_8187_70f64bbd9e51) )
    {
      *v10 = v11 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v7;
  }
}
