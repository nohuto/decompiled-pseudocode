/*
 * XREFs of PiSwIrpPropertySet @ 0x14071E4B4
 * Callers:
 *     PiSwDispatch @ 0x1406D88E0 (PiSwDispatch.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     PiSwPropertySet @ 0x1406D8BF0 (PiSwPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1406D8D10 (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceOperationsAllowed @ 0x1406D8E84 (PiSwDeviceOperationsAllowed.c)
 *     PiSwValidatePropertyArray @ 0x1406D8EB0 (PiSwValidatePropertyArray.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS updated; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID v7; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v9; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v9 = 0LL;
  v7 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_20;
  updated = MesDecodeBufferHandleCreate(
              Irp->AssociatedIrp.MasterIrp,
              CurrentStackLocation->Parameters.Create.Options,
              &v9);
  if ( updated < 0 )
    goto LABEL_12;
  NdrMesTypeDecode3(v9, "TP 3\a", &off_14090A1E8, &off_140400530, 1, &v7);
  if ( v7 && *((_QWORD *)v7 + 1) && *(_DWORD *)v7 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v7 + 1), *(_DWORD *)v7);
    if ( updated >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
      if ( PiSwDeviceOperationsAllowed(FsContext2) )
      {
        updated = PnpAllocatePWSTR(*(NTSTRSAFE_PCWSTR *)(FsContext2 + 80), 0xC8uLL, 0x57706E50u, &P);
        if ( updated >= 0 )
          updated = PiSwUpdateArrayProperties(
                      *(_QWORD *)(FsContext2 + 168),
                      *(_DWORD *)(FsContext2 + 176),
                      *((_QWORD *)v7 + 1),
                      *(_DWORD *)v7);
      }
      else
      {
        updated = -1073741637;
      }
      ExReleaseResourceLite(&PiSwLockObj);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      if ( updated >= 0 )
        updated = PiSwPropertySet((__int64)P, 1u, *((_QWORD *)v7 + 1), *(_DWORD *)v7);
    }
  }
  else
  {
LABEL_20:
    updated = -1073741811;
  }
LABEL_12:
  if ( P )
    ExFreePoolWithTag(P, 0x57706E50u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0x6370726Bu);
  if ( v9 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
