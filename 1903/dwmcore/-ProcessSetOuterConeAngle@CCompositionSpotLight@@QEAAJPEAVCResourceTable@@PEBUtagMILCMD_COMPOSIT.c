/*
 * XREFs of ?ProcessSetOuterConeAngle@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE@@@Z @ 0x1800D8B9C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetOuterConeAngle(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETOUTERCONEANGLE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033AA90)(
           (char *)this + SDWORD2(xmmword_18033AA90),
           &CCompositionSpotLight::sc_OuterConeAngle,
           (char *)a3 + 8);
}
