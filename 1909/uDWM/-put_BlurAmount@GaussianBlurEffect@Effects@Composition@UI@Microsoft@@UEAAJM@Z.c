/*
 * XREFs of ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJM@Z @ 0x18003DA60
 * Callers:
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003D4E4 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        float a2)
{
  if ( a2 < 0.0 || a2 > 250.0 )
    return 2147942487LL;
  *((float *)this + 10) = a2;
  return 0LL;
}
