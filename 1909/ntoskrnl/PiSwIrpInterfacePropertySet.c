/*
 * XREFs of PiSwIrpInterfacePropertySet @ 0x14077A8C4
 * Callers:
 *     PiSwDispatch @ 0x140721AA0 (PiSwDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x140066B30 (IofCompleteRequest.c)
 *     PiSwUnlock @ 0x1407214E4 (PiSwUnlock.c)
 *     PiSwLock @ 0x140721510 (PiSwLock.c)
 *     PiSwValidatePropertyArray @ 0x14072193C (PiSwValidatePropertyArray.c)
 *     PiSwPropertySet @ 0x14074421C (PiSwPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x14074433C (PiSwUpdateArrayProperties.c)
 *     PiSwDeviceOperationsAllowed @ 0x140744450 (PiSwDeviceOperationsAllowed.c)
 *     PiSwDeviceFindInterfaceEntry @ 0x14077AA60 (PiSwDeviceFindInterfaceEntry.c)
 *     MIDL_user_free @ 0x140943C00 (MIDL_user_free.c)
 */

__int64 __fastcall PiSwIrpInterfacePropertySet(PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 FsContext2; // rsi
  NTSTATUS v4; // ebx
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 InterfaceEntry; // rax
  void *v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  __int64 v11; // [rsp+68h] [rbp+20h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  FsContext2 = (__int64)CurrentStackLocation->FileObject->FsContext2;
  v11 = FsContext2;
  v10 = 0LL;
  v9 = 0LL;
  if ( !Irp->AssociatedIrp.MasterIrp )
    goto LABEL_20;
  v4 = MesDecodeBufferHandleCreate(Irp->AssociatedIrp.MasterIrp, CurrentStackLocation->Parameters.Create.Options, &v10);
  if ( v4 < 0 )
    goto LABEL_13;
  NdrMesTypeDecode3(v10, "TP 3\a", &off_140947078, &off_140425540, 4, &v9);
  if ( v9 && *(_QWORD *)v9 && *((_QWORD *)v9 + 2) && (v5 = *((_DWORD *)v9 + 2)) != 0 )
  {
    v4 = PiSwValidatePropertyArray(*((_QWORD *)v9 + 2), v5);
    if ( v4 >= 0 )
    {
      PiSwLock();
      if ( PiSwDeviceOperationsAllowed(FsContext2) )
      {
        InterfaceEntry = PiSwDeviceFindInterfaceEntry(v6, *(_QWORD *)v9);
        v4 = InterfaceEntry
           ? PiSwUpdateArrayProperties(
               *(_QWORD *)(InterfaceEntry + 24),
               *(_DWORD *)(InterfaceEntry + 32),
               *((_QWORD *)v9 + 2),
               *((_DWORD *)v9 + 2))
           : -1073741275;
      }
      else
      {
        v4 = -1073741637;
      }
      PiSwUnlock();
      if ( v4 >= 0 )
        v4 = PiSwPropertySet(*(const WCHAR **)v9, 3u, *((_QWORD *)v9 + 2), *((_DWORD *)v9 + 2));
    }
  }
  else
  {
LABEL_20:
    v4 = -1073741811;
  }
LABEL_13:
  if ( v9 )
    MIDL_user_free(v9);
  if ( v10 )
    MesHandleFree();
  Irp->IoStatus.Status = v4;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)v4;
}
