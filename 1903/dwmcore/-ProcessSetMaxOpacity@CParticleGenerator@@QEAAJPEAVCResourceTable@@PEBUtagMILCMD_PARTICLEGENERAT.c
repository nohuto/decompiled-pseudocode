/*
 * XREFs of ?ProcessSetMaxOpacity@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXOPACITY@@@Z @ 0x1801A147C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxOpacity(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXOPACITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339E78)(
           (char *)this + SDWORD2(xmmword_180339E78),
           &CParticleGenerator::sc_MaxOpacity,
           (char *)a3 + 8);
}
