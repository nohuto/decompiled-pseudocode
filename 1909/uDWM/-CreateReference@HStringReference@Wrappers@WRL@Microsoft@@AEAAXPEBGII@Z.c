/*
 * XREFs of ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18003B44C
 * Callers:
 *     ?EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ @ 0x180015D20 (-EnsureDCompositionInteropDevice@CDesktopManager@@AEAAJXZ.c)
 *     Microsoft::UI::Composition::Effects::EffectBase_Microsoft::UI::Composition::Effects::IGaussianBlurEffect_::UsePropertyFactory__lambda_20cc25e9e6e64aaab66070ee3f3626ad___ @ 0x18003A48C (Microsoft--UI--Composition--Effects--EffectBase_Microsoft--UI--Composition--Effects--IGaussianBl.c)
 *     ?CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUICompositionBrush@Composition@1Windows@@@Z @ 0x18003D4E4 (-CreateHostBackdropBrush@UI@WindowsInternal@@YAJPEAUIDCompositionDesktopDevicePartner@@PEAPEAUIC.c)
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z @ 0x180042704 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJK@Z.c)
 *     ?Initialize@CDisplayBroker@@QEAAJXZ @ 0x1800432D8 (-Initialize@CDisplayBroker@@QEAAJXZ.c)
 *     ?CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePartner@Composition@UI@Windows@@W4LightType@45@PEAPEAUIExpressionAnimation@345@@Z @ 0x18004A800 (-CreateExpressionAnimationFromHoverPointerSource@CGlobalLightSet@@AEBAJPEAUIHoverPointerSourcePa.c)
 *     ?AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@Windows@@PEAUIExpressionAnimation@345@@Z @ 0x18004AA20 (-AttachExpressionAnimationToRevealSpotLight@CGlobalLightSet@@AEBAJPEAUISpotLight@Composition@UI@.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x180079984 (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
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
    JUMPOUT(0x180069F24LL);
  }
}
