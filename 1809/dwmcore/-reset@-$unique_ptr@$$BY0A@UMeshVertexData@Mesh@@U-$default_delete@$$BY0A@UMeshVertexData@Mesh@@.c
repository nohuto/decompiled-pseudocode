/*
 * XREFs of ?reset@?$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U?$default_delete@$$BY0A@UMeshVertexData@Mesh@@@std@@@std@@QEAAX$$T@Z @ 0x1800EF048
 * Callers:
 *     ?PreallocateGraphObjects@Mesh@@AEAAJ_N@Z @ 0x1800BB35C (-PreallocateGraphObjects@Mesh@@AEAAJ_N@Z.c)
 * Callees:
 *     MIDL_user_free @ 0x1800BAE70 (MIDL_user_free.c)
 */

void __fastcall std::unique_ptr<Mesh::MeshVertexData [0]>::reset(void **a1)
{
  void *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    MIDL_user_free(v1);
}
