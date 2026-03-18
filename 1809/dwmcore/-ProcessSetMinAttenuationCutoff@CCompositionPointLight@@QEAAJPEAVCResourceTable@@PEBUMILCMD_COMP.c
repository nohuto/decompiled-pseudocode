/*
 * XREFs of ?ProcessSetMinAttenuationCutoff@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONPOINTLIGHT_SETMINATTENUATIONCUTOFF@@@Z @ 0x180190450
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetMinAttenuationCutoff(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONPOINTLIGHT_SETMINATTENUATIONCUTOFF *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306D20)(
           (char *)this + SDWORD2(xmmword_180306D20),
           &CCompositionPointLight::sc_MinAttenuationCutoff,
           (char *)a3 + 8);
}
