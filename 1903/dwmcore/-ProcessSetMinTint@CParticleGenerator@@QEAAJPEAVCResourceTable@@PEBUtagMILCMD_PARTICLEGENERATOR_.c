/*
 * XREFs of ?ProcessSetMinTint@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINTINT@@@Z @ 0x1801A1750
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinTint(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINTINT *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033A118)(
           (char *)this + SDWORD2(xmmword_18033A118),
           &CParticleGenerator::sc_MinTint,
           (char *)a3 + 8);
}
