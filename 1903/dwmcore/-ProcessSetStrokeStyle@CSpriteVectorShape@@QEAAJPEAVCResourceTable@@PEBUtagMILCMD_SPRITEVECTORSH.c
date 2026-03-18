/*
 * XREFs of ?ProcessSetStrokeStyle@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE@@@Z @ 0x1801FB7E4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F5BC (-InternalRelease@-$ComPtr@VID2DBitmap@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeStyle(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SPRITEVECTORSHAPE_SETSTROKESTYLE *a3)
{
  if ( *((_QWORD *)this + 21) != *((_QWORD *)a3 + 1)
    || *((_DWORD *)this + 44) != *((_DWORD *)a3 + 4)
    || *((_DWORD *)this + 45) != *((_DWORD *)a3 + 5) )
  {
    *((_DWORD *)this + 42) = *((_DWORD *)a3 + 2);
    *((_DWORD *)this + 43) = *((_DWORD *)a3 + 3);
    *((_DWORD *)this + 44) = *((_DWORD *)a3 + 4);
    *((_DWORD *)this + 45) = *((_DWORD *)a3 + 5);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 14);
    Microsoft::WRL::ComPtr<ID2DBitmap>::InternalRelease((__int64 *)this + 15);
    CResource::NotifyOnChanged((__int64)this, 0, 0LL);
  }
  return 0LL;
}
