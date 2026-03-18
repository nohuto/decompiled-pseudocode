/*
 * XREFs of ?ProcessSetMaxDirection@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXDIRECTION@@@Z @ 0x18019FB64
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxDirection(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXDIRECTION *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180336E08)(
           (char *)this + SDWORD2(xmmword_180336E08),
           &CParticleGenerator::sc_MaxDirection,
           (char *)a3 + 8);
}
