/*
 * XREFs of ??A?$span@UMeshVertex@Mesh@@$0?0@gsl@@QEBAAEAUMeshVertex@Mesh@@_J@Z @ 0x18018481C
 * Callers:
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x180184920 (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 * Callees:
 *     ?terminate@details@gsl@@YAXXZ @ 0x180152C70 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall gsl::span<Mesh::MeshVertex,-1>::operator[](__int64 *a1, __int64 a2)
{
  if ( a2 < 0 || a2 >= *a1 )
  {
    gsl::details::terminate((gsl::details *)a1);
    JUMPOUT(0x18018483FLL);
  }
  return a1[1] + (a2 << 6);
}
