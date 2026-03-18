/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x18015701C
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x180042078 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x180157364 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800431F4 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

struct _LIST_ENTRY *__fastcall CCommandBatch::`scalar deleting destructor'(struct _LIST_ENTRY *this)
{
  CDataStreamWriter *v2; // rcx

  CDataStreamWriter::FreeBlocks((CDataStreamWriter *)this, this);
  operator delete(this[2].Flink);
  CDataStreamWriter::FreeBlocks(v2, this + 1);
  operator delete(this);
  return this;
}
