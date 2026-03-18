/*
 * XREFs of ?SetFullRender@CRemoteAppRenderTarget@@UEAAXXZ @ 0x1801A4E20
 * Callers:
 *     <none>
 * Callees:
 *     ?SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ @ 0x1801A4D9C (-SendCompSurfHandle@CRemoteAppRenderTarget@@IEBAJXZ.c)
 *     ?SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z @ 0x1801A4E60 (-SetWindowBounds@CRemoteAppRenderTarget@@IEAAJAEBUtagRECT@@@Z.c)
 */

void __fastcall CRemoteAppRenderTarget::SetFullRender(CRemoteAppRenderTarget *this)
{
  *((_BYTE *)this + 161) = 1;
  CRemoteAppRenderTarget::SetWindowBounds(this, (const struct tagRECT *)this + 18);
  if ( *(_DWORD *)(*((_QWORD *)this + 2) + 1096LL) == 6 )
    CRemoteAppRenderTarget::SendCompSurfHandle(this);
}
