/*
 * XREFs of ?ProcessFreezeVisualSurface@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE@@@Z @ 0x18018D51C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z @ 0x18014BCF4 (-RegisterSnapshotToPerform@CComposition@@QEAAJPEAVCCachedVisualImage@@@Z.c)
 */

__int64 __fastcall CCachedVisualImage::ProcessFreezeVisualSurface(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_FREEZEVISUALSURFACE *a3)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx

  *((_BYTE *)this + 376) = 1;
  v3 = CComposition::RegisterSnapshotToPerform(*((CComposition **)this + 4), this);
  v5 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v3, 0x133u);
  return v5;
}
