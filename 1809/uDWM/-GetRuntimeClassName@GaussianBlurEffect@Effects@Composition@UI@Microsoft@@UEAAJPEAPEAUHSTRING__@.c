/*
 * XREFs of ?GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800B41C0
 * Callers:
 *     ?GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18004E6C0 (-GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WBA@EAAJPEAPEAUHSTRING.c)
 *     ?GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAJPEAPEAUHSTRING__@@@Z @ 0x18004E6D0 (-GetRuntimeClassName@GaussianBlurEffect@Effects@Composition@UI@Microsoft@@WCA@EAAJPEAPEAUHSTRING.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::UI::Composition::Effects::GaussianBlurEffect::GetRuntimeClassName(
        Microsoft::UI::Composition::Effects::GaussianBlurEffect *this,
        HSTRING *a2)
{
  *a2 = 0LL;
  return WindowsCreateString(L"Microsoft.UI.Composition.Effects.GaussianBlurEffect", 0x33u, a2);
}
