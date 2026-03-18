/*
 * XREFs of ?ProcessSetMaxOrientation@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXORIENTATION@@@Z @ 0x1801A14A8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxOrientation(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXORIENTATION *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339EB0)(
           (char *)this + SDWORD2(xmmword_180339EB0),
           &CParticleGenerator::sc_MaxOrientation,
           (char *)a3 + 8);
}
