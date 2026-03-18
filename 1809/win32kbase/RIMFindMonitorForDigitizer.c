/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C0112CA0
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeQDCActivePathsData @ 0x1C003DCC0 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C004A680 (RIMGetQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0113298 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0113DD8 (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // edi
  _QWORD *v8; // rsi
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = a3;
  v8 = RIMGetQDCActivePathsData(v10, (__int64)a2, a3);
  rimFindMonitorForDigitizerWithQDCData(a1, v8, a4);
  if ( v6 )
    RIMSetDeviceOutputConfig(a1, a2);
  return RIMFreeQDCActivePathsData(v8);
}
