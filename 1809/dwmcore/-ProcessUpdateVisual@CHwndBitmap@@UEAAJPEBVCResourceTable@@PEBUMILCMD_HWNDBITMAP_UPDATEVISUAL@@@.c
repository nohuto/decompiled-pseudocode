/*
 * XREFs of ?ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUMILCMD_HWNDBITMAP_UPDATEVISUAL@@@Z @ 0x1800912F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x18009135C (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x1800D0ED0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::ProcessUpdateVisual(
        CHwndBitmap *this,
        const struct CResourceTable *a2,
        const struct MILCMD_HWNDBITMAP_UPDATEVISUAL *a3)
{
  struct CVisual *Resource; // rax
  int v5; // eax
  unsigned int v6; // ecx
  unsigned int v7; // ebx

  Resource = (struct CVisual *)CResourceTable::GetResource(a2, *((unsigned int *)a3 + 2), 157LL);
  *((_BYTE *)this + 120) = 0;
  v5 = CHwndBitmap::SetVisual(this, Resource);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1A7u);
  return v7;
}
