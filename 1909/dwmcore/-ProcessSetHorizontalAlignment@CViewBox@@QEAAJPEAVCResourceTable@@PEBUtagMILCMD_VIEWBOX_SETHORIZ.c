/*
 * XREFs of ?ProcessSetHorizontalAlignment@CViewBox@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VIEWBOX_SETHORIZONTALALIGNMENT@@@Z @ 0x1801FBC60
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CViewBox::ProcessSetHorizontalAlignment(
        CViewBox *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_VIEWBOX_SETHORIZONTALALIGNMENT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338C00)(
           (char *)this + SDWORD2(xmmword_180338C00),
           &CViewBox::sc_HorizontalAlignment,
           (char *)a3 + 8);
}
