/*
 * XREFs of ?ProcessSetStrokeThickness@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORSHAPE_SETSTROKETHICKNESS@@@Z @ 0x1801B3E68
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeThickness(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVECTORSHAPE_SETSTROKETHICKNESS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180307180)(
           (char *)this + SDWORD2(xmmword_180307180),
           &CSpriteVectorShape::sc_StrokeThickness,
           (char *)a3 + 8);
}
