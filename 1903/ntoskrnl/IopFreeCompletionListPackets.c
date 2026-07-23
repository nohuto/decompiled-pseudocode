/*
 * XREFs of IopFreeCompletionListPackets @ 0x1406AF620
 * Callers:
 *     IopDeleteIoCompletionInternal @ 0x1400AA358 (IopDeleteIoCompletionInternal.c)
 * Callees:
 *     IoFreeIrp @ 0x140043EA0 (IoFreeIrp.c)
 *     IopDropIrp @ 0x1400FCC10 (IopDropIrp.c)
 *     IopFreeMiniCompletionPacket @ 0x1406029E0 (IopFreeMiniCompletionPacket.c)
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
