/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x180039A24
 * Callers:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x18001D3A0 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     Microsoft::UI::Composition::Effects::EffectBase_Microsoft::UI::Composition::Effects::IGaussianBlurEffect_::UsePropertyFactory__lambda_20cc25e9e6e64aaab66070ee3f3626ad___ @ 0x1800389FC (Microsoft--UI--Composition--Effects--EffectBase_Microsoft--UI--Composition--Effects--IGaussianBl.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003B8D8 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x1800449A8 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180073304 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        HSTRING_HEADER *hstringHeader,
        PCWSTR sourceString,
        UINT32 a3,
        UINT32 a4)
{
  UINT32 v4; // eax
  HRESULT StringReference; // eax

  v4 = a4;
  if ( a4 >= a3 )
    v4 = a3 - 1;
  StringReference = WindowsCreateStringReference(sourceString, v4, hstringHeader, (HSTRING *)&hstringHeader[1]);
  if ( StringReference < 0 )
  {
    RaiseException(StringReference, 1u, 0, 0LL);
    JUMPOUT(0x18006724ELL);
  }
}
