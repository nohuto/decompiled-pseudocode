/*
 * XREFs of __tailMerge_ext_ms_win_dwmapi_ext_l1_1_0_dll @ 0x180087A1E
 * Callers:
 *     __imp_load_DwmGetWindowAttribute @ 0x180087A12 (__imp_load_DwmGetWindowAttribute.c)
 *     __imp_load_DwmpEndTransitionRequest @ 0x180087A9D (__imp_load_DwmpEndTransitionRequest.c)
 *     __imp_load_DwmpEndAnimationClock @ 0x180087AAF (__imp_load_DwmpEndAnimationClock.c)
 *     __imp_load_DwmpBeginTransitionRequest @ 0x180087AC1 (__imp_load_DwmpBeginTransitionRequest.c)
 *     __imp_load_DwmpTransitionWindow @ 0x180087AD3 (__imp_load_DwmpTransitionWindow.c)
 *     __imp_load_DwmpTransitionWindowWithRects @ 0x180087AE5 (__imp_load_DwmpTransitionWindowWithRects.c)
 *     __imp_load_DwmpBeginTransitionRequestWithGUID @ 0x180087AF7 (__imp_load_DwmpBeginTransitionRequestWithGUID.c)
 *     __imp_load_DwmUnregisterThumbnail @ 0x180087B94 (__imp_load_DwmUnregisterThumbnail.c)
 *     __imp_load_DwmpCreateSharedThumbnailVisual @ 0x180087BA6 (__imp_load_DwmpCreateSharedThumbnailVisual.c)
 *     __imp_load_DwmSetWindowAttribute @ 0x180087C0C (__imp_load_DwmSetWindowAttribute.c)
 *     __imp_load_DwmpBeginAnimationClock @ 0x180087C30 (__imp_load_DwmpBeginAnimationClock.c)
 *     __imp_load_DwmpCreateAnimationClock @ 0x180087C42 (__imp_load_DwmpCreateAnimationClock.c)
 *     __imp_load_DwmpUpdateAccentBlurRect @ 0x180087C54 (__imp_load_DwmpUpdateAccentBlurRect.c)
 *     __imp_load_DwmpQueryWindowThumbnailSourceSize @ 0x180087C66 (__imp_load_DwmpQueryWindowThumbnailSourceSize.c)
 *     __imp_load_DwmpTransitionBitmap @ 0x180087C78 (__imp_load_DwmpTransitionBitmap.c)
 *     __imp_load_DwmShowContact @ 0x180087C8A (__imp_load_DwmShowContact.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180080A00 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_dwmapi_ext_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_dwmapi_ext_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
