/*
 * XREFs of ?ProcessSetCoordinateSpace@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE@@@Z @ 0x18007A0B8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?IssueLightChangedNotification@CCompositionLight@@IEAAXXZ @ 0x1800A1560 (-IssueLightChangedNotification@CCompositionLight@@IEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CCompositionDistantLight::ProcessSetCoordinateSpace(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONDISTANTLIGHT_SETCOORDINATESPACE *a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct CResource *Resource; // rsi
  unsigned int v8; // ecx
  int v9; // eax
  unsigned int v10; // ecx

  v4 = 0;
  v5 = *((unsigned int *)a3 + 2);
  Resource = 0LL;
  if ( (_DWORD)v5 && (Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 157LL)) == 0LL )
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2003303421, 0xCBu);
  }
  else if ( Resource != this[20] )
  {
    v9 = CResource::RegisterNotifier((CResource *)this, Resource);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xD1u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[20]);
      this[20] = Resource;
      CCompositionLight::IssueLightChangedNotification((CCompositionLight *)this);
    }
  }
  return v4;
}
