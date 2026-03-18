/*
 * XREFs of IopDropIrp @ 0x1400FEDA0
 * Callers:
 *     IoRemoveIoCompletion @ 0x1400448E0 (IoRemoveIoCompletion.c)
 *     IopfCompleteRequest @ 0x140066B60 (IopfCompleteRequest.c)
 *     IopFreeCompletionListPackets @ 0x1406B1550 (IopFreeCompletionListPackets.c)
 * Callees:
 *     ObpTraceObjectDereferenceIfActive @ 0x140009AC0 (ObpTraceObjectDereferenceIfActive.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     IopDequeueIrpFromFileObject @ 0x1400FEE94 (IopDequeueIrpFromFileObject.c)
 *     IoFreeMdl @ 0x1400FEF60 (IoFreeMdl.c)
 *     ObpDeferObjectDeletion @ 0x140128EA4 (ObpDeferObjectDeletion.c)
 *     IopInterlockedAdd @ 0x140131834 (IopInterlockedAdd.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall IopDropIrp(PIRP Irp, ULONG_PTR BugCheckParameter2)
{
  PMDL MdlAddress; // rcx
  struct _MDL *Next; // rbx
  PKEVENT UserEvent; // rcx
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rax
  bool v9; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( (Irp->Flags & 0x20) != 0 )
    ExFreePoolWithTag(Irp->AssociatedIrp.MasterIrp, 0);
  MdlAddress = Irp->MdlAddress;
  if ( MdlAddress )
  {
    do
    {
      Next = MdlAddress->Next;
      IoFreeMdl(MdlAddress);
      MdlAddress = Next;
    }
    while ( Next );
  }
  UserEvent = Irp->UserEvent;
  if ( UserEvent && BugCheckParameter2 && (Irp->Flags & 4) == 0 )
    ObfDereferenceObject(UserEvent);
  if ( (Irp->Flags & 0x2000) != 0 )
    IopDequeueIrpFromFileObject(Irp, BugCheckParameter2);
  if ( BugCheckParameter2 )
  {
    if ( (Irp->Flags & 0x80u) == 0 )
    {
      v7 = BugCheckParameter2 - 48;
      ObpTraceObjectDereferenceIfActive(BugCheckParameter2 - 48);
      v8 = _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 - 48), 0xFFFFFFFFFFFFFFFFuLL);
      v9 = v8 <= 1;
      BugCheckParameter4 = v8 - 1;
      if ( v9 )
      {
        if ( *(_QWORD *)(v7 + 8) )
          KeBugCheckEx(
            0x18u,
            ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v7 + 24) ^ (unsigned __int64)BYTE1(v7)],
            BugCheckParameter2,
            6uLL,
            *(_QWORD *)(v7 + 8));
        if ( BugCheckParameter4 < 0 )
          KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 5uLL, BugCheckParameter4);
        ObpDeferObjectDeletion(BugCheckParameter2 - 48);
      }
    }
  }
  if ( (Irp->Flags & 0x8000) == 0 || !(unsigned int)IopInterlockedAdd(&Irp->Overlay, 0xFFFFFFFFLL) )
    IoFreeIrp(Irp);
}
