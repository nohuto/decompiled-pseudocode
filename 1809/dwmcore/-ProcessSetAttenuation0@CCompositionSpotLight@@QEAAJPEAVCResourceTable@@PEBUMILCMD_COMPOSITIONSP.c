/*
 * XREFs of ?ProcessSetAttenuation0@CCompositionSpotLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0@@@Z @ 0x180191AC8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSpotLight::ProcessSetAttenuation0(
        CCompositionSpotLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONSPOTLIGHT_SETATTENUATION0 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803067E0)(
           (char *)this + SDWORD2(xmmword_1803067E0),
           &CCompositionSpotLight::sc_Attenuation0,
           (char *)a3 + 8);
}
