/*
 * XREFs of ?ProcessSetViewboxTop@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP@@@Z @ 0x18018D5F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::ProcessSetViewboxTop(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXTOP *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803069D8)(
           (char *)this + SDWORD2(xmmword_1803069D8) + 16,
           &CCachedVisualImage::sc_SourceRectTop,
           (char *)a3 + 8);
}
