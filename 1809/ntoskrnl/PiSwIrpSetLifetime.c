/*
 * XREFs of PiSwIrpSetLifetime @ 0x14075A688
 * Callers:
 *     PiSwDispatch @ 0x1406D88E0 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     PiSwDeviceOperationsAllowed @ 0x1406D8E84 (PiSwDeviceOperationsAllowed.c)
 */

__int64 __fastcall PiSwIrpSetLifetime(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int v2; // ebx
  __int64 FsContext2; // rbp
  struct _IRP *MasterIrp; // rsi
  struct _KTHREAD *CurrentThread; // rax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v2 = 0;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  if ( CurrentStackLocation->Parameters.Create.Options == 4
    && (MasterIrp = Irp->AssociatedIrp.MasterIrp, *(_DWORD *)&MasterIrp->Type <= 1u) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
      *(_DWORD *)(FsContext2 + 180) = *(_DWORD *)&MasterIrp->Type;
    else
      v2 = -1073741637;
    ExReleaseResourceLite(&PiSwLockObj);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  else
  {
    v2 = -1073741811;
  }
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
  return v2;
}
