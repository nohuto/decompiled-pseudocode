/*
 * XREFs of ?SetEffect@CVisual@@IEAAJPEAVCEffect@@@Z @ 0x180029D78
 * Callers:
 *     ?ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z @ 0x1800298F0 (-ProcessSetEffect@CVisual@@QEAAJPEBVCResourceTable@@PEBUMILCMD_VISUAL_SETEFFECT@@@Z.c)
 *     ?ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE_COPYCOMPOSITOROWNEDRESOURCES@@@Z @ 0x18006ED1C (-ProcessCopyCompositorOwnedResources@CWindowNode@@QEAAJPEAVCResourceTable@@PEBUMILCMD_WINDOWNODE.c)
 * Callees:
 *     ?SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z @ 0x180029940 (-SetEffectInternal@CVisual@@QEAAXPEAVCEffect@@@Z.c)
 *     ?GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ @ 0x18002ADF4 (-GetTransform3DEffectNoRef@CVisual@@QEBAPEAVCTransform3D@@XZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18002E49C (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnInnerTransformChanged@CVisual@@AEAAXXZ @ 0x18006B124 (-OnInnerTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CVisual::SetEffect(CVisual *this, struct CEffect *a2)
{
  unsigned int v3; // esi
  struct CResource *EffectInternal; // rbp
  bool v6; // r14
  int v7; // eax
  unsigned int v8; // ecx
  char v9; // bl

  v3 = 0;
  EffectInternal = CVisual::GetEffectInternal(this);
  if ( a2 != EffectInternal )
  {
    v6 = CVisual::GetTransform3DEffectNoRef(this) != 0LL;
    v7 = CResource::RegisterNotifier(this, a2);
    v3 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xAE5u);
    }
    else
    {
      CResource::UnRegisterNotifierInternal(this, EffectInternal);
      CVisual::SetEffectInternal(this, a2);
      v9 = v6;
      if ( CVisual::GetTransform3DEffectNoRef(this) )
        v9 = 1;
      CVisual::PropagateFlags(this, 5LL);
      if ( v9 )
        CVisual::OnInnerTransformChanged(this);
    }
  }
  return v3;
}
