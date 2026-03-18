/*
 * XREFs of _PnpCtxRegEnumKeyWithCallback @ 0x14074B304
 * Callers:
 *     DrvDbGetDriverPackageMappedProperty @ 0x1406D2A04 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiCreateDriverSwDevices @ 0x1406EB51C (PiCreateDriverSwDevices.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140749E10 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingDevicePanelListWorker @ 0x140749FF4 (_CmGetMatchingDevicePanelListWorker.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x14074A2C0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _PnpGetGenericObjectList @ 0x14074A50C (_PnpGetGenericObjectList.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14074A704 (_CmGetMatchingCommonClassListWorker.c)
 *     _CmDevicePanelEnumSubkeyCallback @ 0x14074A870 (_CmDevicePanelEnumSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x14074ABC0 (_CmEnumSubkeyCallback.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x14074AEA0 (_CmDeviceClassesSubkeyCallback.c)
 *     PipHardwareConfigClearStartOverrides @ 0x140822DC4 (PipHardwareConfigClearStartOverrides.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140902140 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbGetObjectSubKeyList @ 0x140902470 (DrvDbGetObjectSubKeyList.c)
 *     PipMigratePnpState @ 0x1409C8678 (PipMigratePnpState.c)
 * Callees:
 *     _RegRtlEnumKeyWithCallback @ 0x14074BB8C (_RegRtlEnumKeyWithCallback.c)
 */

__int64 __fastcall PnpCtxRegEnumKeyWithCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD v6[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 0LL;
  if ( a1 )
    v4 = *(_QWORD *)(a1 + 224);
  v7[0] = v4;
  v7[1] = PnpCtxInternalEnumKeyCallback;
  v6[0] = a1;
  v6[1] = a3;
  v7[2] = v6;
  v6[2] = a4;
  return RegRtlEnumKeyWithCallback(a2, a2, v7);
}
