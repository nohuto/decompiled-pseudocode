/*
 * XREFs of ?ProcessSetStretchMode@CVisualSurface@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUALSURFACE_SETSTRETCHMODE@@@Z @ 0x1801FE668
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A8A0 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CVisualSurface::ProcessSetStretchMode(
        CVisualSurface *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VISUALSURFACE_SETSTRETCHMODE *a3)
{
  bool v3; // zf

  v3 = *((_BYTE *)this + 152) == 0;
  *((_DWORD *)this + 22) = *((_DWORD *)a3 + 2);
  if ( !v3 )
    CResource::NotifyOnChanged((__int64)this, 6u, 0LL);
  return 0LL;
}
