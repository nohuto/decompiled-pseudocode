/*
 * XREFs of __tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll @ 0x1800E9044
 * Callers:
 *     __imp_load_SetManipulationInputTarget @ 0x1800E9038 (__imp_load_SetManipulationInputTarget.c)
 *     __imp_load_RegisterManipulationThread @ 0x1800E9118 (__imp_load_RegisterManipulationThread.c)
 *     __imp_load_StopAndEndInertia @ 0x1800E912A (__imp_load_StopAndEndInertia.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800D8890 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_compositor_hosting_l1_2_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_compositor_hosting_l1_2_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
