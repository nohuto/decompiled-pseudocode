/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B43A0
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E720 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsE.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E730 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004E730.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E740 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004E740.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004E750 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18004E750.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGraphicsEffectSource@Effects@Graphics@Windows@@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18003BC50 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIGraphicsEffectSource@.c)
 *     InlineIsEqualGUID @ 0x18003BD58 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x18004E2E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  _QWORD *v8; // r8
  __int64 v9; // r9
  int CanCastTo; // ebx
  __int64 v11; // r10

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_cb51c0ce_8fe6_4636_b202_861faa07d8f3)
    || InlineIsEqualGUID(v7, &GUID_00000038_0000_0000_c000_000000000046) )
  {
    *v8 = v9;
    CanCastTo = 0;
LABEL_7:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    return (unsigned int)CanCastTo;
  }
  CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::CanCastTo(
                v9 + 8,
                v11);
  if ( CanCastTo >= 0 )
    goto LABEL_7;
  return (unsigned int)CanCastTo;
}
