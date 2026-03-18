/*
 * XREFs of ??$reset@PEAUMeshVertexData@Mesh@@X@?$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U?$default_delete@$$BY0A@UMeshVertexData@Mesh@@@std@@@std@@QEAAXPEAUMeshVertexData@Mesh@@@Z @ 0x1800EF024
 * Callers:
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x1800BB35C (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 * Callees:
 *     MIDL_user_free @ 0x1800BAE70 (MIDL_user_free.c)
 */

void __fastcall std::unique_ptr<Mesh::MeshVertexData [0]>::reset<Mesh::MeshVertexData *,void>(void **a1, void *a2)
{
  void *v2; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    MIDL_user_free(v2);
}
