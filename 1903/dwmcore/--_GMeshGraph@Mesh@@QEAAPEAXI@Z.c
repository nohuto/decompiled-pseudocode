/*
 * XREFs of ??_GMeshGraph@Mesh@@QEAAPEAXI@Z @ 0x1800CCA88
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x180057590 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x180088C48 (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800961D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ??1MeshGraph@Mesh@@QEAA@XZ @ 0x1800917A4 (--1MeshGraph@Mesh@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 */

Mesh::MeshGraph *__fastcall Mesh::MeshGraph::`scalar deleting destructor'(Mesh::MeshGraph *this)
{
  Mesh::MeshGraph::~MeshGraph(this);
  operator delete(this, 0x88uLL);
  return this;
}
