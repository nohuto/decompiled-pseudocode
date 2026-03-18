/*
 * XREFs of ACPIFilterIrpQueryInterface @ 0x1C0096120
 * Callers:
 *     <none>
 * Callees:
 *     ACPIDispatchForwardIrp @ 0x1C0001ED0 (ACPIDispatchForwardIrp.c)
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     ACPIFilterIrpQueryPnpLocationInterface @ 0x1C0095E24 (ACPIFilterIrpQueryPnpLocationInterface.c)
 *     ACPIFilterIrpQueryIommuInterface @ 0x1C0096464 (ACPIFilterIrpQueryIommuInterface.c)
 *     ACPIIrpSetPagableCompletionRoutineAndForward @ 0x1C009D9CC (ACPIIrpSetPagableCompletionRoutineAndForward.c)
 *     AcpiSdevIdentifierInterface @ 0x1C00B147C (AcpiSdevIdentifierInterface.c)
 */

__int64 __fastcall ACPIFilterIrpQueryInterface(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  __int64 DeviceExtension; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  __int64 v6; // r14
  GUID *SecurityContext; // rbx
  unsigned __int16 v9; // ax
  unsigned int v10; // ebx
  _QWORD *v11; // rbp
  unsigned __int16 v12; // ax
  unsigned int v13; // ebx
  _QWORD *v14; // rbp
  int v15; // ebx
  unsigned __int16 Size; // ax
  unsigned int v17; // ebx
  _QWORD *QuadPart; // rbp

  DeviceExtension = ACPIInternalGetDeviceExtension((ULONG_PTR)DeviceObject);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v6 = DeviceExtension;
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v17 = 88;
    if ( Size <= 0x58u )
      v17 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v17);
    if ( v17 > 0x10 )
      QuadPart[1] = DeviceObject;
    goto LABEL_27;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v12 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v13 = 88;
    if ( v12 <= 0x58u )
      v13 = v12;
    v14 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v14, &ACPIInterfaceTable2, v13);
    if ( v13 > 0x10 )
      v14[1] = v6;
LABEL_27:
    v15 = 0;
LABEL_28:
    Irp->IoStatus.Status = v15;
    if ( v15 < 0 )
    {
      IofCompleteRequest(Irp, 0);
      return (unsigned int)v15;
    }
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v9 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v10 = 72;
    if ( v9 <= 0x48u )
      v10 = v9;
    v11 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v11, &D3Interface, v10);
    if ( v10 > 0x10 )
      v11[1] = v6;
    Irp->IoStatus.Status = 0;
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
  {
    return ACPIFilterIrpQueryPnpLocationInterface((ULONG_PTR)DeviceObject, Irp);
  }
  if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    return ACPIIrpSetPagableCompletionRoutineAndForward(DeviceObject, Irp, 1, 1, 1);
  }
  if ( SecurityContext == &GUID_SDEV_IDENTIFIER_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_SDEV_IDENTIFIER_INTERFACE, 0x10uLL) == 16 )
  {
    v15 = AcpiSdevIdentifierInterface(DeviceObject, CurrentStackLocation);
    if ( v15 == -1073741637 )
      return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
    goto LABEL_28;
  }
  if ( SecurityContext != &GUID_IOMMU_BUS_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) != 16 )
  {
    return ACPIDispatchForwardIrp((ULONG_PTR)DeviceObject, Irp);
  }
  return ACPIFilterIrpQueryIommuInterface(DeviceObject, Irp);
}
