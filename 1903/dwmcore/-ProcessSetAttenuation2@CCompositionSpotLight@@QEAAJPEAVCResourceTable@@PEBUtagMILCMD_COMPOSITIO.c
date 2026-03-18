/*
 * XREFs of ?ProcessSetAttenuation2@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2@@@Z @ 0x1801D3AF8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetAttenuation2(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION2 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033AB70)(
           (char *)this + SDWORD2(xmmword_18033AB70),
           &CCompositionSpotLight::sc_Attenuation2,
           (char *)a3 + 8);
}
