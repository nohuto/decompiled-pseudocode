/*
 * XREFs of ?ProcessSetMaxSpeed@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXSPEED@@@Z @ 0x1801A156C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxSpeed(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXSPEED *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339F20)(
           (char *)this + SDWORD2(xmmword_180339F20),
           &CParticleGenerator::sc_MaxSpeed,
           (char *)a3 + 8);
}
