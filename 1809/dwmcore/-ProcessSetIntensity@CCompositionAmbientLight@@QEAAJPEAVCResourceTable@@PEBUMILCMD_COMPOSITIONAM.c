/*
 * XREFs of ?ProcessSetIntensity@CCompositionAmbientLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY@@@Z @ 0x18018E380
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionAmbientLight::ProcessSetIntensity(
        CCompositionAmbientLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306B28)(
           (char *)this + SDWORD2(xmmword_180306B28),
           &CCompositionAmbientLight::sc_Intensity,
           (char *)a3 + 8);
}
