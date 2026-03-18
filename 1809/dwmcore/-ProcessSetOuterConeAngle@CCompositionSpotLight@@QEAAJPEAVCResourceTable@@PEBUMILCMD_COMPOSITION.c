/*
 * XREFs of ?ProcessSetOuterConeAngle@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE@@@Z @ 0x18007839C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetOuterConeAngle(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306690)(
           (char *)this + SDWORD2(xmmword_180306690),
           &CCompositionSpotLight::sc_OuterConeAngle,
           (char *)a3 + 8);
}
