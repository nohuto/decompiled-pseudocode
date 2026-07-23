/*
 * XREFs of _CmCreateDevice @ 0x1406FE62C
 * Callers:
 *     _PnpDispatchDevice @ 0x14059BFF0 (_PnpDispatchDevice.c)
 *     PiCreateDeviceInstanceKey @ 0x1406FE578 (PiCreateDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x14072E410 (IoReportDetectedDevice.c)
 *     IoReportRootDevice @ 0x140759DE0 (IoReportRootDevice.c)
 *     PiDevCfgInitDriverDatabaseCallback @ 0x14082E524 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PiCMCreateDevice @ 0x140837A14 (PiCMCreateDevice.c)
 *     PiCMGenerateDeviceInstance @ 0x140839064 (PiCMGenerateDeviceInstance.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     _CmCreateDeviceWorker @ 0x1406FE798 (_CmCreateDeviceWorker.c)
 */

__int64 __fastcall CmCreateDevice(__int64 a1, __int64 a2, int a3, HANDLE *a4, _BYTE *a5, int a6)
{
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64, int, HANDLE *); // rsi
  int v11; // eax
  int DeviceWorker; // eax
  int v13; // ebx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  HANDLE v18[12]; // [rsp+40h] [rbp-59h] BYREF

  memset(v18, 0, 0x58uLL);
  v10 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, HANDLE *))(a1 + 504);
  if ( a3 || (LODWORD(v18[2]) = 1, a4) )
    LODWORD(v18[2]) = a3;
  HIDWORD(v18[4]) = a6;
  if ( v10 )
  {
    v11 = v10(a1, a2, 1LL, 2LL, 1, v18);
    if ( v11 == -1073741822 )
    {
      v10 = 0LL;
    }
    else
    {
      if ( v11 == -1073741536 )
        goto LABEL_20;
      if ( v11 )
      {
        v13 = -1073741595;
        goto LABEL_25;
      }
    }
  }
  DeviceWorker = CmCreateDeviceWorker(a1, a2, v18[2], (unsigned int)&v18[3], (__int64)&v18[4], SWORD2(v18[4]));
  v13 = DeviceWorker;
  if ( !v10 )
    goto LABEL_13;
  LODWORD(v18[0]) = DeviceWorker;
  v14 = ((__int64 (__fastcall *)(__int64, __int64, __int64))v10)(a1, a2, 1LL);
  v15 = v14;
  if ( v14 == -1073741822 )
    goto LABEL_13;
  if ( v14 == -1073741536 )
  {
LABEL_20:
    v13 = (int)v18[0];
    goto LABEL_13;
  }
  v16 = v13;
  if ( v15 )
    v16 = -1073741595;
  v13 = v16;
LABEL_13:
  if ( v13 >= 0 && a4 )
  {
    *a4 = v18[3];
    goto LABEL_16;
  }
LABEL_25:
  if ( v18[3] )
    ZwClose(v18[3]);
LABEL_16:
  if ( v13 >= 0 && a5 )
    *a5 = v18[4];
  return (unsigned int)v13;
}
