/*
 * XREFs of ?ProcessSetIntensity@CCompositionDistantLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY@@@Z @ 0x18018F0BC
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionDistantLight::ProcessSetIntensity(
        CCompositionDistantLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONDISTANTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306BD0)(
           (char *)this + SDWORD2(xmmword_180306BD0),
           &CCompositionDistantLight::sc_Intensity,
           (char *)a3 + 8);
}
