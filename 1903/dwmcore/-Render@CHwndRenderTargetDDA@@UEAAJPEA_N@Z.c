/*
 * XREFs of ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x1801ABB40
 * Callers:
 *     <none>
 * Callees:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x180048830 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x1801772BC (-DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::Render(CComposition **this, bool *a2)
{
  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 1);
  LODWORD(a2) = CHwndRenderTarget::Render(this, a2);
  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 0);
  return (unsigned int)a2;
}
