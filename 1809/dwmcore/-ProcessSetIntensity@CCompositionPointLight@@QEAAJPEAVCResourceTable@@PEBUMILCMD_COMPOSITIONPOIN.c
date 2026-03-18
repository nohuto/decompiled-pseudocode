/*
 * XREFs of ?ProcessSetIntensity@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONPOINTLIGHT_SETINTENSITY@@@Z @ 0x1801903F8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetIntensity(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONPOINTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306D90)(
           (char *)this + SDWORD2(xmmword_180306D90),
           &CCompositionPointLight::sc_Intensity,
           (char *)a3 + 8);
}
