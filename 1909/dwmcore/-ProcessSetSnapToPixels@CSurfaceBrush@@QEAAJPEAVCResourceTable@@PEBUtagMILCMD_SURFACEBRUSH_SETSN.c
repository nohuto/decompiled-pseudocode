/*
 * XREFs of ?ProcessSetSnapToPixels@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS@@@Z @ 0x1801FAF70
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::ProcessSetSnapToPixels(
        CSurfaceBrush *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_SURFACEBRUSH_SETSNAPTOPIXELS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338AE8)(
           (char *)this + SDWORD2(xmmword_180338AE8),
           &CSurfaceBrush::sc_SnapToPixels,
           (char *)a3 + 8);
}
