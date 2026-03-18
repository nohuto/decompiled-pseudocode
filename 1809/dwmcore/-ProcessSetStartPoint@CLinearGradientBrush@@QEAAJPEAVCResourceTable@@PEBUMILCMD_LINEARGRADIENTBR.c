/*
 * XREFs of ?ProcessSetStartPoint@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT@@@Z @ 0x18002093C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientBrush::ProcessSetStartPoint(
        CLinearGradientBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_LINEARGRADIENTBRUSH_SETSTARTPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180307030)(
           (char *)this + SDWORD2(xmmword_180307030),
           &CLinearGradientBrush::sc_StartPoint,
           (char *)a3 + 8);
}
