/*
 * XREFs of ?ProcessSetMaxLifetime@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXLIFETIME@@@Z @ 0x1801A1450
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxLifetime(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXLIFETIME *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339E40)(
           (char *)this + SDWORD2(xmmword_180339E40),
           &CParticleGenerator::sc_MaxLifetime,
           (char *)a3 + 8);
}
