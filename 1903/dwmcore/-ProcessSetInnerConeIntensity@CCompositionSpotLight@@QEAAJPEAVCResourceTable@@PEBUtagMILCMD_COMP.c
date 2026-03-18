/*
 * XREFs of ?ProcessSetInnerConeIntensity@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY@@@Z @ 0x1801D3B80
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetInnerConeIntensity(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETINNERCONEINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033A9E8)(
           (char *)this + SDWORD2(xmmword_18033A9E8),
           &CCompositionSpotLight::sc_InnerConeIntensity,
           (char *)a3 + 8);
}
