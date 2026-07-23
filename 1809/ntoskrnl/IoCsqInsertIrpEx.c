/*
 * XREFs of IoCsqInsertIrpEx @ 0x140119900
 * Callers:
 *     IoCsqInsertIrp @ 0x1401198E0 (IoCsqInsertIrp.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall IoCsqInsertIrpEx(PIO_CSQ Csq, PIRP Irp, PIO_CSQ_IRP_CONTEXT Context, PVOID InsertContext)
{
  NTSTATUS v4; // ebp
  PIO_CSQ_ACQUIRE_LOCK CsqAcquireLock; // rax
  PIO_CSQ_INSERT_IRP CsqInsertIrp; // rax
  __int64 v11; // rdx
  PIO_CSQ v12; // rcx
  __int64 v14; // rdx
  char v15; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  if ( Context )
  {
    Irp->Tail.Overlay.DriverContext[3] = Context;
    Context->Irp = Irp;
    Context->Csq = Csq;
    Context->Type = 1;
  }
  else
  {
    Irp->Tail.Overlay.DriverContext[3] = Csq;
  }
  CsqAcquireLock = Csq->CsqAcquireLock;
  Csq->ReservePointer = 0LL;
  ((void (__fastcall *)(PIO_CSQ, char *))CsqAcquireLock)(Csq, &v15);
  CsqInsertIrp = Csq->CsqInsertIrp;
  if ( Csq->Type == 3 )
  {
    v4 = ((__int64 (__fastcall *)(PIO_CSQ, PIRP, PVOID))CsqInsertIrp)(Csq, Irp, InsertContext);
    if ( v4 < 0 )
    {
LABEL_6:
      v12 = Csq;
LABEL_7:
      LOBYTE(v11) = v15;
      ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(v12, v11);
      return v4;
    }
  }
  else
  {
    ((void (__fastcall *)(PIO_CSQ, PIRP))CsqInsertIrp)(Csq, Irp);
  }
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  _InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, (__int64)IopCsqCancelRoutine);
  if ( !Irp->Cancel )
    goto LABEL_6;
  v12 = Csq;
  if ( !_InterlockedExchange64((volatile __int64 *)&Irp->CancelRoutine, 0LL) )
    goto LABEL_7;
  ((void (__fastcall *)(PIO_CSQ, PIRP))Csq->CsqRemoveIrp)(Csq, Irp);
  if ( Context )
    Context->Irp = 0LL;
  Irp->Tail.Overlay.DriverContext[3] = 0LL;
  LOBYTE(v14) = v15;
  ((void (__fastcall *)(PIO_CSQ, __int64))Csq->CsqReleaseLock)(Csq, v14);
  ((void (__fastcall *)(PIO_CSQ, PIRP))Csq->CsqCompleteCanceledIrp)(Csq, Irp);
  return v4;
}
