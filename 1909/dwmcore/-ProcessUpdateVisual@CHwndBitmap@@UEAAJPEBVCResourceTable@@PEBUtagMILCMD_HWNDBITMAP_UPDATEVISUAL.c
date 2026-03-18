/*
 * XREFs of ?ProcessUpdateVisual@CHwndBitmap@@UEAAJPEBVCResourceTable@@PEBUtagMILCMD_HWNDBITMAP_UPDATEVISUAL@@@Z @ 0x1800AE280
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z @ 0x18009BDF0 (-GetResource@CResourceTable@@QEBAPEAVCResource@@IW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z @ 0x1800AE1DC (-SetVisual@CHwndBitmap@@QEAAJPEAVCVisual@@@Z.c)
 */

__int64 __fastcall CHwndBitmap::ProcessUpdateVisual(
        CHwndBitmap *this,
        const struct CResourceTable *a2,
        const struct tagMILCMD_HWNDBITMAP_UPDATEVISUAL *a3)
{
  struct CVisual *Resource; // rax
  signed int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx

  Resource = (struct CVisual *)CResourceTable::GetResource((__int64)a2, *((_DWORD *)a3 + 2), 0xBDu);
  *((_BYTE *)this + 120) = 0;
  v5 = CHwndBitmap::SetVisual(this, Resource);
  v7 = v5;
  if ( v5 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x1A6u, 0LL);
  return v7;
}
