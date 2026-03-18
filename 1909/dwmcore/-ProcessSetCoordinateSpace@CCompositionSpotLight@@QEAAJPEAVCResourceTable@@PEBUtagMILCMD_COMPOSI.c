/*
 * XREFs of ?ProcessSetCoordinateSpace@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE@@@Z @ 0x1800A0264
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18007BA60 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800A1F80 (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800BBF14 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetCoordinateSpace(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETCOORDINATESPACE *a3)
{
  unsigned int v4; // ebx
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  __int64 v8; // rcx
  signed int v9; // eax
  __int64 v10; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 && (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xBDu)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980403, 0x130u, 0LL);
  }
  else if ( Resource != this[31] )
  {
    v9 = CResource::RegisterNotifier((CResource *)this, Resource);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x136u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[31]);
      this[31] = Resource;
      CCompositionLight::IssueLightChangedNotification((CCompositionLight *)this);
    }
  }
  return v4;
}
