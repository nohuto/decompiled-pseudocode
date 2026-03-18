/*
 * XREFs of ?ProcessSetOffset@CViewBox@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VIEWBOX_SETOFFSET@@@Z @ 0x1801B5B9C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewBox::ProcessSetOffset(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct MILCMD_VIEWBOX_SETOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180307298)(
           (char *)this + SDWORD2(xmmword_180307298),
           &CViewBox::sc_Offset,
           (char *)a3 + 8);
}
