/*
 * XREFs of ?ProcessSetViewboxRight@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXRIGHT@@@Z @ 0x18018D5C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::ProcessSetViewboxRight(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXRIGHT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306A10)(
           (char *)this + SDWORD2(xmmword_180306A10) + 16,
           &CCachedVisualImage::sc_SourceRectRight,
           (char *)a3 + 8);
}
