/*
 * XREFs of ?ProcessSetTransform@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETTRANSFORM@@@Z @ 0x1800A2080
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x1800A5D9C (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CVisual::ProcessSetTransform(
        struct CResource **this,
        const struct CResourceTable *a2,
        const struct MILCMD_VISUAL_SETTRANSFORM *a3)
{
  struct CResource *Resource; // rsi
  __int64 v5; // rdx
  int v7; // ebx
  int v9; // eax
  unsigned int v10; // ecx

  Resource = 0LL;
  v5 = *((unsigned int *)a3 + 2);
  if ( !(_DWORD)v5 || (Resource = (struct CResource *)CResourceTable::GetResource(a2, v5, 149LL)) != 0LL )
  {
    v7 = 0;
    if ( Resource != this[30] )
    {
      v9 = CResource::RegisterNotifier((CResource *)this, Resource);
      v7 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0xB44u);
      }
      else
      {
        CResource::UnRegisterNotifierInternal((CResource *)this, this[30]);
        this[30] = Resource;
        CVisual::PropagateFlags(this, 5LL);
        CVisual::OnOuterTransformChanged((CVisual *)this);
      }
    }
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, v7, 0xA25u);
  }
  else
  {
    v7 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast((unsigned int)this, 0LL, 0, -2003303421, 0xA21u);
  }
  return (unsigned int)v7;
}
