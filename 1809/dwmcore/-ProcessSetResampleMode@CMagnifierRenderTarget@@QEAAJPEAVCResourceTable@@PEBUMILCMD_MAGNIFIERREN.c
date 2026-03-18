/*
 * XREFs of ?ProcessSetResampleMode@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE@@@Z @ 0x18015D840
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetResampleMode(
        CMagnifierRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_MAGNIFIERRENDERTARGET_SETRESAMPLEMODE *a3)
{
  int v3; // eax

  v3 = *((_DWORD *)a3 + 2);
  if ( *((_DWORD *)this + 48) != v3 )
  {
    *((_DWORD *)this + 48) = v3;
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return 0LL;
}
