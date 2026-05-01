/*
 * XREFs of ??0String@Platform@@QE$AAA@PEAUHSTRING__@@@Z @ 0x1802FF4B4
 * Callers:
 *     ?GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE$AAVString@Platform@@@Z @ 0x1803021E4 (-GetTabletModeContextMenuItemString@XamlAllUpViewController@@AE$AAAXPEAUIApplicationView@@IPEAPE.c)
 * Callees:
 *     ?DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z @ 0x1802D27E4 (-DuplicateString@Details@Platform@@YAXPEAUHSTRING__@@PEAPEAU3@@Z.c)
 */

HSTRING __fastcall Platform::String::String(HSTRING a1, Platform::Details *a2, HSTRING *a3)
{
  HSTRING v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  Platform::Details::DuplicateString(a2, &v4, a3);
  return v4;
}
