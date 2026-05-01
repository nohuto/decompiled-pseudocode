/*
 * XREFs of __tailMerge_ext_ms_win_gdi_font_l1_1_1_dll @ 0x18008C4A8
 * Callers:
 *     __imp_load_GetGlyphOutlineW @ 0x18008C49C (__imp_load_GetGlyphOutlineW.c)
 *     __imp_load_GetOutlineTextMetricsW @ 0x18008C527 (__imp_load_GetOutlineTextMetricsW.c)
 *     __imp_load_SetTextColor @ 0x18008C539 (__imp_load_SetTextColor.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180085E40 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_gdi_font_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_gdi_font_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
