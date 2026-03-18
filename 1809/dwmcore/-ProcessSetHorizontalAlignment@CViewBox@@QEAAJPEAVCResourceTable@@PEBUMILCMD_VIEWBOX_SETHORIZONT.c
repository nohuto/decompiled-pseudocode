/*
 * XREFs of ?ProcessSetHorizontalAlignment@CViewBox@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VIEWBOX_SETHORIZONTALALIGNMENT@@@Z @ 0x1801B5B70
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewBox::ProcessSetHorizontalAlignment(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct MILCMD_VIEWBOX_SETHORIZONTALALIGNMENT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180307308)(
           (char *)this + SDWORD2(xmmword_180307308),
           &CViewBox::sc_HorizontalAlignment,
           (char *)a3 + 8);
}
