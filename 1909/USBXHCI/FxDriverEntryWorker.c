/*
 * XREFs of FxDriverEntryWorker @ 0x1C0007CB4
 * Callers:
 *     FxDriverEntry @ 0x1C0007C80 (FxDriverEntry.c)
 * Callees:
 *     ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0007C3C (-FxStubDriverUnloadCommon@@YAXXZ.c)
 *     ?FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z @ 0x1C0007DE4 (-FxStubBindClasses@@YAJPEAU_WDF_BIND_INFO@@@Z.c)
 *     ?FxStubInitTypes@@YAJXZ @ 0x1C0007F24 (-FxStubInitTypes@@YAJXZ.c)
 *     DriverEntry @ 0x1C0064410 (DriverEntry.c)
 */

NTSTATUS __fastcall FxDriverEntryWorker(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  struct _WDF_BIND_INFO *v5; // rcx
  struct _WDF_BIND_INFO *v6; // rcx
  NTSTATUS inited; // ebx
  _LIST_ENTRY *Flink; // rax

  if ( !DriverObject )
    return DriverEntry(0LL, RegistryPath);
  LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 34078720;
  WPP_MAIN_CB.DeviceQueue.Lock = (unsigned __int64)&WPP_MAIN_CB.Dpc.DeferredRoutine;
  RtlCopyUnicodeString((PUNICODE_STRING)&WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink, RegistryPath);
  result = WdfVersionBind(
             DriverObject,
             &WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink,
             &WdfBindInfo,
             &WPP_MAIN_CB.Dpc.ProcessorHistory);
  if ( result >= 0 )
  {
    inited = FxStubBindClasses(v5);
    if ( inited < 0
      || (inited = FxStubInitTypes(), inited < 0)
      || (inited = DriverEntry(DriverObject, RegistryPath), inited < 0) )
    {
      FxStubDriverUnloadCommon(v6);
      return inited;
    }
    else
    {
      if ( *(_BYTE *)(WPP_MAIN_CB.Dpc.ProcessorHistory + 48) )
      {
        Flink = WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink;
        if ( DriverObject->DriverUnload )
          Flink = (_LIST_ENTRY *)DriverObject->DriverUnload;
        WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = Flink;
        DriverObject->DriverUnload = (void (__fastcall *)(_DRIVER_OBJECT *))FxStubDriverUnload;
      }
      return 0;
    }
  }
  return result;
}
