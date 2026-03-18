/*
 * XREFs of ?ProcessSetMaxAttenuationCutoff@CCompositionPointLight@@QEAAJPEAVCResourceTable@@PEBUMILCMD_COMPOSITIONPOINTLIGHT_SETMAXATTENUATIONCUTOFF@@@Z @ 0x180190424
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionPointLight::ProcessSetMaxAttenuationCutoff(
        CCompositionPointLight *this,
        struct CResourceTable *a2,
        const struct MILCMD_COMPOSITIONPOINTLIGHT_SETMAXATTENUATIONCUTOFF *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180306D58)(
           (char *)this + SDWORD2(xmmword_180306D58),
           &CCompositionPointLight::sc_MaxAttenuationCutoff,
           (char *)a3 + 8);
}
