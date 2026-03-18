/*
 * XREFs of ?ProcessSetEndPoint@CLinearGradientBrush@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEARGRADIENTBRUSH_SETENDPOINT@@@Z @ 0x1800206C0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLinearGradientBrush::ProcessSetEndPoint(
        CLinearGradientBrush *this,
        struct CResourceTable *a2,
        const struct MILCMD_LINEARGRADIENTBRUSH_SETENDPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180307068)(
           (char *)this + SDWORD2(xmmword_180307068),
           &CLinearGradientBrush::sc_EndPoint,
           (char *)a3 + 8);
}
