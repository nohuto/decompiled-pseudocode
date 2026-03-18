/*
 * XREFs of ?InsertEdge@MeshEdgeList@Mesh@@QEAAXPEAUMeshEdge@2@@Z @ 0x180185728
 * Callers:
 *     ?BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z @ 0x180184978 (-BuildPolygon@Mesh@@AEAAJPEBUD2D_POINT_2F@@PEBW4D2D1_EDGE_FLAGS@@HAEBU_D3DCOLORVALUE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Mesh::MeshEdgeList::InsertEdge(Mesh::MeshEdgeList *this, struct Mesh::MeshEdge *a2)
{
  struct Mesh::MeshEdge *v2; // rdi
  struct Mesh::MeshEdge *v5; // rbx

  v2 = (struct Mesh::MeshEdge *)*((_QWORD *)this + 1);
  v5 = 0LL;
  while ( v2 )
  {
    if ( (*(int (__fastcall **)(Mesh::MeshEdgeList *, struct Mesh::MeshEdge *, struct Mesh::MeshEdge *))(*(_QWORD *)this + 8LL))(
           this,
           a2,
           v2) < 0 )
    {
      v5 = v2;
      break;
    }
    v2 = *(struct Mesh::MeshEdge **)((**(__int64 (__fastcall ***)(Mesh::MeshEdgeList *, struct Mesh::MeshEdge *))this)(
                                       this,
                                       v2)
                                   + 8);
  }
  Mesh::MeshEdgeList::InsertEdgeBefore(this, a2, v5);
}
