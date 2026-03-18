/*
 * XREFs of _PnpStringFromGuid @ 0x1406FE2E0
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405B61B4 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDmObjectGetCachedCmProperty @ 0x1405BE04C (PiDmObjectGetCachedCmProperty.c)
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F5DA0 (IoGetDeviceInterfaceAlias.c)
 *     PiDmCacheDataEncode @ 0x1406FA728 (PiDmCacheDataEncode.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1406FA888 (PiDmGetReferencedObjectFromProperty.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1406FA9C4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     _CmSetDeviceMappedPropertyFromRegProp @ 0x140701BE0 (_CmSetDeviceMappedPropertyFromRegProp.c)
 *     _PnpDeviceRaisePropertyChangeEventWorker @ 0x140706B8C (_PnpDeviceRaisePropertyChangeEventWorker.c)
 *     PiSwPdoPnPDispatch @ 0x14071F2B0 (PiSwPdoPnPDispatch.c)
 *     PiDcHandleDeviceEvent @ 0x140723740 (PiDcHandleDeviceEvent.c)
 *     IopRegisterDeviceInterface @ 0x1407352C4 (IopRegisterDeviceInterface.c)
 *     PiDcHandleInterfaceEvent @ 0x140737458 (PiDcHandleInterfaceEvent.c)
 *     PiDmListInitEnumCallback @ 0x140756B40 (PiDmListInitEnumCallback.c)
 *     _CmBuildDevicePanelId @ 0x1407890E4 (_CmBuildDevicePanelId.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140863798 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PipCreateComputerId @ 0x1409F6A98 (PipCreateComputerId.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140002CB4 (RtlStringCchPrintfExW.c)
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
