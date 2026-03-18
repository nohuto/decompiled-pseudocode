/*
 * XREFs of ?ProcessSetOffset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_RECTANGLEGEOMETRY_SETOFFSET@@@Z @ 0x1801F6220
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetOffset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RECTANGLEGEOMETRY_SETOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339A88)(
           (char *)this + SDWORD2(xmmword_180339A88),
           &CRectangleGeometry::sc_Offset,
           (char *)a3 + 8);
}
