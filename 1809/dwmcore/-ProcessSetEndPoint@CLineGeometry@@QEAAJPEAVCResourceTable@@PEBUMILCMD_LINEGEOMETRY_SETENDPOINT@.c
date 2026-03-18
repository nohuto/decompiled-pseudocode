/*
 * XREFs of ?ProcessSetEndPoint@CLineGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEGEOMETRY_SETENDPOINT@@@Z @ 0x1801A52C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLineGeometry::ProcessSetEndPoint(
        CLineGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_LINEGEOMETRY_SETENDPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803070D8)(
           (char *)this + SDWORD2(xmmword_1803070D8),
           &CLineGeometry::sc_EndPoint,
           (char *)a3 + 8);
}
