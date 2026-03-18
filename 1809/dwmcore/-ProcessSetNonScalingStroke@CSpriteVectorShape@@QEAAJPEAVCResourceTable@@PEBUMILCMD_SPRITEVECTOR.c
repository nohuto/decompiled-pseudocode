/*
 * XREFs of ?ProcessSetNonScalingStroke@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORSHAPE_SETNONSCALINGSTROKE@@@Z @ 0x1801B3B5C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D4F8 (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800A0DF0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetNonScalingStroke(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVECTORSHAPE_SETNONSCALINGSTROKE *a3)
{
  char v4; // al

  v4 = *((_DWORD *)a3 + 2) != 0;
  if ( v4 != *((_BYTE *)this + 196) )
  {
    *((_BYTE *)this + 196) = v4;
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 14);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 15);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return 0LL;
}
