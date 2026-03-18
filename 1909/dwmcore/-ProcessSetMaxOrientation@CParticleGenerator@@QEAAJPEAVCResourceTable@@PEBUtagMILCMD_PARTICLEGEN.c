/*
 * XREFs of ?ProcessSetMaxOrientation@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXORIENTATION@@@Z @ 0x18019FBE8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxOrientation(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXORIENTATION *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180336EB0)(
           (char *)this + SDWORD2(xmmword_180336EB0),
           &CParticleGenerator::sc_MaxOrientation,
           (char *)a3 + 8);
}
