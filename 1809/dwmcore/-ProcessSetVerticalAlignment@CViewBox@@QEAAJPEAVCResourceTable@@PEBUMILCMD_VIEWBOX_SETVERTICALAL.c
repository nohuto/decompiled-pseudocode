/*
 * XREFs of ?ProcessSetVerticalAlignment@CViewBox@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VIEWBOX_SETVERTICALALIGNMENT@@@Z @ 0x1801B5C24
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewBox::ProcessSetVerticalAlignment(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct MILCMD_VIEWBOX_SETVERTICALALIGNMENT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180307340)(
           (char *)this + SDWORD2(xmmword_180307340),
           &CViewBox::sc_VerticalAlignment,
           (char *)a3 + 8);
}
