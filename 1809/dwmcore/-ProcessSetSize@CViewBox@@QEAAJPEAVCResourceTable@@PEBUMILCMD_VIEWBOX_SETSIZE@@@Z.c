/*
 * XREFs of ?ProcessSetSize@CViewBox@@QEAAJPEAVCResourceTable@@PEBUMILCMD_VIEWBOX_SETSIZE@@@Z @ 0x1801B5BC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewBox::ProcessSetSize(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct MILCMD_VIEWBOX_SETSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803072D0)(
           (char *)this + SDWORD2(xmmword_1803072D0),
           &CViewBox::sc_Size,
           (char *)a3 + 8);
}
