/*
 * XREFs of ?ProcessSetIntensity@CCompositionAmbientLight@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY@@@Z @ 0x1801CE428
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionAmbientLight::ProcessSetIntensity(
        CCompositionAmbientLight *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_COMPOSITIONAMBIENTLIGHT_SETINTENSITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338228)(
           (char *)this + SDWORD2(xmmword_180338228),
           &CCompositionAmbientLight::sc_Intensity,
           (char *)a3 + 8);
}
