/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180039C90
 * Callers:
 *     ?Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ @ 0x180039C80 (-Release@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@IEAAKXZ @ 0x18003C7DC (-InternalRelease@-$ComPtr@VGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@WRL@Microsoft@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180050010 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_180050010.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180050020 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_180050020.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180050030 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_180050030.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGraphicsEffect@Effects@Graphics@Windows@@UIGraphicsEffectSource@567@UIGraphicsEffectD2D1Interop@567@UIGaussianBlurEffect@5Composition@UI@3@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180050040 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIGra_ea_180050040.c)
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18004F9B8 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004FB50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::Release(
        __int64 a1)
{
  signed __int64 v1; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 48);
  v2 = a1;
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 2147483646;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), v1 - 1, v1);
    if ( v4 == v1 )
      goto LABEL_8;
  }
  v3 = Microsoft::WRL::Details::SafeUnknownDecrementReference(
         (Microsoft::WRL::Details *)(2 * v1 + 16),
         (volatile int *)((unsigned __int64)v1 >> 63));
LABEL_8:
  if ( !v3 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 64LL))(v2, 1LL);
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
  }
  return v3;
}
