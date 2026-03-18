/*
 * XREFs of ?ProcessSetColor@CColorBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COLORBRUSH_SETCOLOR@@@Z @ 0x180072194
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorBrush::ProcessSetColor(
        CColorBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_COLORBRUSH_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306578)(
           (char *)this + SDWORD2(xmmword_180306578),
           &CColorBrush::sc_Color,
           (char *)a3 + 8);
}
