/*
 * XREFs of ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x180184920
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180184978 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??A?$span@UMeshVertex@Mesh@@$0?0@gsl@@QEBAAEAUMeshVertex@Mesh@@_J@Z @ 0x18018481C (--A-$span@UMeshVertex@Mesh@@$0-0@gsl@@QEBAAEAUMeshVertex@Mesh@@_J@Z.c)
 */

__int64 __fastcall Mesh::MeshGraph::AllocateVertex(Mesh::MeshGraph *this, int a2, struct Mesh::MeshVertex **a3)
{
  __int64 v5; // rcx
  struct Mesh::MeshVertex *v8; // rax

  v5 = *((int *)this + 8);
  if ( (int)v5 + a2 > *((_QWORD *)this + 2) )
    return 2147942414LL;
  v8 = (struct Mesh::MeshVertex *)gsl::span<Mesh::MeshVertex,-1>::operator[]((__int64 *)this + 2, v5);
  *((_DWORD *)this + 8) += a2;
  *a3 = v8;
  return 0LL;
}
