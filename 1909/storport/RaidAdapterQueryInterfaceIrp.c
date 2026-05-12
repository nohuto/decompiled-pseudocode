/*
 * XREFs of RaidAdapterQueryInterfaceIrp @ 0x1C001FCB4
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C00126FC (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaForwardIrp @ 0x1C0012360 (RaForwardIrp.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C00331C4 (McTemplateK0pd.c)
 *     RaidAdapterQueryCoolingInterface @ 0x1C004092C (RaidAdapterQueryCoolingInterface.c)
 *     PortQueryInterfaceFdoInfo @ 0x1C0075D58 (PortQueryInterfaceFdoInfo.c)
 *     PortQueryInterfaceFdoQdr @ 0x1C0075D94 (PortQueryInterfaceFdoQdr.c)
 */

NTSTATUS __fastcall RaidAdapterQueryInterfaceIrp(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  GUID *InterfaceType; // rcx
  GUID *v6; // rcx
  GUID *v7; // rcx
  __int64 v8; // rcx
  signed int InterfaceFdoInfo; // eax
  _QWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  InterfaceType = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( InterfaceType == &GUID_STORAGE_QUERY_FDO_INFO
    || RtlCompareMemory(InterfaceType, &GUID_STORAGE_QUERY_FDO_INFO, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoInfo(InterfaceType, a2, *(_QWORD *)(a1 + 32));
LABEL_15:
    a2->IoStatus.Status = InterfaceFdoInfo;
    if ( InterfaceFdoInfo >= 0 )
      goto LABEL_7;
    return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
  }
  v6 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( v6 == &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS
    || RtlCompareMemory(v6, &GUID_STORAGE_QUERY_FDO_DEVICE_RELATIONS, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = PortQueryInterfaceFdoQdr(v6, a2, *(_QWORD *)(a1 + 4456));
    goto LABEL_15;
  }
  v7 = CurrentStackLocation->Parameters.QueryInterface.InterfaceType;
  if ( v7 == &GUID_THERMAL_COOLING_INTERFACE || RtlCompareMemory(v7, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) == 16 )
  {
    InterfaceFdoInfo = RaidAdapterQueryCoolingInterface(a1, a2);
    if ( InterfaceFdoInfo >= 0 )
      return RaidCompleteRequestEx(a2, 0, InterfaceFdoInfo);
  }
LABEL_7:
  if ( StorEtwLoggingEnabled )
  {
    v11[0] = 0LL;
    v11[1] = 0LL;
    IoGetActivityIdIrp(a2, v11);
    if ( (byte_1C0062742 & 0x20) != 0 )
      McTemplateK0pd(v8, &EventPnpRequestComplete, v11, a2, a2->IoStatus.Status);
  }
  return RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
}
