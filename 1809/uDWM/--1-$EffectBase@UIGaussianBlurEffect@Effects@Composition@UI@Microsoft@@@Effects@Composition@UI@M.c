/*
 * XREFs of ??1?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@Microsoft@@UEAA@XZ @ 0x18003A620
 * Callers:
 *     ??_EGaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAPEAXI@Z @ 0x18003A5D0 (--_EGaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAPEAXI@Z.c)
 *     ??_E?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@Microsoft@@UEAAPEAXI@Z @ 0x1800B3F40 (--_E-$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::~EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>(
        __int64 a1)
{
  WindowsDeleteString(*(HSTRING *)(a1 + 56));
  *(_QWORD *)(a1 + 56) = 0LL;
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Graphics::Effects::IGraphicsEffect,Windows::Graphics::Effects::IGraphicsEffectSource,Windows::Graphics::Effects::IGraphicsEffectD2D1Interop,Microsoft::UI::Composition::Effects::IGaussianBlurEffect>(a1);
}
