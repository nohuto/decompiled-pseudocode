/*
 * XREFs of McTemplateK0pqq @ 0x1C000A8F8
 * Callers:
 *     HUBFDO_EvtDeviceD0Entry @ 0x1C000AD70 (HUBFDO_EvtDeviceD0Entry.c)
 *     HUBFDO_EvtDeviceD0Exit @ 0x1C000AFE0 (HUBFDO_EvtDeviceD0Exit.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000BBB8 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_CompleteGetDescriptorRequest @ 0x1C000C16C (HUBFDO_CompleteGetDescriptorRequest.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusSuccess @ 0x1C0012508 (HUBPDO_CompleteClientSerialRequestWithStatusSuccess.c)
 *     HUBPDO_CompleteClientSerialRequestWithStatusFailed @ 0x1C00126E4 (HUBPDO_CompleteClientSerialRequestWithStatusFailed.c)
 *     HUBPDO_CompleteClientSerialRequestWithLastStatus @ 0x1C0012884 (HUBPDO_CompleteClientSerialRequestWithLastStatus.c)
 *     HUBPDO_EvtDeviceWdmIrpPreprocess @ 0x1C00150A0 (HUBPDO_EvtDeviceWdmIrpPreprocess.c)
 *     HUBPDO_EvtDeviceD0Entry @ 0x1C0016210 (HUBPDO_EvtDeviceD0Entry.c)
 *     HUBPDO_EvtDeviceD0Exit @ 0x1C0016400 (HUBPDO_EvtDeviceD0Exit.c)
 *     EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper @ 0x1C0018550 (EventWriteUSBHUB3_ETW_EVENT_CLIENT_INITIATED_RECOVERY_ACTION_Wrapper.c)
 *     HUBUCX_UCXIoctlComplete @ 0x1C00201A0 (HUBUCX_UCXIoctlComplete.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x1C006B94C (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x1C006BB1C (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x1C006BE74 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x1C006C094 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x1C006C250 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x1C006C468 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x1C006CE08 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x1C006D090 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x1C006D44C (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlCyclePort @ 0x1C006D870 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlResetHub @ 0x1C006DD10 (HUBFDO_IoctlResetHub.c)
 *     HUBACPI_GetAcpiPortAttributes @ 0x1C0078D48 (HUBACPI_GetAcpiPortAttributes.c)
 * Callees:
 *     McGenEventWrite @ 0x1C00011B4 (McGenEventWrite.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 */

ULONG McTemplateK0pqq(struct _MCGEN_TRACE_CONTEXT *a1, const EVENT_DESCRIPTOR *a2, const GUID *a3, ...)
{
  EVENT_DATA_DESCRIPTOR EventData; // [rsp+30h] [rbp-50h] BYREF
  va_list v5; // [rsp+40h] [rbp-40h]
  __int64 v6; // [rsp+48h] [rbp-38h]
  va_list v7; // [rsp+50h] [rbp-30h]
  __int64 v8; // [rsp+58h] [rbp-28h]
  va_list v9; // [rsp+60h] [rbp-20h]
  __int64 v10; // [rsp+68h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+28h] BYREF
  va_list va; // [rsp+A8h] [rbp+28h]
  __int64 v13; // [rsp+B0h] [rbp+30h] BYREF
  va_list va1; // [rsp+B0h] [rbp+30h]
  va_list va2; // [rsp+B8h] [rbp+38h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v11 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v13 = va_arg(va2, _QWORD);
  v6 = 8LL;
  v8 = 4LL;
  va_copy(v5, va);
  va_copy(v7, va1);
  va_copy(v9, va2);
  v10 = 4LL;
  return McGenEventWrite(a1, a2, a3, 4u, &EventData);
}
