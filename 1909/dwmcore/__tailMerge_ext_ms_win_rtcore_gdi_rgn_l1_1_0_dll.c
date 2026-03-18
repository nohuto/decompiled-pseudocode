/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800E9932
 * Callers:
 *     __imp_load_OffsetRgn @ 0x1800E9926 (__imp_load_OffsetRgn.c)
 *     __imp_load_CreateRectRgn @ 0x1800E99B1 (__imp_load_CreateRectRgn.c)
 *     __imp_load_CombineRgn @ 0x1800E99C3 (__imp_load_CombineRgn.c)
 *     __imp_load_GetRgnBox @ 0x1800E99D5 (__imp_load_GetRgnBox.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x1800EA057 (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_ExtCreateRegion @ 0x1800EA069 (__imp_load_ExtCreateRegion.c)
 *     __imp_load_GetRegionData @ 0x1800EA07B (__imp_load_GetRegionData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800D8EA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
