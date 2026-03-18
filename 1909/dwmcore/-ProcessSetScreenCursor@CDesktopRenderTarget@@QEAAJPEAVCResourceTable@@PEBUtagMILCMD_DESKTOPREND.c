/*
 * XREFs of ?ProcessSetScreenCursor@CDesktopRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DESKTOPRENDERTARGET_SETSCREENCURSOR@@@Z @ 0x1800E767C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::ProcessSetScreenCursor(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_DESKTOPRENDERTARGET_SETSCREENCURSOR *a3)
{
  unsigned int v6; // edi
  unsigned int v7; // edx
  struct CResource *Resource; // rax
  __int64 v9; // rcx

  v6 = 0;
  CResource::UnRegisterNotifierInternal((CResource *)this, this[51]);
  this[51] = 0LL;
  v7 = *((_DWORD *)a3 + 2);
  if ( v7 )
  {
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v7, 0xA4u);
    if ( Resource )
    {
      this[51] = Resource;
      CResource::RegisterNotifier((CResource *)this, Resource);
    }
    else
    {
      v6 = -2003303421;
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, 0x88980403, 0x5D3u, 0LL);
    }
  }
  return v6;
}
