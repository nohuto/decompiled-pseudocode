/*
 * XREFs of ?ProcessSetShadow@CSpriteVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVISUAL_SETSHADOW@@@Z @ 0x180056380
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z @ 0x180056444 (-SetDropShadow@CSpriteVisual@@AEAAXPEAVCDropShadow@@@Z.c)
 *     ?GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ @ 0x180056554 (-GetDropShadow@CSpriteVisual@@AEBAPEAVCDropShadow@@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z @ 0x180075F08 (-RemoveVisualFromCache@CDropShadow@@QEAAXPEAVCVisual@@@Z.c)
 *     ?ClearContentTreeDataCaches@CVisual@@IEAAXXZ @ 0x1800A5428 (-ClearContentTreeDataCaches@CVisual@@IEAAXXZ.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z @ 0x1800A9420 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@W4VisualInvalidationOption@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CSpriteVisual::ProcessSetShadow(
        CSpriteVisual *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVISUAL_SETSHADOW *a3)
{
  unsigned int v5; // esi
  struct CDropShadow *Resource; // rax
  unsigned int v7; // ecx
  struct CResource *v8; // rbp
  int v9; // eax
  unsigned int v10; // ecx
  CDropShadow *DropShadow; // rax
  struct CResource *v13; // rax

  v5 = 0;
  Resource = (struct CDropShadow *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 48LL);
  v8 = Resource;
  if ( *((_DWORD *)a3 + 2) && !Resource )
  {
    v5 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, -2003303421, 0x42u);
  }
  else if ( Resource != CSpriteVisual::GetDropShadow(this) )
  {
    CVisual::ClearContentTreeDataCaches(this);
    if ( (**((_DWORD **)this + 28) & 0x8000) != 0 )
    {
      DropShadow = CSpriteVisual::GetDropShadow(this);
      CDropShadow::RemoveVisualFromCache(DropShadow, this);
    }
    v9 = CResource::RegisterNotifier(this, v8);
    v5 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x52u);
    }
    else
    {
      if ( (**((_DWORD **)this + 28) & 0x8000) != 0 )
      {
        v13 = CSpriteVisual::GetDropShadow(this);
        CResource::UnRegisterNotifierInternal(this, v13);
      }
      CSpriteVisual::SetDropShadow(this, v8);
      CVisual::PropagateFlags(this, 5LL);
    }
  }
  return v5;
}
