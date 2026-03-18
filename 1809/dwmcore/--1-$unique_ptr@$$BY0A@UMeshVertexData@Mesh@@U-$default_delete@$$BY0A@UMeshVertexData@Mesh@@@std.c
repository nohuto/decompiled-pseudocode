/*
 * XREFs of ??1?$unique_ptr@$$BY0A@UMeshVertexData@Mesh@@U?$default_delete@$$BY0A@UMeshVertexData@Mesh@@@std@@@std@@QEAA@XZ @ 0x1801819B8
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800B63D0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall std::unique_ptr<Mesh::MeshVertexData [0]>::~unique_ptr<Mesh::MeshVertexData [0]>(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    WPF::ProcessHeapImpl::Free(v1);
}
