/*
 * XREFs of ?ProcessSetTrimEnd@CGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_GEOMETRY_SETTRIMEND@@@Z @ 0x180199C24
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CGeometry::ProcessSetTrimEnd(
        CGeometry *this,
        struct CResourceTable *a2,
        const struct MILCMD_GEOMETRY_SETTRIMEND *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306FC0)(
           (char *)this + SDWORD2(xmmword_180306FC0),
           &CGeometry::sc_TrimEnd,
           (char *)a3 + 8);
}
