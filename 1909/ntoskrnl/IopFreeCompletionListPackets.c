/*
 * XREFs of IopFreeCompletionListPackets @ 0x1406B1550
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1400E3358 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     IopDropIrp @ 0x1400FEDA0 (IopDropIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1406044F0 (IopFreeMiniCompletionPacket.c)
 */

void __fastcall IopFreeCompletionListPackets(_SLIST_ENTRY *P)
{
  _SLIST_ENTRY *v1; // rbx
  _SLIST_ENTRY *v2; // rcx
  IRP *v3; // rcx

  if ( P )
  {
    v1 = P;
    do
    {
      v2 = v1;
      v1 = v1->Next;
      if ( LOBYTE(v2[1].Next) )
      {
        IopFreeMiniCompletionPacket(v2);
      }
      else
      {
        v3 = (IRP *)(&v2[-11].Next + 1);
        if ( (v3->Flags & 0x2000) != 0 )
          IopDropIrp(v3, (ULONG_PTR)v3->Tail.Overlay.OriginalFileObject);
        else
          IoFreeIrp(v3);
      }
    }
    while ( v1 );
  }
}
