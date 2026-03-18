/*
 * XREFs of ?ProcessSetFilterList@CRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_SETFILTERLIST@@@Z @ 0x180194E4C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x180080220 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009D7D0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800B9DD4 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

__int64 __fastcall CRenderTarget::ProcessSetFilterList(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_SETFILTERLIST *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  signed int v8; // eax
  __int64 v9; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0xBFu);
  if ( Resource != this[16] )
  {
    v8 = CResource::RegisterNotifier((CResource *)this, Resource);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Du, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
      this[16] = Resource;
    }
  }
  return v4;
}
