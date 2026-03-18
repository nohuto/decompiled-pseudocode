/*
 * XREFs of ?ProcessSetRadius@CEllipseGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ELLIPSEGEOMETRY_SETRADIUS@@@Z @ 0x1801D3E08
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEllipseGeometry::ProcessSetRadius(
        CEllipseGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ELLIPSEGEOMETRY_SETRADIUS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803385A8)(
           (char *)this + SDWORD2(xmmword_1803385A8),
           &CEllipseGeometry::sc_Radius,
           (char *)a3 + 8);
}
