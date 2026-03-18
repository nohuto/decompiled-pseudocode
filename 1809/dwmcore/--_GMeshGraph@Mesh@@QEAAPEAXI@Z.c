/*
 * XREFs of ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x18006019C
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x1800BA810 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x1800BB35C (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 */

Mesh::MeshGraph *__fastcall Mesh::MeshGraph::`scalar deleting destructor'(Mesh::MeshGraph *this)
{
  void *v1; // r8
  void *v3; // r8
  void *v4; // r8
  void *v5; // r8

  v1 = (void *)*((_QWORD *)this + 3);
  if ( v1 )
    HeapFree(WPF::g_processHeap, 0, v1);
  v3 = (void *)*((_QWORD *)this + 6);
  if ( v3 )
    HeapFree(WPF::g_processHeap, 0, v3);
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
    HeapFree(WPF::g_processHeap, 0, v4);
  v5 = (void *)*((_QWORD *)this + 15);
  if ( v5 )
    HeapFree(WPF::g_processHeap, 0, v5);
  operator delete(this, 0x88uLL);
  return this;
}
