/*
 * XREFs of ?ProcessSetViewboxLeft@CCachedVisualImage@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT@@@Z @ 0x18018D590
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedVisualImage::ProcessSetViewboxLeft(
        CCachedVisualImage *this,
        struct CResourceTable *a2,
        const struct MILCMD_CACHEDVISUALIMAGE_SETVIEWBOXLEFT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803069A0)(
           (char *)this + SDWORD2(xmmword_1803069A0) + 16,
           &CCachedVisualImage::sc_SourceRectLeft,
           (char *)a3 + 8);
}
