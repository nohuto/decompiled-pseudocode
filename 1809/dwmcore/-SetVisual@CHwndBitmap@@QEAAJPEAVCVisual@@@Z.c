/*
 * XREFs of ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18009135C
 * Callers:
 *     ?RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180068320 (-RemoveWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@Z @ 0x1800912F0 (-ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@.c)
 *     ?AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z @ 0x180095C10 (-AddWindowNode@CWindowManager@@QEAAJPEAVCWindowNode@@@Z.c)
 *     ?AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180152390 (-AddHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x180152568 (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18005B3DC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z @ 0x180091338 (--$ReleaseInterface@VCCachedVisualImage@@@@YAXAEAPEAVCCachedVisualImage@@@Z.c)
 *     ??$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z @ 0x1800921C4 (--$ReleaseInterface@VCVisualTree@@@@YAXAEAPEAVCVisualTree@@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x1800A5544 (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CHwndBitmap::SetVisual(CHwndBitmap *this, struct CVisual *a2)
{
  unsigned int v3; // ebx
  struct CResource *v4; // rdx
  int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rcx

  v3 = 0;
  v4 = (struct CResource *)*((_QWORD *)this + 13);
  if ( v4 == a2 )
  {
    v12 = *((_QWORD *)this + 16);
    if ( v12 )
      *(_BYTE *)(v12 + 377) = *((_BYTE *)this + 120);
  }
  else
  {
    CResource::UnRegisterNotifierInternal((CHwndBitmap *)((char *)this + 16), v4);
    *((_QWORD *)this + 13) = a2;
    v6 = CResource::RegisterNotifier((CHwndBitmap *)((char *)this + 16), a2);
    v3 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xD7u);
    }
    else
    {
      ReleaseInterface<CCachedVisualImage>((__int64 *)this + 16);
      ReleaseInterface<CVisualTree>((char *)this + 112, v8, v9, v10);
    }
  }
  return v3;
}
