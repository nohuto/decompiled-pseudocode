/*
 * XREFs of ?ProcessSetColor@CCompositionAmbientLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR@@@Z @ 0x18007AB54
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionAmbientLight::ProcessSetColor(
        CCompositionAmbientLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONAMBIENTLIGHT_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306AF0)(
           (char *)this + SDWORD2(xmmword_180306AF0),
           &CCompositionAmbientLight::sc_Color,
           (char *)a3 + 8);
}
