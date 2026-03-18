/*
 * XREFs of ?PostBatch@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@0@Z @ 0x1C000C200
 * Callers:
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObject@2@@Z @ 0x1C000C098 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_NPEBUSynchronizationObje.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C006DE98 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CConnection::PostBatch(
        union _SLIST_HEADER *this,
        struct _SLIST_ENTRY *a2,
        struct DirectComposition::CBatch *a3)
{
  struct _SLIST_ENTRY *Next; // rax

  Next = a2->Next;
  *((_QWORD *)&a2[1].Next + 1) = a2->Next;
  if ( Next )
    *((_QWORD *)&Next[1].Next + 1) = a3;
  ExpInterlockedPushEntrySList(this + 6, a2);
  KeSetEvent(*(PRKEVENT *)(this[5].Alignment + 8), 1, 0);
}
