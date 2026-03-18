/*
 * XREFs of ?ProcessSetMaxSize@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXSIZE@@@Z @ 0x18019FC80
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxSize(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180336EE8)(
           (char *)this + SDWORD2(xmmword_180336EE8),
           &CParticleGenerator::sc_MaxSize,
           (char *)a3 + 8);
}
