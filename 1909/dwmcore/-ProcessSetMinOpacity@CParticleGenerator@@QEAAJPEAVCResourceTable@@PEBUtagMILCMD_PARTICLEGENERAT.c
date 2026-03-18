/*
 * XREFs of ?ProcessSetMinOpacity@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINOPACITY@@@Z @ 0x18019FDB4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinOpacity(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINOPACITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180337038)(
           (char *)this + SDWORD2(xmmword_180337038),
           &CParticleGenerator::sc_MinOpacity,
           (char *)a3 + 8);
}
