/*
 * XREFs of ?ProcessSetColor@CColorGradientStop@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORGRADIENTSTOP_SETCOLOR@@@Z @ 0x180020244
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorGradientStop::ProcessSetColor(
        CColorGradientStop *this,
        struct CResourceTable *a2,
        const struct MILCMD_COLORGRADIENTSTOP_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306AB8)(
           (char *)this + SDWORD2(xmmword_180306AB8),
           &CColorGradientStop::sc_Color,
           (char *)a3 + 8);
}
