/*
 * XREFs of rimFillKeyboardInputData @ 0x1C0103E0C
 * Callers:
 *     rimInvalidateHidKeyboardDeviceKeys @ 0x1C01040A8 (rimInvalidateHidKeyboardDeviceKeys.c)
 *     rimReportHidKeyboardInputData @ 0x1C0104420 (rimReportHidKeyboardInputData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall rimFillKeyboardInputData(__int64 a1, __int16 a2, _WORD *a3)
{
  unsigned int v6; // edi
  unsigned int v8; // [rsp+28h] [rbp-10h]

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xAu,
    (__int64)&WPP_4f47d605a3be32813e6cdb6a74498525_Traceguids);
  v6 = 0;
  if ( a1 && a3 )
    *a3 = a2;
  else
    v6 = -1073741811;
  v8 = v6;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xBu,
    (__int64)&WPP_4f47d605a3be32813e6cdb6a74498525_Traceguids,
    v8);
  return v6;
}
