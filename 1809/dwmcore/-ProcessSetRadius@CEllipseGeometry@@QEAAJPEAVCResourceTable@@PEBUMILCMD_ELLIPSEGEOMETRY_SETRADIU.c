/*
 * XREFs of ?ProcessSetRadius@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ELLIPSEGEOMETRY_SETRADIUS@@@Z @ 0x180195894
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEllipseGeometry::ProcessSetRadius(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_ELLIPSEGEOMETRY_SETRADIUS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306F50)(
           (char *)this + SDWORD2(xmmword_180306F50),
           &CEllipseGeometry::sc_Radius,
           (char *)a3 + 8);
}
