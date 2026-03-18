/*
 * XREFs of ?ProcessSetBottomInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET@@@Z @ 0x18006F640
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetBottomInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RECTANGLEGEOMETRY_SETBOTTOMINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180305B10)(
           (char *)this + SDWORD2(xmmword_180305B10),
           &CRectangleGeometry::sc_Bottom,
           (char *)a3 + 8);
}
