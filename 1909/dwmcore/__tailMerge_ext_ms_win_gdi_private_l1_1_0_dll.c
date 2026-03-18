/*
 * XREFs of __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x1800E9171
 * Callers:
 *     __imp_load_DwmQueryCompositionId @ 0x1800E9165 (__imp_load_DwmQueryCompositionId.c)
 *     __imp_load_DwmGenerateMoveData @ 0x1800E9902 (__imp_load_DwmGenerateMoveData.c)
 *     __imp_load_DwmHLsurfSetUpdatedId @ 0x1800E9914 (__imp_load_DwmHLsurfSetUpdatedId.c)
 *     __imp_load_DwmHLSurfCloseCompositorRef @ 0x1800E9FEB (__imp_load_DwmHLSurfCloseCompositorRef.c)
 *     __imp_load_DwmHLSurfOpenCompositorRef @ 0x1800E9FFD (__imp_load_DwmHLSurfOpenCompositorRef.c)
 *     __imp_load_DwmGetSurfaceData @ 0x1800EA00F (__imp_load_DwmGetSurfaceData.c)
 *     __imp_load_DwmHLSurfGetDirtyRgn @ 0x1800EA021 (__imp_load_DwmHLSurfGetDirtyRgn.c)
 *     __imp_load_DwmGetRedirectionStyle @ 0x1800EA033 (__imp_load_DwmGetRedirectionStyle.c)
 *     __imp_load_DwmHLSurfSetSignalOnDirty @ 0x1800EA045 (__imp_load_DwmHLSurfSetSignalOnDirty.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800D8EA0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_gdi_private_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_gdi_private_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
