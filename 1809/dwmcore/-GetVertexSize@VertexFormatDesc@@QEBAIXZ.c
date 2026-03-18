/*
 * XREFs of ?GetVertexSize@VertexFormatDesc@@QEBAIXZ @ 0x180189A80
 * Callers:
 *     ?EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntry@@@Z @ 0x18022A420 (-EmitGeometry@CCubeMapRenderingEffect@@UEBAJPEAVCD3DBatchExecutionContext@@PEBVCBaseDrawListEntr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VertexFormatDesc::GetVertexSize(VertexFormatDesc *this)
{
  int v1; // eax

  v1 = 8 * *((_DWORD *)this + 1);
  if ( *(_BYTE *)this )
    return (unsigned int)(v1 + 48);
  else
    return (unsigned int)(v1 + 16);
}
