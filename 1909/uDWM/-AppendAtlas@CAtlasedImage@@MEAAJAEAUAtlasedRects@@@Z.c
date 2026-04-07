/*
 * XREFs of ?AppendAtlas@CAtlasedImage@@MEAAJAEAUAtlasedRects@@@Z @ 0x18001BC60
 * Callers:
 *     <none>
 * Callees:
 *     ?AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z @ 0x18001C330 (-AppendAtlasNineGrid@CAtlasedImage@@MEAAJAEAUAtlasedRects@@PEAVCBitmapSource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004F8B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CAtlasedImage::AppendAtlas(CAtlasedImage *this, struct AtlasedRects *a2)
{
  struct CBitmapSource *v2; // r8
  int appended; // eax
  unsigned int v4; // ebx
  void *v6; // [rsp+28h] [rbp-10h]

  v2 = (struct CBitmapSource *)*((_QWORD *)this + 9);
  if ( !v2 )
    return 0LL;
  appended = CAtlasedImage::AppendAtlasNineGrid(this, a2, v2);
  v4 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, appended, 0x267u, v6);
  return v4;
}
