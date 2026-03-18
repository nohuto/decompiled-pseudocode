/*
 * XREFs of ?ProcessSetStartPoint@CLineGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_LINEGEOMETRY_SETSTARTPOINT@@@Z @ 0x1801A52F0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CLineGeometry::ProcessSetStartPoint(
        CLineGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_LINEGEOMETRY_SETSTARTPOINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803070A0)(
           (char *)this + SDWORD2(xmmword_1803070A0),
           &CLineGeometry::sc_StartPoint,
           (char *)a3 + 8);
}
