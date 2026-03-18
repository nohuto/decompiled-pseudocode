/*
 * XREFs of ?ProcessSetAttenuation1@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1@@@Z @ 0x1801902C4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetAttenuation1(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONPOINTLIGHT_SETATTENUATION1 *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306CB0)(
           (char *)this + SDWORD2(xmmword_180306CB0),
           &CCompositionPointLight::sc_Attenuation1,
           (char *)a3 + 8);
}
