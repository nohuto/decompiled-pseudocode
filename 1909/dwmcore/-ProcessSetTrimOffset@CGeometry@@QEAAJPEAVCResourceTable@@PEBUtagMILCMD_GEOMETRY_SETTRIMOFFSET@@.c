/*
 * XREFs of ?ProcessSetTrimOffset@CGeometry@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY_SETTRIMOFFSET@@@Z @ 0x1801C3E30
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::ProcessSetTrimOffset(
        CGeometry *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_GEOMETRY_SETTRIMOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338068)(
           (char *)this + SDWORD2(xmmword_180338068),
           &CGeometry::sc_TrimOffset,
           (char *)a3 + 8);
}
