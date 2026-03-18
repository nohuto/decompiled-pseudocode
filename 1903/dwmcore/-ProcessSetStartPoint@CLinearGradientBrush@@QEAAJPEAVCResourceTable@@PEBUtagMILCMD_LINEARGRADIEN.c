/*
 * XREFs of ?ProcessSetStartPoint@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT@@@Z @ 0x1801E2164
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientBrush::ProcessSetStartPoint(
        CLinearGradientBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B4E0)(
           (char *)this + SDWORD2(xmmword_18033B4E0),
           &CLinearGradientBrush::sc_StartPoint,
           (char *)a3 + 8);
}
