/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C00E9050
 * Callers:
 *     <none>
 * Callees:
 *     RIMGetQDCActivePathsData @ 0x1C0051848 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C00535D4 (RIMFreeQDCActivePathsData.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0054454 (rimFindMonitorForDigitizerWithQDCData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C005506C (RIMSetDeviceOutputConfig.c)
 */

__int64 __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        int a3,
        unsigned __int64 a4)
{
  _QWORD *v8; // rsi
  __int64 v9; // r9
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v8 = RIMGetQDCActivePathsData(v11);
  rimFindMonitorForDigitizerWithQDCData((__int64)a1, (__int64)v8, a4, v9);
  if ( a3 )
    RIMSetDeviceOutputConfig(a1, a2, 1u, (__int64)v8);
  return RIMFreeQDCActivePathsData(v8);
}
