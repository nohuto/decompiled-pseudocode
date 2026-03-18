/*
 * XREFs of ?ProcessSetLeftInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET@@@Z @ 0x1800CCDA8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetLeftInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETLEFTINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180336AC0)(
           (char *)this + SDWORD2(xmmword_180336AC0),
           &CRectangleGeometry::sc_Left,
           (char *)a3 + 8);
}
