/*
 * XREFs of _anonymous_namespace_::GetScreenSketchWindowIfValid @ 0x1801AD670
 * Callers:
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x1801AE1C0 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B0858 (-OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z @ 0x180408054 (-VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z.c)
 */

HWND __fastcall anonymous_namespace_::GetScreenSketchWindowIfValid(
        CallerIdentity *hwnd,
        HWND a2,
        const unsigned __int16 *a3,
        struct IUnknown *a4)
{
  __int64 v5; // rbx

  v5 = 0LL;
  if ( (int)CallerIdentity::VerifyWindowIsInSpecifiedApplication(hwnd, a2, a3, a4) >= 0 )
    return GetAncestor((HWND)hwnd, 1u);
  return (HWND)v5;
}
