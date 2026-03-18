/*
 * XREFs of PiUEventHandleIoctl @ 0x140668A7C
 * Callers:
 *     PiUEventDispatch @ 0x1406689E0 (PiUEventDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400668C0 (IofCompleteRequest.c)
 *     PiUEventHandleRegistration @ 0x140667FE4 (PiUEventHandleRegistration.c)
 *     PiUEventHandleGetEvent @ 0x140668B34 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleUnregisterClient @ 0x1406EDD10 (PiUEventHandleUnregisterClient.c)
 *     PiUEventHandleVetoEvent @ 0x14072C730 (PiUEventHandleVetoEvent.c)
 */

__int64 __fastcall PiUEventHandleIoctl(PIRP Irp, __int64 a2, int a3, int a4)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int Event; // eax
  unsigned int v7; // edi

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x470800u:
      Event = PiUEventHandleRegistration(
                (__int64)CurrentStackLocation->FileObject,
                (__int64)Irp->AssociatedIrp.MasterIrp,
                CurrentStackLocation->Parameters.Create.Options,
                CurrentStackLocation->Parameters.Read.Length,
                (__int64)&Irp->IoStatus);
      break;
    case 0x470804u:
      Event = PiUEventHandleGetEvent(
                CurrentStackLocation->FileObject,
                Irp->AssociatedIrp.MasterIrp,
                a3,
                CurrentStackLocation->Parameters.Read.Length,
                (__int64)&Irp->IoStatus);
      break;
    case 0x470808u:
      Event = PiUEventHandleVetoEvent(
                CurrentStackLocation->FileObject,
                Irp->AssociatedIrp.MasterIrp,
                CurrentStackLocation->Parameters.Create.Options,
                a4,
                (__int64)&Irp->IoStatus);
      break;
    case 0x47080Cu:
      Event = PiUEventHandleUnregisterClient(CurrentStackLocation->FileObject);
      break;
    default:
      v7 = -1073741637;
      goto LABEL_5;
  }
  v7 = Event;
LABEL_5:
  Irp->IoStatus.Status = v7;
  IofCompleteRequest(Irp, 0);
  return v7;
}
