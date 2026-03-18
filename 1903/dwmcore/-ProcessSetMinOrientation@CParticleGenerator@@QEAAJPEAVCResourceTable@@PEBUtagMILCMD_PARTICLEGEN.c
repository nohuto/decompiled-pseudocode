/*
 * XREFs of ?ProcessSetMinOrientation@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINORIENTATION@@@Z @ 0x1801A16A0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinOrientation(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINORIENTATION *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033A070)(
           (char *)this + SDWORD2(xmmword_18033A070),
           &CParticleGenerator::sc_MinOrientation,
           (char *)a3 + 8);
}
