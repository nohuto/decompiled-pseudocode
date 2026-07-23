/*
 * XREFs of _PnpStringFromGuid @ 0x14059BCE4
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectGetCachedCmProperty @ 0x14059A67C (PiDmObjectGetCachedCmProperty.c)
 *     IopGetDeviceInterfaces @ 0x14059F6C4 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D6540 (IoGetDeviceInterfaceAlias.c)
 *     PiSwPdoPnPDispatch @ 0x1406D95D0 (PiSwPdoPnPDispatch.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x1406E6E60 (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x1406EAD78 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     PiDcHandleDeviceEvent @ 0x1406ED140 (PiDcHandleDeviceEvent.c)
 *     PiDcHandleInterfaceEvent @ 0x1406ED310 (PiDcHandleInterfaceEvent.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406F2C4C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiDmCacheDataEncode @ 0x1406F391C (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406F3BE8 (PiDmGetReferencedObjectFromProperty.c)
 *     IopRegisterDeviceInterface @ 0x14070AD74 (IopRegisterDeviceInterface.c)
 *     PiDmListInitEnumCallback @ 0x14072D940 (PiDmListInitEnumCallback.c)
 *     _CmBuildDevicePanelId @ 0x1407632A4 (_CmBuildDevicePanelId.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14082A358 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PipCreateComputerId @ 0x1409CAB84 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140015EF4 (RtlStringCchPrintfExW.c)
 */

NTSTATUS __fastcall PnpStringFromGuid(int *a1, wchar_t *a2)
{
  int v3; // [rsp+30h] [rbp-78h]
  int v4; // [rsp+38h] [rbp-70h]
  int v5; // [rsp+40h] [rbp-68h]
  int v6; // [rsp+48h] [rbp-60h]
  int v7; // [rsp+50h] [rbp-58h]
  int v8; // [rsp+58h] [rbp-50h]
  int v9; // [rsp+60h] [rbp-48h]
  int v10; // [rsp+68h] [rbp-40h]
  int v11; // [rsp+70h] [rbp-38h]
  int v12; // [rsp+78h] [rbp-30h]
  int v13; // [rsp+80h] [rbp-28h]

  v13 = *((unsigned __int8 *)a1 + 15);
  v12 = *((unsigned __int8 *)a1 + 14);
  v11 = *((unsigned __int8 *)a1 + 13);
  v10 = *((unsigned __int8 *)a1 + 12);
  v9 = *((unsigned __int8 *)a1 + 11);
  v8 = *((unsigned __int8 *)a1 + 10);
  v7 = *((unsigned __int8 *)a1 + 9);
  v6 = *((unsigned __int8 *)a1 + 8);
  v5 = *((unsigned __int16 *)a1 + 3);
  v4 = *((unsigned __int16 *)a1 + 2);
  v3 = *a1;
  return RtlStringCchPrintfExW(
           a2,
           0x27uLL,
           0LL,
           0LL,
           0x800u,
           L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
           v3,
           v4,
           v5,
           v6,
           v7,
           v8,
           v9,
           v10,
           v11,
           v12,
           v13);
}
