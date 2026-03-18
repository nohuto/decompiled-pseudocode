/*
 * XREFs of ??A?$span@UMeshVertex@Mesh@@$0?0@gsl@@QEBAAEAUMeshVertex@Mesh@@_J@Z @ 0x1801B9168
 * Callers:
 *     ?AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z @ 0x1801B9294 (-AllocateVertex@MeshGraph@Mesh@@QEAAJHPEAPEAUMeshVertex@2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall gsl::span<Mesh::MeshVertex,-1>::operator[](unsigned __int64 *a1, unsigned __int64 a2)
{
  if ( a2 >= *a1 )
  {
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
    __debugbreak();
  }
  return a1[1] + (a2 << 6);
}
