/*
 * XREFs of ?ProcessSnapshot@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT@@@Z @ 0x1800AE660
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::ProcessSnapshot(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CACHEDVISUALIMAGE_SNAPSHOT *a3)
{
  return CCachedVisualImage::Snapshot(this, (const struct tagRECT *)((char *)a3 + 8));
}
