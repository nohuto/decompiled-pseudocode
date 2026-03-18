/*
 * XREFs of ?ProcessSetMinSize@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINSIZE@@@Z @ 0x18019FE38
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinSize(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803370A8)(
           (char *)this + SDWORD2(xmmword_1803370A8),
           &CParticleGenerator::sc_MinSize,
           (char *)a3 + 8);
}
