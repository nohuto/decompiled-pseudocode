/*
 * XREFs of ?ProcessSetMinSpeed@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINSPEED@@@Z @ 0x18019FE64
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinSpeed(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINSPEED *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803370E0)(
           (char *)this + SDWORD2(xmmword_1803370E0),
           &CParticleGenerator::sc_MinSpeed,
           (char *)a3 + 8);
}
