/*
 * XREFs of ?ProcessSetInnerConeIntensity@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY@@@Z @ 0x180191BA8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetInnerConeIntensity(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803065E8)(
           (char *)this + SDWORD2(xmmword_1803065E8),
           &CCompositionSpotLight::sc_InnerConeIntensity,
           (char *)a3 + 8);
}
