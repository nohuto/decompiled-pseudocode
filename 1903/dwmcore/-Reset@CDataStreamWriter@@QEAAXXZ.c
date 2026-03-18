/*
 * XREFs of ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x1800431B4
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z @ 0x180043068 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x180043138 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 * Callees:
 *     ?FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1800431F4 (-FreeBlocks@CDataStreamWriter@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 */

void __fastcall CDataStreamWriter::Reset(struct _LIST_ENTRY *this)
{
  CDataStreamWriter::FreeBlocks((CDataStreamWriter *)this, this);
  operator delete(this[2].Flink);
  this->Blink = this;
  this->Flink = this;
  this[2].Flink = 0LL;
  this[2].Blink = 0LL;
  this[3].Flink = 0LL;
  LODWORD(this[3].Blink) = 0;
}
