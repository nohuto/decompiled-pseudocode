/*
 * XREFs of ?ProcessSetRightInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET@@@Z @ 0x1800CCD50
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRightInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180336B68)(
           (char *)this + SDWORD2(xmmword_180336B68),
           &CRectangleGeometry::sc_Right,
           (char *)a3 + 8);
}
