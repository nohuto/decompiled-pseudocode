/*
 * XREFs of ?ProcessSetMinOrientation@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINORIENTATION@@@Z @ 0x18019FDE0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinOrientation(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINORIENTATION *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180337070)(
           (char *)this + SDWORD2(xmmword_180337070),
           &CParticleGenerator::sc_MinOrientation,
           (char *)a3 + 8);
}
