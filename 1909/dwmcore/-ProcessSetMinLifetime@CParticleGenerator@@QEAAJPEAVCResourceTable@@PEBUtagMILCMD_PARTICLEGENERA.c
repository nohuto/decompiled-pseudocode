/*
 * XREFs of ?ProcessSetMinLifetime@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINLIFETIME@@@Z @ 0x18019FD88
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinLifetime(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINLIFETIME *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180337000)(
           (char *)this + SDWORD2(xmmword_180337000),
           &CParticleGenerator::sc_MinLifetime,
           (char *)a3 + 8);
}
