/*
 * XREFs of ?NdisGetFirstBufferFromPacketSafe@@YAXPEAU_NDIS_PACKET@@PEAPEAU_MDL@@PEAPEAXPEAI3W4_MM_PAGE_PRIORITY@@@Z @ 0x1C0090F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NdisGetFirstBufferFromPacketSafe(
        struct _NDIS_PACKET *a1,
        struct _MDL **a2,
        void **a3,
        unsigned int *a4,
        unsigned int *a5,
        enum _MM_PAGE_PRIORITY a6)
{
  _MDL *Head; // rbx
  PVOID MappedSystemVa; // rax
  unsigned int ByteCount; // eax
  struct _MDL *i; // rcx

  Head = a1->Private.Head;
  *a2 = Head;
  if ( Head )
  {
    if ( (Head->MdlFlags & 5) != 0 )
      MappedSystemVa = Head->MappedSystemVa;
    else
      MappedSystemVa = MmMapLockedPagesSpecifyCache(Head, 0, MmCached, 0LL, 0, a6 | 0x40000000u);
    *a3 = MappedSystemVa;
    ByteCount = Head->ByteCount;
    *a5 = ByteCount;
    *a4 = ByteCount;
    for ( i = Head->Next; i; i = i->Next )
      *a5 += i->ByteCount;
  }
  else
  {
    *a3 = 0LL;
    *a4 = 0;
    *a5 = 0;
  }
}
