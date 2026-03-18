/*
 * XREFs of ?ProcessSetInnerConeAngle@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE@@@Z @ 0x1800D92E8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetInnerConeAngle(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180337BC8)(
           (char *)this + SDWORD2(xmmword_180337BC8),
           &CCompositionSpotLight::sc_InnerConeAngle,
           (char *)a3 + 8);
}
