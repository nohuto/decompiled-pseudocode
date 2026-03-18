/*
 * XREFs of ?ProcessSetStrokeDashOffset@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET@@@Z @ 0x1801B3D84
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeDashOffset(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVECTORSHAPE_SETSTROKEDASHOFFSET *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180307110)(
           (char *)this + SDWORD2(xmmword_180307110),
           &CSpriteVectorShape::sc_StrokeDashOffset,
           (char *)a3 + 8);
}
