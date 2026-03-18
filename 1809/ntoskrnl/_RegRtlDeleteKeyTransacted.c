/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140762160
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406B2484 (_CmGetDeviceSoftwareKey.c)
 *     _CmAddDeviceToContainerWorker @ 0x1406E8194 (_CmAddDeviceToContainerWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070DC5C (_RegRtlDeleteTreeInternal.c)
 *     PiDqDeleteUserObject @ 0x14082ACBC (PiDqDeleteUserObject.c)
 *     _PnpCtxRegDeleteKey @ 0x1408F5E9C (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1408F640C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1408F6A54 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1408F710C (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1408F8A70 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x1408FB234 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x1408FB864 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x140900A48 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x140900ED4 (DrvDbDeleteObjectSubKey.c)
 * Callees:
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwDeleteKey @ 0x1401B9B30 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405C7B4C (_RegRtlOpenKeyTransacted.c)
 */

__int64 __fastcall RegRtlDeleteKeyTransacted(char *a1, const WCHAR *a2, __int64 a3)
{
  int v3; // ebx
  HANDLE KeyHandle; // [rsp+48h] [rbp+10h] BYREF

  KeyHandle = 0LL;
  if ( a2 )
  {
    v3 = RegRtlOpenKeyTransacted(a1, a2, 0, 0x10000u, &KeyHandle, a3);
    if ( v3 < 0 )
      goto LABEL_5;
    a1 = (char *)KeyHandle;
  }
  v3 = ZwDeleteKey(a1);
LABEL_5:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v3;
}
