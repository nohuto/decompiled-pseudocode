/*
 * XREFs of CleanupPendingIrpQ @ 0x1C0028E54
 * Callers:
 *     ExitIrpThreadAndQueue @ 0x1C00026F4 (ExitIrpThreadAndQueue.c)
 * Callees:
 *     <none>
 */

PIRP __fastcall CleanupPendingIrpQ(__int64 a1)
{
  struct _IO_CSQ *v1; // rdi
  PIRP result; // rax
  IRP *v3; // rbx

  v1 = (struct _IO_CSQ *)(a1 + 568);
  while ( 1 )
  {
    result = IoCsqRemoveNextIrp(v1, 0LL);
    v3 = result;
    if ( !result )
      break;
    ExFreePool(result->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink);
    v3->IoStatus.Information = 0LL;
    v3->IoStatus.Status = -1073741536;
    IofCompleteRequest(v3, 0);
  }
  return result;
}
