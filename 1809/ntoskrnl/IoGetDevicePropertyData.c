/*
 * XREFs of IoGetDevicePropertyData @ 0x140587930
 * Callers:
 *     PopFxQueryBiosDeviceName @ 0x14015A77C (PopFxQueryBiosDeviceName.c)
 *     PopFxBuildDripsBlockingDeviceList @ 0x1402D77C0 (PopFxBuildDripsBlockingDeviceList.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1402D84BC (PopFxIsDevicePotentialDripsConstraint.c)
 *     ExpHwidGetDevicePropertyDataFixed @ 0x140587700 (ExpHwidGetDevicePropertyDataFixed.c)
 *     ExpHwidGetDevicePropertyData @ 0x140587784 (ExpHwidGetDevicePropertyData.c)
 *     ExpCheckPortableOperatingSystem @ 0x1406C884C (ExpCheckPortableOperatingSystem.c)
 *     IopGetSessionIdFromPDO @ 0x1406ECED4 (IopGetSessionIdFromPDO.c)
 *     PopDirectedDripsNotifyDeviceStarted @ 0x1406EE370 (PopDirectedDripsNotifyDeviceStarted.c)
 *     IopGetInterruptConnectionData @ 0x140711FE4 (IopGetInterruptConnectionData.c)
 *     PnprIsMemoryDevice @ 0x1408362F8 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x1408363AC (PnprIsProcessorDevice.c)
 *     PopDirectedDripsIsExcludedDevice @ 0x14087DE04 (PopDirectedDripsIsExcludedDevice.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x140191E2C (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PnpGetDevicePropertyData @ 0x1405879C8 (PnpGetDevicePropertyData.c)
 */

NTSTATUS __stdcall IoGetDevicePropertyData(
        PDEVICE_OBJECT Pdo,
        const DEVPROPKEY *PropertyKey,
        LCID Lcid,
        ULONG Flags,
        ULONG Size,
        PVOID Data,
        PULONG RequiredSize,
        PDEVPROPTYPE Type)
{
  _DWORD *DeviceNode; // rcx
  struct _DRIVER_OBJECT *DriverObject; // rcx
  UNICODE_STRING *p_DriverName; // rcx
  char *v13; // rcx
  unsigned __int16 *v14; // rdi
  struct _DEVOBJ_EXTENSION *DeviceObjectExtension; // rdx
  _WORD *v16; // rcx
  __int64 v17; // rcx
  _WORD *v18; // rcx
  __int64 v19; // rcx

  if ( !Pdo )
    goto LABEL_16;
  DeviceNode = Pdo->DeviceObjectExtension->DeviceNode;
  if ( !DeviceNode || (DeviceNode[99] & 0x20000) != 0 )
  {
    IoAddTriageDumpDataBlock((int)Pdo, Pdo->Size);
    DriverObject = Pdo->DriverObject;
    if ( DriverObject )
    {
      IoAddTriageDumpDataBlock((int)DriverObject, DriverObject->Size);
      p_DriverName = &Pdo->DriverObject->DriverName;
      if ( p_DriverName->Length )
      {
        IoAddTriageDumpDataBlock((int)p_DriverName, 2);
        IoAddTriageDumpDataBlock((int)Pdo->DriverObject->DriverName.Buffer, Pdo->DriverObject->DriverName.Length);
      }
    }
    v13 = (char *)Pdo->DeviceObjectExtension->DeviceNode;
    if ( v13 )
    {
      v14 = (unsigned __int16 *)(v13 + 40);
      IoAddTriageDumpDataBlock((int)v13, 784);
      if ( *v14 )
      {
        IoAddTriageDumpDataBlock((int)v14, 2);
        IoAddTriageDumpDataBlock(*((_QWORD *)v14 + 1), *v14);
      }
      DeviceObjectExtension = Pdo->DeviceObjectExtension;
      v16 = (char *)DeviceObjectExtension->DeviceNode + 56;
      if ( *v16 )
      {
        IoAddTriageDumpDataBlock((int)v16, 2);
        IoAddTriageDumpDataBlock(
          *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 8),
          *((unsigned __int16 *)Pdo->DeviceObjectExtension->DeviceNode + 28));
        DeviceObjectExtension = Pdo->DeviceObjectExtension;
      }
      v17 = *((_QWORD *)DeviceObjectExtension->DeviceNode + 2);
      if ( v17 )
      {
        v18 = (_WORD *)(v17 + 56);
        if ( *v18 )
        {
          IoAddTriageDumpDataBlock((int)v18, 2);
          v19 = *((_QWORD *)Pdo->DeviceObjectExtension->DeviceNode + 2);
          IoAddTriageDumpDataBlock(*(_QWORD *)(v19 + 64), *(unsigned __int16 *)(v19 + 56));
        }
      }
    }
LABEL_16:
    KeBugCheckEx(0xCAu, 2uLL, (ULONG_PTR)Pdo, 0LL, 0LL);
  }
  return PnpGetDevicePropertyData(Pdo, PropertyKey, Lcid, Flags, Size, Data, RequiredSize, Type);
}
