/*
 * XREFs of ?ProcessSetMinSpeed@CParticleGenerator@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEGENERATOR_SETMINSPEED@@@Z @ 0x1801A1724
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleGenerator::ProcessSetMinSpeed(
        CParticleGenerator *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEGENERATOR_SETMINSPEED *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033A0E0)(
           (char *)this + SDWORD2(xmmword_18033A0E0),
           &CParticleGenerator::sc_MinSpeed,
           (char *)a3 + 8);
}
