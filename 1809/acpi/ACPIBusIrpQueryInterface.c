/*
 * XREFs of ACPIBusIrpQueryInterface @ 0x1C0010840
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002830 (ACPIInternalGetDeviceExtension.c)
 *     AcpiFanEjectInterface @ 0x1C0011524 (AcpiFanEjectInterface.c)
 *     AcpiPccEjectInterface @ 0x1C00115F0 (AcpiPccEjectInterface.c)
 *     memmove @ 0x1C0030D80 (memmove.c)
 *     AcpiDeviceResetInterface @ 0x1C0050AC0 (AcpiDeviceResetInterface.c)
 *     AcpiPccGetInterfaceInformation @ 0x1C0057F10 (AcpiPccGetInterfaceInformation.c)
 *     PciBusEjectInterface @ 0x1C0095960 (PciBusEjectInterface.c)
 *     ACPIEjectPnpLocationInterface @ 0x1C009636C (ACPIEjectPnpLocationInterface.c)
 *     ACPIBusIommuBusInterface @ 0x1C0096554 (ACPIBusIommuBusInterface.c)
 *     IsPciBus @ 0x1C0096BA0 (IsPciBus.c)
 *     ACPICacheCoherencyInterface @ 0x1C0096E70 (ACPICacheCoherencyInterface.c)
 *     ACPIBusReenumerateSelfInterface @ 0x1C0096ED0 (ACPIBusReenumerateSelfInterface.c)
 *     TranslateEjectInterface @ 0x1C0096FB8 (TranslateEjectInterface.c)
 *     ACPIInternalSendSynchronousIrp @ 0x1C009AADC (ACPIInternalSendSynchronousIrp.c)
 *     AcpiEjectBusNumberTranslator @ 0x1C00A0108 (AcpiEjectBusNumberTranslator.c)
 *     AcpiArblibEjectInterface @ 0x1C00A9550 (AcpiArblibEjectInterface.c)
 *     ACPIEjectPartitionUnitInterface @ 0x1C00AC4B8 (ACPIEjectPartitionUnitInterface.c)
 */

__int64 __fastcall ACPIBusIrpQueryInterface(ULONG_PTR a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int Status; // ebx
  __int64 DeviceExtension; // rax
  GUID *SecurityContext; // rsi
  unsigned int EaLength; // r13d
  __int64 v9; // r14
  unsigned int InterfaceInformation; // eax
  __int64 v12; // rax
  struct _DEVICE_OBJECT *v13; // rcx
  unsigned __int16 v14; // ax
  unsigned int v15; // ebx
  const void *v16; // rdx
  _QWORD *v17; // rsi
  unsigned __int16 Size; // ax
  unsigned int v19; // ebx
  _QWORD *QuadPart; // rsi
  unsigned __int16 v21; // ax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = -1073741637;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  SecurityContext = (GUID *)CurrentStackLocation->Parameters.Create.SecurityContext;
  EaLength = CurrentStackLocation->Parameters.Create.EaLength;
  v9 = DeviceExtension;
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD
    || RtlCompareMemory(CurrentStackLocation->Parameters.Create.SecurityContext, &GUID_ACPI_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    Size = CurrentStackLocation->Parameters.QueryInterface.Size;
    v19 = 88;
    if ( Size <= 0x58u )
      v19 = Size;
    QuadPart = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(QuadPart, &ACPIInterfaceTable, v19);
    if ( v19 > 0x10 )
      QuadPart[1] = a1;
    goto LABEL_64;
  }
  if ( SecurityContext == &GUID_ACPI_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_ACPI_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    v21 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v15 = 88;
    if ( v21 <= 0x58u )
      v15 = v21;
    v16 = &ACPIInterfaceTable2;
    goto LABEL_62;
  }
  if ( SecurityContext == &GUID_TRANSLATOR_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_TRANSLATOR_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( ((EaLength - 1) & 0xFFFFFFF9) != 0 || EaLength == 5 )
    {
      if ( EaLength == 6 && (unsigned __int8)IsPciBus(a1) && (AcpiOverrideAttributes & 0x1000) == 0 )
      {
        InterfaceInformation = AcpiEjectBusNumberTranslator(a1, a2);
        goto LABEL_29;
      }
    }
    else if ( (unsigned __int8)IsPciBus(a1) )
    {
      InterfaceInformation = TranslateEjectInterface(a1, a2);
      goto LABEL_29;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD, 0x10uLL) == 16
    || SecurityContext == &GUID_PCI_BUS_INTERFACE_STANDARD2
    || RtlCompareMemory(SecurityContext, &GUID_PCI_BUS_INTERFACE_STANDARD2, 0x10uLL) == 16 )
  {
    if ( (unsigned __int8)IsPciBus(a1) )
    {
      InterfaceInformation = PciBusEjectInterface(a1, a2);
      goto LABEL_29;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_BUS_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_BUS_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    a2->IoStatus.Status = -1073741127;
    v12 = *(_QWORD *)(v9 + 744);
    if ( v12 )
    {
      v13 = *(struct _DEVICE_OBJECT **)(v12 + 720);
      if ( v13 )
      {
        if ( v12 == RootDeviceExtension )
          CurrentStackLocation->Parameters.CreatePipe.Parameters = (_NAMED_PIPE_CREATE_PARAMETERS *)a1;
        a2->IoStatus.Status = ACPIInternalSendSynchronousIrp(v13);
      }
    }
    goto LABEL_41;
  }
  if ( SecurityContext == &GUID_ARBITER_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_ARBITER_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 8) & 0x2000000000LL) != 0 && *(_BYTE *)(v9 + 184) )
    {
      InterfaceInformation = AcpiArblibEjectInterface(a1, a2);
      goto LABEL_28;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_PARTITION_UNIT_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PARTITION_UNIT_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 8) & 0x2000000000LL) != 0 )
    {
      InterfaceInformation = ACPIEjectPartitionUnitInterface(a1, a2);
      goto LABEL_28;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_STANDARD
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_STANDARD, 0x10uLL) == 16 )
  {
    InterfaceInformation = AcpiPccEjectInterface(a1, a2);
    goto LABEL_28;
  }
  if ( SecurityContext == &GUID_PCC_INTERFACE_INTERNAL
    || RtlCompareMemory(SecurityContext, &GUID_PCC_INTERFACE_INTERNAL, 0x10uLL) == 16 )
  {
    if ( (*(_QWORD *)(v9 + 8) & 0x1000000000LL) != 0 )
    {
      InterfaceInformation = AcpiPccGetInterfaceInformation(a1, a2);
      goto LABEL_28;
    }
    goto LABEL_30;
  }
  if ( SecurityContext == &GUID_D3COLD_SUPPORT_INTERFACE
    || RtlCompareMemory(SecurityContext, &GUID_D3COLD_SUPPORT_INTERFACE, 0x10uLL) == 16 )
  {
    v14 = CurrentStackLocation->Parameters.QueryInterface.Size;
    v15 = 72;
    if ( v14 <= 0x48u )
      v15 = v14;
    v16 = &D3Interface;
LABEL_62:
    v17 = (_QWORD *)CurrentStackLocation->Parameters.Read.ByteOffset.QuadPart;
    memmove(v17, v16, v15);
    if ( v15 > 0x10 )
      v17[1] = v9;
LABEL_64:
    Status = 0;
    goto LABEL_31;
  }
  if ( SecurityContext != &GUID_THERMAL_COOLING_INTERFACE
    && RtlCompareMemory(SecurityContext, &GUID_THERMAL_COOLING_INTERFACE, 0x10uLL) != 16 )
  {
    if ( SecurityContext == &GUID_PNP_LOCATION_INTERFACE
      || RtlCompareMemory(SecurityContext, &GUID_PNP_LOCATION_INTERFACE, 0x10uLL) == 16 )
    {
      InterfaceInformation = ACPIEjectPnpLocationInterface(a1, a2);
    }
    else if ( SecurityContext == &GUID_DMA_CACHE_COHERENCY_INTERFACE
           || RtlCompareMemory(SecurityContext, &GUID_DMA_CACHE_COHERENCY_INTERFACE, 0x10uLL) == 16 )
    {
      InterfaceInformation = ACPICacheCoherencyInterface(v9, CurrentStackLocation);
    }
    else if ( SecurityContext == &GUID_DEVICE_RESET_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_DEVICE_RESET_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      InterfaceInformation = AcpiDeviceResetInterface(a1, a2, 0LL, 0LL);
    }
    else if ( SecurityContext == &GUID_REENUMERATE_SELF_INTERFACE_STANDARD
           || RtlCompareMemory(SecurityContext, &GUID_REENUMERATE_SELF_INTERFACE_STANDARD, 0x10uLL) == 16 )
    {
      InterfaceInformation = ACPIBusReenumerateSelfInterface(v9, CurrentStackLocation);
    }
    else
    {
      if ( SecurityContext != &GUID_IOMMU_BUS_INTERFACE
        && RtlCompareMemory(SecurityContext, &GUID_IOMMU_BUS_INTERFACE, 0x10uLL) != 16 )
      {
        goto LABEL_41;
      }
      InterfaceInformation = ACPIBusIommuBusInterface(a1, a2);
    }
    goto LABEL_28;
  }
  if ( (*(_QWORD *)(v9 + 952) & 0x200000000LL) != 0 )
  {
    InterfaceInformation = AcpiFanEjectInterface(a1, a2);
LABEL_28:
    a2->IoStatus.Status = InterfaceInformation;
LABEL_29:
    Status = InterfaceInformation;
  }
LABEL_30:
  if ( Status == -1073741637 )
  {
LABEL_41:
    Status = a2->IoStatus.Status;
    goto LABEL_32;
  }
LABEL_31:
  a2->IoStatus.Status = Status;
LABEL_32:
  IofCompleteRequest(a2, 0);
  return Status;
}
