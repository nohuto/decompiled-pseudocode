/*
 * XREFs of ?ProcessSetMinAngularVelocity@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINANGULARVELOCITY@@@Z @ 0x1801A15C4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinAngularVelocity(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINANGULARVELOCITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339F90)(
           (char *)this + SDWORD2(xmmword_180339F90),
           &CParticleGenerator::sc_MinAngularVelocity,
           (char *)a3 + 8);
}
