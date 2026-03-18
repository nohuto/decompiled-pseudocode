/*
 * XREFs of ?ProcessSetOffset@CColorGradientStop@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORGRADIENTSTOP_SETOFFSET@@@Z @ 0x180020270
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorGradientStop::ProcessSetOffset(
        CColorGradientStop *this,
        struct CResourceTable *a2,
        const struct MILCMD_COLORGRADIENTSTOP_SETOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306A80)(
           (char *)this + SDWORD2(xmmword_180306A80),
           &CColorGradientStop::sc_Offset,
           (char *)a3 + 8);
}
