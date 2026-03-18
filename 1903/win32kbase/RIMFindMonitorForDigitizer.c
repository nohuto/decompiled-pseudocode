/*
 * XREFs of RIMFindMonitorForDigitizer @ 0x1C0146150
 * Callers:
 *     <none>
 * Callees:
 *     RIMFreeQDCActivePathsData @ 0x1C0065C28 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C0065EDC (RIMGetQDCActivePathsData.c)
 *     RIMSetDeviceOutputConfig @ 0x1C014674C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01470F8 (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall RIMFindMonitorForDigitizer(
        struct RIMDEV *a1,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        __int64 a3,
        __int64 a4)
{
  int v6; // edi
  unsigned int *v8; // rsi
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v10[0] = 0LL;
  v10[1] = 0LL;
  v6 = a3;
  v8 = RIMGetQDCActivePathsData((unsigned int *)v10, (__int64)a2, a3);
  rimFindMonitorForDigitizerWithQDCData(a1, v8, a4);
  if ( v6 )
    RIMSetDeviceOutputConfig(a1, a2);
  return RIMFreeQDCActivePathsData(v8);
}
