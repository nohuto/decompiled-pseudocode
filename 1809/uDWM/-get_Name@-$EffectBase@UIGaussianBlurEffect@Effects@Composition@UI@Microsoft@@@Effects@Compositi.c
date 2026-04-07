/*
 * XREFs of ?get_Name@?$EffectBase@UIGaussianBlurEffect@Effects@Composition@UI@Microsoft@@@Effects@Composition@UI@Microsoft@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x18003B810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

HRESULT __fastcall Microsoft::UI::Composition::Effects::EffectBase<Microsoft::UI::Composition::Effects::IGaussianBlurEffect>::get_Name(
        __int64 a1,
        HSTRING *a2)
{
  return WindowsDuplicateString(*(HSTRING *)(a1 + 56), a2);
}
