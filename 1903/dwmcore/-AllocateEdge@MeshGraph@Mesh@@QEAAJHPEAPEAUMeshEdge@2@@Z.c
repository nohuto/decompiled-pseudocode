/*
 * XREFs of ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x1801B91C0
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x1801B92EC (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??A?$span@UMeshLine@Mesh@@$0?0@gsl@@QEBAAEAUMeshLine@Mesh@@_J@Z @ 0x1801B913C (--A-$span@UMeshLine@Mesh@@$0-0@gsl@@QEBAAEAUMeshLine@Mesh@@_J@Z.c)
 */

__int64 __fastcall Mesh::MeshGraph::AllocateEdge(Mesh::MeshGraph *this, int a2, struct Mesh::MeshEdge **a3)
{
  unsigned __int64 v5; // rcx
  struct Mesh::MeshEdge *v8; // rax

  v5 = *((int *)this + 22);
  if ( (int)v5 + a2 > *((_QWORD *)this + 9) )
    return 2147942414LL;
  v8 = (struct Mesh::MeshEdge *)gsl::span<Mesh::MeshLine,-1>::operator[]((unsigned __int64 *)this + 9, v5);
  *((_DWORD *)this + 22) += a2;
  *a3 = v8;
  return 0LL;
}
