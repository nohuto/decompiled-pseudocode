/*
 * XREFs of ?FreeResources@CDataStreamWriter@@IEAAXXZ @ 0x18009C020
 * Callers:
 *     ??1CRenderData@@MEAA@XZ @ 0x18009BD70 (--1CRenderData@@MEAA@XZ.c)
 *     ?Reset@CDataStreamWriter@@QEAAXXZ @ 0x18009BFEC (-Reset@CDataStreamWriter@@QEAAXXZ.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x1800CEAD0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ??_GCCommandBatch@@QEAAPEAXI@Z @ 0x180145984 (--_GCCommandBatch@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDataStreamWriter::FreeResources(CDataStreamWriter *this)
{
  CDataStreamWriter **v2; // rax
  void *v3; // r8
  CDataStreamWriter *v4; // rcx

  while ( 1 )
  {
    v2 = *(CDataStreamWriter ***)this;
    if ( *(CDataStreamWriter **)this == this )
      break;
    if ( v2[1] != this || (v4 = *v2, *((CDataStreamWriter ***)*v2 + 1) != v2) )
      __fastfail(3u);
    *(_QWORD *)this = v4;
    *((_QWORD *)v4 + 1) = this;
    if ( v2 != (CDataStreamWriter **)8 )
      HeapFree(WPF::g_processHeap, 0, v2 - 1);
  }
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
    HeapFree(WPF::g_processHeap, 0, v3);
}
