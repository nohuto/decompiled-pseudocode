/*
 * XREFs of KeyboardStartWorker @ 0x1C0002760
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardStart @ 0x1C00027F0 (KeyboardStart.c)
 */

void __fastcall KeyboardStartWorker(PDEVICE_OBJECT DeviceObject, PIO_WORKITEM *Context)
{
  IRP *v2; // rbx
  struct _IO_REMOVE_LOCK *DeviceExtension; // rdi

  v2 = (IRP *)Context[1];
  DeviceExtension = (struct _IO_REMOVE_LOCK *)DeviceObject->DeviceExtension;
  v2->IoStatus.Status = KeyboardStart(DeviceObject, Context);
  v2->IoStatus.Information = 0LL;
  IofCompleteRequest(v2, 0);
  IoFreeWorkItem(*Context);
  ExFreePoolWithTag(Context, 0);
  IoReleaseRemoveLockEx(DeviceExtension + 1, KeyboardStartWorker, 0x20u);
}
