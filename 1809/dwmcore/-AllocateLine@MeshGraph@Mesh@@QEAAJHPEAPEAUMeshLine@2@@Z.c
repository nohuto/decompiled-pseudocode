/*
 * XREFs of ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1801848C8
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180184978 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     ??A?$span@UMeshLine@Mesh@@$0?0@gsl@@QEBAAEAUMeshLine@Mesh@@_J@Z @ 0x1801847F4 (--A-$span@UMeshLine@Mesh@@$0-0@gsl@@QEBAAEAUMeshLine@Mesh@@_J@Z.c)
 */

__int64 __fastcall Mesh::MeshGraph::AllocateLine(Mesh::MeshGraph *this, int a2, struct Mesh::MeshLine **a3)
{
  __int64 v5; // rcx
  struct Mesh::MeshLine *v8; // rax

  v5 = *((int *)this + 14);
  if ( (int)v5 + a2 > *((_QWORD *)this + 5) )
    return 2147942414LL;
  v8 = (struct Mesh::MeshLine *)gsl::span<Mesh::MeshLine,-1>::operator[]((__int64 *)this + 5, v5);
  *((_DWORD *)this + 14) += a2;
  *a3 = v8;
  return 0LL;
}
