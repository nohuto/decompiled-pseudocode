/*
 * XREFs of ?ProcessSetMinDirection@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINDIRECTION@@@Z @ 0x18019FD5C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinDirection(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINDIRECTION *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180336FC8)(
           (char *)this + SDWORD2(xmmword_180336FC8),
           &CParticleGenerator::sc_MinDirection,
           (char *)a3 + 8);
}
