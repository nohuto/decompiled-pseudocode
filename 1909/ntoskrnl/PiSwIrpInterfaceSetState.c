/*
 * XREFs of PiSwIrpInterfaceSetState @ 0x14077A2D0
 * Callers:
 *     PiSwDispatch @ 0x140721AA0 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     PiSwUnlock @ 0x1407214E4 (PiSwUnlock.c)
 *     PiSwLock @ 0x140721510 (PiSwLock.c)
 *     PiSwDeviceOperationsAllowed @ 0x140744450 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceInterfaceSetState @ 0x14077A73C (PiSwDeviceInterfaceSetState.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14077AA60 (PiSwDeviceFindInterfaceEntry.c)
 *     MIDL_user_free @ 0x140943C00 (MIDL_user_free.c)
 */

__int64 __fastcall PiSwIrpInterfaceSetState(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // ebx
  __int64 v5; // rcx
  __int64 InterfaceEntry; // rdx
  __int64 v7; // r8
  void *v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v11 = FsContext2;
  v10 = 0LL;
  v9 = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_16;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v10);
  if ( v4 < 0 )
    goto LABEL_9;
  NdrMesTypeDecode3(v10, "TP 3\a", &off_140947078, &off_140425540, 3, &v9);
  if ( v9 && *(_QWORD *)v9 )
  {
    PiSwLock();
    if ( PiSwDeviceOperationsAllowed(FsContext2) )
    {
      InterfaceEntry = PiSwDeviceFindInterfaceEntry(v5, *(_QWORD *)v9);
      if ( InterfaceEntry )
      {
        LOBYTE(v7) = *((_BYTE *)v9 + 8);
        v4 = PiSwDeviceInterfaceSetState(FsContext2, InterfaceEntry, v7);
      }
      else
      {
        v4 = -1073741275;
      }
    }
    else
    {
      v4 = -1073741637;
    }
    PiSwUnlock();
  }
  else
  {
LABEL_16:
    v4 = -1073741811;
  }
LABEL_9:
  if ( v9 )
    MIDL_user_free(v9);
  if ( v10 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
