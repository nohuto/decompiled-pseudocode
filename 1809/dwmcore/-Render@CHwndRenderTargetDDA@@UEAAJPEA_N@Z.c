/*
 * XREFs of ?Render@CHwndRenderTargetDDA@@UEAAJPEA_N@Z @ 0x180176620
 * Callers:
 *     <none>
 * Callees:
 *     ?DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z @ 0x18004AFC0 (-DDAExcludeVisualSetExclude@CComposition@@QEAAX_N@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 */

__int64 __fastcall CHwndRenderTargetDDA::Render(CComposition **this, bool *a2)
{
  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 1);
  LODWORD(a2) = CHwndRenderTarget::Render(this, a2);
  CComposition::DDAExcludeVisualSetExclude(*(this - 6), 0);
  return (unsigned int)a2;
}
