/*
 * XREFs of ?ProcessSetMaxTint@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXTINT@@@Z @ 0x1801A1598
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxTint(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXTINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339F58)(
           (char *)this + SDWORD2(xmmword_180339F58),
           &CParticleGenerator::sc_MaxTint,
           (char *)a3 + 8);
}
