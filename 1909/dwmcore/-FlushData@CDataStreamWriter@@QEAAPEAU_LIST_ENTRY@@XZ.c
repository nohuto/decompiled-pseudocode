/*
 * XREFs of ?FlushData@CDataStreamWriter@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1800A1F4C
 * Callers:
 *     ?CheckPrimitiveCount@CRenderData@@AEAAJXZ @ 0x1800A1940 (-CheckPrimitiveCount@CRenderData@@AEAAJXZ.c)
 *     ?GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z @ 0x1800A1A34 (-GetHandles@CRenderData@@AEAAJPEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *__fastcall CDataStreamWriter::FlushData(CDataStreamWriter *this)
{
  CDataStreamWriter *v1; // rax
  CDataStreamWriter **v2; // rdx

  v1 = (CDataStreamWriter *)*((_QWORD *)this + 4);
  if ( v1 )
  {
    v2 = (CDataStreamWriter **)*((_QWORD *)this + 1);
    if ( *v2 != this )
      __fastfail(3u);
    *(_QWORD *)v1 = this;
    *((_QWORD *)v1 + 1) = v2;
    *v2 = v1;
    *((_QWORD *)this + 1) = v1;
    *((_QWORD *)this + 4) = 0LL;
  }
  return (struct _LIST_ENTRY *)this;
}
