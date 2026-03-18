/*
 * XREFs of ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800CC96C
 * Callers:
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x18007A8B8 (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180092E10 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800997B0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F520 (--3@YAXPEAX_K@Z.c)
 *     ??1MeshGraph@Mesh@@QEAA@XZ @ 0x18006F214 (--1MeshGraph@Mesh@@QEAA@XZ.c)
 */

Mesh::MeshGraph *__fastcall Mesh::MeshGraph::`scalar deleting destructor'(Mesh::MeshGraph *this)
{
  Mesh::MeshGraph::~MeshGraph(this);
  operator delete(this);
  return this;
}
