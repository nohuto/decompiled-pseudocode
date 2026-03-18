/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x140768CF4
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406F2AC0 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCreateDriverSwDevices @ 0x1406FED60 (PiCreateDriverSwDevices.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140767814 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x1407679F8 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140767CB8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _PnpGetGenericObjectList @ 0x140767F04 (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1407680C0 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x140768220 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140768580 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140768870 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x14085D0E0 (PipHardwareConfigClearStartOverrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140940590 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x1409408C8 (DrvDbGetObjectSubKeyList.c)
 *     PipMigratePnpState @ 0x140A21114 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x140768D48 (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 a1, void *a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v6[3] = v4;
  v6[4] = PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v6[5] = v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2);
}
