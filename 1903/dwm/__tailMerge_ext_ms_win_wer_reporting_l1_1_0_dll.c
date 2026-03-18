/*
 * XREFs of __tailMerge_ext_ms_win_wer_reporting_l1_1_0_dll @ 0x14000464C
 * Callers:
 *     __imp_load_WerReportAddDump @ 0x140004640 (__imp_load_WerReportAddDump.c)
 *     __imp_load_WerReportSetParameter @ 0x140004720 (__imp_load_WerReportSetParameter.c)
 *     __imp_load_WerReportCloseHandle @ 0x140004732 (__imp_load_WerReportCloseHandle.c)
 *     __imp_load_WerReportSubmit @ 0x140004744 (__imp_load_WerReportSubmit.c)
 *     __imp_load_WerReportCreate @ 0x140004756 (__imp_load_WerReportCreate.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x140002C10 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_wer_reporting_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_wer_reporting_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
