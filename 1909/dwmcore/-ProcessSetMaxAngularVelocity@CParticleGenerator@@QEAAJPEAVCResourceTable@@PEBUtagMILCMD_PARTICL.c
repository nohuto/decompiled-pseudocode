/*
 * XREFs of ?ProcessSetMaxAngularVelocity@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXANGULARVELOCITY@@@Z @ 0x18019FB0C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxAngularVelocity(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXANGULARVELOCITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180336DD0)(
           (char *)this + SDWORD2(xmmword_180336DD0),
           &CParticleGenerator::sc_MaxAngularVelocity,
           (char *)a3 + 8);
}
