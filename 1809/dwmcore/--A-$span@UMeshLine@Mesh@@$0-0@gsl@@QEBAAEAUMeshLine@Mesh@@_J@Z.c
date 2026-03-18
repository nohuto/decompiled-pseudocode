/*
 * XREFs of ??A?$span@UMeshLine@Mesh@@$0?0@gsl@@QEBAAEAUMeshLine@Mesh@@_J@Z @ 0x1801847F4
 * Callers:
 *     ?AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z @ 0x180184870 (-AllocateEdge@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshEdge@2@@Z.c)
 *     ?AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z @ 0x1801848C8 (-AllocateLine@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshLine@2@@Z.c)
 *     ?InitMeshGraph@Mesh@@AEAAJXZ @ 0x180185618 (-InitMeshGraph@Mesh@@AEAAJXZ.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<Mesh::MeshLine,-1>::operator[](__int64 *a1, __int64 a2)
{
  if ( a2 < 0 || a2 >= *a1 )
  {
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x180184814LL);
  }
  return a1[1] + 88 * a2;
}
