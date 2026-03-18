/*
 * XREFs of ?ProcessSetCenterPoint@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT@@@Z @ 0x180195868
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEllipseGeometry::ProcessSetCenterPoint(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_ELLIPSEGEOMETRY_SETCENTERPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306F18)(
           (char *)this + SDWORD2(xmmword_180306F18),
           &CEllipseGeometry::sc_CenterPoint,
           (char *)a3 + 8);
}
