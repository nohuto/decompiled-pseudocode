/*
 * XREFs of DpiPdoDestroyPdo @ 0x1C02AF390
 * Callers:
 *     <none>
 * Callees:
 *     DpiFdoReleaseChildDescriptor @ 0x1C02A2300 (DpiFdoReleaseChildDescriptor.c)
 */

void __fastcall DpiPdoDestroyPdo(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  PVOID DeviceExtension; // rbx
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rax

  DeviceExtension = DeviceObject->DeviceExtension;
  if ( *((_QWORD *)DeviceExtension + 121) )
    RtlFreeUnicodeString((PUNICODE_STRING)DeviceExtension + 60);
  IoFreeWorkItem(*((PIO_WORKITEM *)DeviceExtension + 119));
  ExDeleteResourceLite(*((PERESOURCE *)DeviceExtension + 21));
  v4 = (void *)*((_QWORD *)DeviceExtension + 21);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)DeviceExtension + 21) = 0LL;
  }
  v5 = (void *)*((_QWORD *)DeviceExtension + 116);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)DeviceExtension + 116) = 0LL;
  }
  v6 = WdLogNewEntry5_WdEvent(v5);
  *(_QWORD *)(v6 + 24) = DeviceObject;
  WdLogEvent5_WdEvent(v6);
  DpiFdoReleaseChildDescriptor(*((PVOID *)DeviceExtension + 117));
  IoDeleteDevice(DeviceObject);
}
