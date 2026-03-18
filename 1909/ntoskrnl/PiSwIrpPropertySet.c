/*
 * XREFs of PiSwIrpPropertySet @ 0x140744064
 * Callers:
 *     PiSwDispatch @ 0x140721AA0 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpAllocatePWSTR @ 0x1405BCB54 (PnpAllocatePWSTR.c)
 *     PiSwUnlock @ 0x1407214E4 (PiSwUnlock.c)
 *     PiSwLock @ 0x140721510 (PiSwLock.c)
 *     PiSwValidatePropertyArray @ 0x14072193C (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x14074421C (PiSwPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x14074433C (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceOperationsAllowed @ 0x140744450 (PiSwDeviceOperationsAllowed.c)
 *     MIDL_user_free @ 0x140943C00 (MIDL_user_free.c)
 */

__int64 __fastcall PiSwIrpPropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTRSAFE_PCWSTR *FsContext2; // rsi
  NTSTATUS updated; // ebx
  void *v6; // [rsp+68h] [rbp+10h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF
  __int64 v8; // [rsp+78h] [rbp+20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (NTSTRSAFE_PCWSTR *)CurrentStackLocation->FileObject->FsContext2;
  v8 = 0LL;
  v6 = 0LL;
  P = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_20;
  updated = MesDecodeBufferHandleCreate(
              Irp->AssociatedIrp.MasterIrp,
              CurrentStackLocation->Parameters.Create.Options,
              &v8);
  if ( updated < 0 )
    goto LABEL_12;
  NdrMesTypeDecode3(v8, "TP 3\a", &off_140947078, &off_140425540, 1, &v6);
  if ( v6 && *((_QWORD *)v6 + 1) && *(_DWORD *)v6 )
  {
    updated = PiSwValidatePropertyArray(*((_QWORD *)v6 + 1), *(_DWORD *)v6);
    if ( updated >= 0 )
    {
      PiSwLock();
      if ( (unsigned __int8)PiSwDeviceOperationsAllowed(FsContext2) )
      {
        updated = PnpAllocatePWSTR(FsContext2[10], 0xC8uLL, 0x57706E50u, &P);
        if ( updated >= 0 )
          updated = PiSwUpdateArrayProperties(
                      FsContext2[21],
                      *((unsigned int *)FsContext2 + 44),
                      *((_QWORD *)v6 + 1),
                      *(unsigned int *)v6);
      }
      else
      {
        updated = -1073741637;
      }
      PiSwUnlock();
      if ( updated >= 0 )
        updated = PiSwPropertySet(P, 1LL, *((_QWORD *)v6 + 1), *(unsigned int *)v6);
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
  if ( v6 )
    MIDL_user_free(v6);
  if ( v8 )
    MesHandleFree();
  Irp->IoStatus.Status = updated;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)updated;
}
