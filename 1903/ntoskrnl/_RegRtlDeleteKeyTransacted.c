/*
 * XREFs of _RegRtlDeleteKeyTransacted @ 0x140789170
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406D709C (_CmGetDeviceSoftwareKey.c)
 *     _RegRtlDeleteTreeInternal @ 0x14073A40C (_RegRtlDeleteTreeInternal.c)
 *     PiDqDeleteUserObject @ 0x140865474 (PiDqDeleteUserObject.c)
 *     _PnpCtxRegDeleteKey @ 0x140933B34 (_PnpCtxRegDeleteKey.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140934D90 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmAddPanelDeviceWorker @ 0x140938F00 (_CmAddPanelDeviceWorker.c)
 *     _CmDeleteDevicePanelRegKeyWorker @ 0x140939528 (_CmDeleteDevicePanelRegKeyWorker.c)
 *     _RegRtlDeletePathInternal @ 0x14093EE08 (_RegRtlDeletePathInternal.c)
 * Callees:
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwDeleteKey @ 0x1401C1AB0 (ZwDeleteKey.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405C36C8 (_RegRtlOpenKeyTransacted.c)
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
