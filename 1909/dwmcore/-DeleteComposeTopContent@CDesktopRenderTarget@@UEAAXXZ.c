/*
 * XREFs of ?DeleteComposeTopContent@CDesktopRenderTarget@@UEAAXXZ @ 0x1800D9220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDesktopRenderTarget::DeleteComposeTopContent(CDesktopRenderTarget *this)
{
  SAFE_DELETE<CComposeTop>((char *)this + 200);
}
