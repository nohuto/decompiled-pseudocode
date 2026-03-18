/*
 * XREFs of ?ProcessSetColorTransform@CMagnifierRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM@@@Z @ 0x1801AA898
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::ProcessSetColorTransform(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_MAGNIFIERRENDERTARGET_SETCOLORTRANSFORM *a3)
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
  if ( !v5 || (Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x17u)) != 0LL )
  {
    if ( Resource != this[22] )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v4 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x142u, 0LL);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[22]);
        this[22] = Resource;
      }
    }
  }
  else
  {
    v4 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, 0x88980403, 0x139u, 0LL);
  }
  return v4;
}
