/*
 * XREFs of ?ProcessSetAttenuation0@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0@@@Z @ 0x1801D3ACC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetAttenuation0(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033ABE0)(
           (char *)this + SDWORD2(xmmword_18033ABE0),
           &CCompositionSpotLight::sc_Attenuation0,
           (char *)a3 + 8);
}
