/*
 * XREFs of ?ProcessSetMinBurstRateInSeconds@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMINBURSTRATEINSECONDS@@@Z @ 0x1801A15F0
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetMinBurstRateInSeconds(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETMINBURSTRATEINSECONDS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B748)(
           (char *)this + SDWORD2(xmmword_18033B748),
           &CParticleEmitterVisual::sc_MinBurstRateInSeconds,
           (char *)a3 + 8);
}
