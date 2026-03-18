/*
 * XREFs of ?ProcessSetColor@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR@@@Z @ 0x18018F090
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionDistantLight::ProcessSetColor(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONDISTANTLIGHT_SETCOLOR *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306B60)(
           (char *)this + SDWORD2(xmmword_180306B60),
           &CCompositionDistantLight::sc_Color,
           (char *)a3 + 8);
}
