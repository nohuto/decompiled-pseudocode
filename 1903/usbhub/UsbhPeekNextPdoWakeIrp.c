/*
 * XREFs of UsbhPeekNextPdoWakeIrp @ 0x1C000CF60
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 */

_LIST_ENTRY **__fastcall UsbhPeekNextPdoWakeIrp(PIO_CSQ Csq, PIRP Irp, PVOID PeekContext)
{
  _LIST_ENTRY **p_Blink; // r9
  _LIST_ENTRY *Flink; // rax

  p_Blink = 0LL;
  if ( Irp )
    Flink = Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = (_LIST_ENTRY *)Csq[-1].CsqCompleteCanceledIrp;
  while ( Flink != (_LIST_ENTRY *)&Csq[-1].CsqCompleteCanceledIrp )
  {
    if ( !Flink )
      UsbhTrapFatal_Dbg(Csq[-18].ReservePointer, Csq);
    p_Blink = &Flink[-11].Blink;
    if ( Flink == (_LIST_ENTRY *)168 )
      UsbhTrapFatal_Dbg(Csq[-18].ReservePointer, Csq);
    if ( !PeekContext )
      break;
    Flink = Flink->Flink;
  }
  return p_Blink;
}
