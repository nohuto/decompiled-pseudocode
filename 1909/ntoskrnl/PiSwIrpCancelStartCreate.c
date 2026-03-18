/*
 * XREFs of PiSwIrpCancelStartCreate @ 0x1402A0CC0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     KeReleaseQueuedSpinLock @ 0x1400770D0 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall PiSwIrpCancelStartCreate(__int64 a1, IRP *a2)
{
  char v3; // di
  _QWORD *FsContext2; // rsi
  struct _KTHREAD *CurrentThread; // rax

  v3 = 0;
  FsContext2 = a2->Tail.Overlay.CurrentStackLocation->FileObject->FsContext2;
  KeReleaseQueuedSpinLock(7uLL, a2->CancelIrql);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  if ( FsContext2[18] )
  {
    FsContext2[18] = 0LL;
    v3 = 1;
  }
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v3 )
  {
    a2->IoStatus.Information = 0LL;
    a2->IoStatus.Status = -1073741536;
    IofCompleteRequest(a2, 0);
  }
}
