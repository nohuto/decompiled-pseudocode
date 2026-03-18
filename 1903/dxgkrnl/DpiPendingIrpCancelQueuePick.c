/*
 * XREFs of DpiPendingIrpCancelQueuePick @ 0x1C004BC70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PIO_CSQ_PEEK_NEXT_IRP *__fastcall DpiPendingIrpCancelQueuePick(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_PEEK_NEXT_IRP *PeekContext)
{
  struct _IO_CSQ *Flink; // rax

  if ( Irp )
    Flink = (struct _IO_CSQ *)Irp->Tail.Overlay.ListEntry.Flink;
  else
    Flink = *(struct _IO_CSQ **)&Csq[1].Type;
  while ( 1 )
  {
    if ( Flink == &Csq[1] )
      return 0LL;
    if ( PeekContext == &Flink[-3].CsqPeekNextIrp || !PeekContext )
      break;
    Flink = *(struct _IO_CSQ **)&Flink->Type;
  }
  return &Flink[-3].CsqPeekNextIrp;
}
