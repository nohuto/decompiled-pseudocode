/*
 * XREFs of ProcessIrpsThread @ 0x1C0027D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn ProcessIrpsThread(__int64 a1)
{
  struct _IO_CSQ *v2; // rsi
  struct _LIST_ENTRY *Flink; // r14
  NTSTATUS v4; // r15d
  PIRP v5; // rax
  IRP *v6; // rbx

  v2 = (struct _IO_CSQ *)(a1 + 568);
  while ( 1 )
  {
    KeWaitForSingleObject((PVOID)(a1 + 656), Executive, 0, 0, 0LL);
    if ( *(_BYTE *)(a1 + 696) )
      PsTerminateSystemThread(0);
    while ( 1 )
    {
      v5 = IoCsqRemoveNextIrp(v2, 0LL);
      v6 = v5;
      if ( !v5 )
        break;
      Flink = v5->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink;
      v4 = ((__int64 (__fastcall *)(PIRP, struct _LIST_ENTRY *, struct _LIST_ENTRY *))Flink->Flink)(
             v5,
             Flink->Blink,
             Flink[1].Flink);
      if ( v4 == 259 )
        break;
      ExFreePool(Flink);
      v6->IoStatus.Status = v4;
      IofCompleteRequest(v6, 0);
    }
  }
}
