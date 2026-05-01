/*
 * XREFs of _anonymous_namespace_::GetScreenSketchWindowIfValid @ 0x18017DFA0
 * Callers:
 *     ?HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z @ 0x18017EAF8 (-HandleOpenFromScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUHSTRING__@@@Z.c)
 *     ?OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180180CC8 (-OpenInScreenSketch@CScreenClippingExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundati.c)
 * Callees:
 *     ?VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z @ 0x1803A2314 (-VerifyWindowIsInSpecifiedApplication@CallerIdentity@@YAJPEAUHWND__@@PEBGPEAUIUnknown@@@Z.c)
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
