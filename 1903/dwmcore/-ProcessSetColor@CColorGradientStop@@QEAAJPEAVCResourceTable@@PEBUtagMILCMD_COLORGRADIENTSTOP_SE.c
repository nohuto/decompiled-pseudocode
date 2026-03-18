/*
 * XREFs of ?ProcessSetColor@CColorGradientStop@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COLORGRADIENTSTOP_SETCOLOR@@@Z @ 0x180022134
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorGradientStop::ProcessSetColor(
        CColorGradientStop *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COLORGRADIENTSTOP_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B0B8)(
           (char *)this + SDWORD2(xmmword_18033B0B8),
           &CColorGradientStop::sc_Color,
           (char *)a3 + 8);
}
