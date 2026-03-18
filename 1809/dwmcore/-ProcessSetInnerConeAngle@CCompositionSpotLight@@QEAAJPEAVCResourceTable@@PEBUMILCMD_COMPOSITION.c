/*
 * XREFs of ?ProcessSetInnerConeAngle@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE@@@Z @ 0x1800783C8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetInnerConeAngle(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803066C8)(
           (char *)this + SDWORD2(xmmword_1803066C8),
           &CCompositionSpotLight::sc_InnerConeAngle,
           (char *)a3 + 8);
}
