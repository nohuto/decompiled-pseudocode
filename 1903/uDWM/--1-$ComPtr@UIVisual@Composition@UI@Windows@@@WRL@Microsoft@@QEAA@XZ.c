/*
 * XREFs of ??1?$ComPtr@UIVisual@Composition@UI@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18008B580
 * Callers:
 *     ?UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z @ 0x180042ABC (-UpdateAcrylicBlurBehind@CAccentAcrylicBlurBehind@@QEAAJAEBUACCENT_POLICY@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::UI::Composition::IVisual>::~ComPtr<Windows::UI::Composition::IVisual>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease(a1);
}
