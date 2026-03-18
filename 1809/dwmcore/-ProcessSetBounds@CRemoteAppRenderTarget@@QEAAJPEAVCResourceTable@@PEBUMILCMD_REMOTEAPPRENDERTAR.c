/*
 * XREFs of ?ProcessSetBounds@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_REMOTEAPPRENDERTARGET_SETBOUNDS@@@Z @ 0x18014BBC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetBounds(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_REMOTEAPPRENDERTARGET_SETBOUNDS *a3)
{
  return CRemoteAppRenderTarget::SetWindowBounds(this, (const struct tagRECT *)((char *)a3 + 8));
}
