/*
 * XREFs of McTemplateK0x @ 0x1C0145760
 * Callers:
 *     NtDCompositionSubmitDWMBatch @ 0x1C0014DB0 (NtDCompositionSubmitDWMBatch.c)
 *     ?ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z @ 0x1C00156F0 (-ProcessCommandBufferIterator@CApplicationChannel@DirectComposition@@IEAAJPEAXI_NPEAK@Z.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z @ 0x1C004686C (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@PEAH@Z.c)
 *     ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0_N@Z @ 0x1C0046CBC (-PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0_N@Z.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1C00A23D8 (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     McGenEventWriteKM @ 0x1C00AD480 (McGenEventWriteKM.c)
 */

NTSTATUS McTemplateK0x(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, ...)
{
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+30h] [rbp-38h] BYREF
  va_list v5; // [rsp+40h] [rbp-28h]
  int v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+4Ch] [rbp-1Ch]
  va_list va; // [rsp+88h] [rbp+20h] BYREF

  va_start(va, a3);
  va_copy(v5, va);
  v7 = 0;
  v6 = 8;
  return McGenEventWriteKM(a1, a2, &W32kControlGuid, 2u, &v4);
}
