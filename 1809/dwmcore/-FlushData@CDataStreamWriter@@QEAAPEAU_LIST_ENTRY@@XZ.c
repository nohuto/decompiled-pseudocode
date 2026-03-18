/*
 * XREFs of ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x18009C694
 * Callers:
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x18009C084 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x18009C178 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CDataStreamWriter::FlushData(CDataStreamWriter *this)
{
  __int64 v1; // rax
  CDataStreamWriter **v2; // rdx
  CDataStreamWriter *v3; // rax

  v1 = *((_QWORD *)this + 2);
  if ( v1 )
  {
    v2 = (CDataStreamWriter **)*((_QWORD *)this + 1);
    v3 = (CDataStreamWriter *)(v1 + 8);
    if ( *v2 != this )
      __fastfail(3u);
    *(_QWORD *)v3 = this;
    *((_QWORD *)v3 + 1) = v2;
    *v2 = v3;
    *((_QWORD *)this + 1) = v3;
    *((_QWORD *)this + 2) = 0LL;
  }
  return (struct _LIST_ENTRY *)this;
}
