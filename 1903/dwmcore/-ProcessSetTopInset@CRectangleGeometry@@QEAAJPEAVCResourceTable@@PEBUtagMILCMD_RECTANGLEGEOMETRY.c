/*
 * XREFs of ?ProcessSetTopInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETTOPINSET@@@Z @ 0x1800CCE98
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetTopInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETTOPINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339AF8)(
           (char *)this + SDWORD2(xmmword_180339AF8),
           &CRectangleGeometry::sc_Top,
           (char *)a3 + 8);
}
