/*
 * XREFs of _PnpCtxRegOpenCurrentUserKey @ 0x140933620
 * Callers:
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140629324 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1406F2CD4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140933B20 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140934184 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1409361A4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmOpenDevicePanelRegKeyWorker @ 0x140939900 (_CmOpenDevicePanelRegKeyWorker.c)
 * Callees:
 *     _SysCtxRegOpenCurrentUserKey @ 0x14093DD88 (_SysCtxRegOpenCurrentUserKey.c)
 */

__int64 __fastcall PnpCtxRegOpenCurrentUserKey(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = 0LL;
  if ( a1 )
    v5 = *(_QWORD *)(a1 + 224);
  return SysCtxRegOpenCurrentUserKey(v5, 0LL, 0x2000000LL, a4);
}
