/*
 * XREFs of ?ProcessSetViewboxBottom@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM@@@Z @ 0x18018D560
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::ProcessSetViewboxBottom(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXBOTTOM *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306A48)(
           (char *)this + SDWORD2(xmmword_180306A48) + 16,
           &CCachedVisualImage::sc_SourceRectBottom,
           (char *)a3 + 8);
}
