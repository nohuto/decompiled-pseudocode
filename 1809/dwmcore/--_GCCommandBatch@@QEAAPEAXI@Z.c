/*
 * XREFs of ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180145984
 * Callers:
 *     ?Create@CCommandBatch@@SAJIPEAPEAV1@@Z @ 0x18009AD64 (-Create@CCommandBatch@@SAJIPEAPEAV1@@Z.c)
 *     ??1CChannel@@AEAA@XZ @ 0x1801458D0 (--1CChannel@@AEAA@XZ.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18009C020 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CCommandBatch *__fastcall CCommandBatch::`scalar deleting destructor'(CCommandBatch *this)
{
  CDataStreamWriter::FreeResources(this);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
