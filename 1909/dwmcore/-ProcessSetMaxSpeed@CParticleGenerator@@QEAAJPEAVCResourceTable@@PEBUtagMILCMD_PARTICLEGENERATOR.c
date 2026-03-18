/*
 * XREFs of ?ProcessSetMaxSpeed@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXSPEED@@@Z @ 0x18019FCAC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxSpeed(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXSPEED *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180336F20)(
           (char *)this + SDWORD2(xmmword_180336F20),
           &CParticleGenerator::sc_MaxSpeed,
           (char *)a3 + 8);
}
