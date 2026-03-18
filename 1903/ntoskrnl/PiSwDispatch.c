/*
 * XREFs of PiSwDispatch @ 0x14071FC00
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     PiSwIrpStartCreate @ 0x14071FAFC (PiSwIrpStartCreate.c)
 *     PiAuDoesClientHaveAccess @ 0x14071FFE0 (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpPropertySet @ 0x140742164 (PiSwIrpPropertySet.c)
 *     PiSwIrpCleanup @ 0x14074D3EC (PiSwIrpCleanup.c)
 *     PiSwIrpInterfaceSetState @ 0x140776CF0 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x140776E44 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407772E4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpSetLifetime @ 0x14077FA14 (PiSwIrpSetLifetime.c)
 *     PiSwDeviceDereference @ 0x1407809EC (PiSwDeviceDereference.c)
 *     PiSwIrpGetLifetime @ 0x1407888A0 (PiSwIrpGetLifetime.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  IRP *v8; // rcx
  PVOID FsContext2; // rcx
  PVOID v10; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = (unsigned __int8)PiAuDoesClientHaveAccess(128LL) == 0 ? 0xC0000022 : 0;
    a2->IoStatus.Status = Status;
LABEL_12:
    v8 = a2;
    goto LABEL_13;
  }
  if ( MajorFunction != 14 )
  {
    if ( MajorFunction == 2 )
    {
      FsContext2 = CurrentStackLocation->FileObject->FsContext2;
      if ( FsContext2 )
      {
        PiSwDeviceDereference(FsContext2);
        CurrentStackLocation->FileObject->FsContext2 = 0LL;
      }
    }
    else
    {
      if ( MajorFunction != 18 )
        return Status;
      v10 = CurrentStackLocation->FileObject->FsContext2;
      if ( v10 )
        PiSwIrpCleanup(v10);
    }
    Status = 0;
    a2->IoStatus.Status = 0;
    goto LABEL_12;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x470400u:
      return (unsigned int)PiSwIrpStartCreate((__int64)a2);
    case 0x470404u:
      return (unsigned int)PiSwIrpPropertySet(a2);
    case 0x470408u:
      return (unsigned int)PiSwIrpInterfaceRegister(a2);
    case 0x47040Cu:
      return (unsigned int)PiSwIrpInterfaceSetState(a2);
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654096 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654100 )
      return (unsigned int)PiSwIrpSetLifetime(a2);
    v8 = a2;
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654104 )
      return (unsigned int)PiSwIrpGetLifetime(a2);
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
LABEL_13:
    IofCompleteRequest(v8, 0);
    return Status;
  }
  return (unsigned int)PiSwIrpInterfacePropertySet(a2);
}
