/*
 * XREFs of ?ProcessSetRightInset@CRectangleGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET@@@Z @ 0x18006F5E8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CRectangleGeometry::ProcessSetRightInset(
        CRectangleGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_RECTANGLEGEOMETRY_SETRIGHTINSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180305AD8)(
           (char *)this + SDWORD2(xmmword_180305AD8),
           &CRectangleGeometry::sc_Right,
           (char *)a3 + 8);
}
