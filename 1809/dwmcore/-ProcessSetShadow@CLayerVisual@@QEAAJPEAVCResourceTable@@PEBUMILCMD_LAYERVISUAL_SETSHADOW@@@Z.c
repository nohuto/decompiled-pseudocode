/*
 * XREFs of ?ProcessSetShadow@CLayerVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LAYERVISUAL_SETSHADOW@@@Z @ 0x1801A4A50
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CLayerVisual::ProcessSetShadow(
        struct CResource **this,
        struct CResourceTable *a2,
        const struct MILCMD_LAYERVISUAL_SETSHADOW *a3)
{
  unsigned int v5; // edi
  struct CResource *Resource; // rax
  __int64 v7; // rcx
  struct CResource *v8; // rbp
  int v9; // eax
  __int64 v10; // rcx

  v5 = 0;
  Resource = (struct CResource *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0x30u);
  v8 = Resource;
  if ( !*((_DWORD *)a3 + 2) || Resource )
  {
    if ( Resource != this[70] )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v5 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x6Fu);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[70]);
        this[70] = v8;
        CVisual::PropagateFlags((__int64)this, 5u, 0);
      }
    }
  }
  else
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x69u);
  }
  return v5;
}
