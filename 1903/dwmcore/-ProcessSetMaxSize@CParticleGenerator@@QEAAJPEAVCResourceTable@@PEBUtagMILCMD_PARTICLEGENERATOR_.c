/*
 * XREFs of ?ProcessSetMaxSize@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMAXSIZE@@@Z @ 0x1801A1540
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMaxSize(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMAXSIZE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180339EE8)(
           (char *)this + SDWORD2(xmmword_180339EE8),
           &CParticleGenerator::sc_MaxSize,
           (char *)a3 + 8);
}
