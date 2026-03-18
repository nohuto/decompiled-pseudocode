/*
 * XREFs of ?SetVisualTree@CLocalAppRenderTarget@@MEAAJPEAVCVisualTree@@@Z @ 0x180250D70
 * Callers:
 *     <none>
 * Callees:
 *     ?SetVisualDesktopId@CVisual@@QEAAXI@Z @ 0x1800E62AC (-SetVisualDesktopId@CVisual@@QEAAXI@Z.c)
 */

__int64 __fastcall CLocalAppRenderTarget::SetVisualTree(CLocalAppRenderTarget *this, struct CVisualTree *a2)
{
  CVisual *v4; // rcx

  if ( a2 )
  {
    v4 = (CVisual *)*((_QWORD *)a2 + 3);
    *((_BYTE *)a2 + 32) = 1;
    CVisual::SetVisualDesktopId(v4, 0);
  }
  return CRenderTarget::SetVisualTree(this, a2);
}
