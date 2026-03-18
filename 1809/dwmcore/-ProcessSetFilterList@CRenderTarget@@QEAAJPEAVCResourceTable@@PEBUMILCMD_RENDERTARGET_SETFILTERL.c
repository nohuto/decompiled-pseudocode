/*
 * XREFs of ?ProcessSetFilterList@CRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RENDERTARGET_SETFILTERLIST@@@Z @ 0x1801605EC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CRenderTarget::ProcessSetFilterList(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_RENDERTARGET_SETFILTERLIST *a3)
{
  unsigned int v4; // edi
  unsigned int v5; // edx
  struct CResource *Resource; // rsi
  int v8; // eax
  __int64 v9; // rcx

  v4 = 0;
  v5 = *((_DWORD *)a3 + 2);
  Resource = 0LL;
  if ( v5 )
    Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, v5, 0x9Fu);
  if ( Resource != this[16] )
  {
    v8 = CResource::RegisterNotifier((CResource *)this, Resource);
    v4 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x6Eu);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[16]);
      this[16] = Resource;
    }
  }
  return v4;
}
