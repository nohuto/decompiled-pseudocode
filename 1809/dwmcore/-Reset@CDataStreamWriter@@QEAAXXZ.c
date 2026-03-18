/*
 * XREFs of ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18009BFEC
 * Callers:
 *     ?ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z @ 0x18009BEA0 (-ProcessUpdate@CRenderData@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERDATA@@PEBXI@Z.c)
 *     ?DestroyRenderData@CRenderData@@AEAAXXZ @ 0x18009BF70 (-DestroyRenderData@CRenderData@@AEAAXXZ.c)
 * Callees:
 *     ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18009C020 (-FreeResources@CDataStreamWriter@@IEAAXXZ.c)
 */

void __fastcall CDataStreamWriter::Reset(CDataStreamWriter *this)
{
  CDataStreamWriter::FreeResources(this);
  *((_QWORD *)this + 1) = this;
  *(_QWORD *)this = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_DWORD *)this + 10) = 0;
}
