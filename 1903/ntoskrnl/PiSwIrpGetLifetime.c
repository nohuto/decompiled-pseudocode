/*
 * XREFs of PiSwIrpGetLifetime @ 0x1407888A0
 * Callers:
 *     PiSwDispatch @ 0x14071FC00 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     PiSwDeviceOperationsAllowed @ 0x140742550 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpGetLifetime(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v2; // ebx
  struct _IRP *MasterIrp; // r14
  __int64 FsContext2; // rsi
  struct _KTHREAD *CurrentThread; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  MasterIrp = Irp->AssociatedIrp.MasterIrp;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Read.Length < 4 )
  {
    v2 = -1073741811;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      *(_DWORD *)&MasterIrp->Type = *(_DWORD *)(FsContext2 + 180);
      Irp->IoStatus.Information = 4LL;
    }
    else
    {
      v2 = -1073741637;
    }
    ExReleaseResourceLite(&PiSwLockObj);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
  return v2;
}
