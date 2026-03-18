/*
 * XREFs of ?ProcessSetStrokeMiterLimit@CSpriteVectorShape@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT@@@Z @ 0x1801B3DB0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSpriteVectorShape::ProcessSetStrokeMiterLimit(
        CSpriteVectorShape *this,
        struct CResourceTable *a2,
        const struct MILCMD_SPRITEVECTORSHAPE_SETSTROKEMITERLIMIT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180307148)(
           (char *)this + SDWORD2(xmmword_180307148),
           &CSpriteVectorShape::sc_StrokeMiterLimit,
           (char *)a3 + 8);
}
