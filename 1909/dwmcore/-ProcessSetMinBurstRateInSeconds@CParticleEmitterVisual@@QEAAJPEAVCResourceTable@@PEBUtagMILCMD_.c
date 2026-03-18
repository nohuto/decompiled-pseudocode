/*
 * XREFs of ?ProcessSetMinBurstRateInSeconds@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMINBURSTRATEINSECONDS@@@Z @ 0x18019FD30
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetMinBurstRateInSeconds(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETMINBURSTRATEINSECONDS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338848)(
           (char *)this + SDWORD2(xmmword_180338848),
           &CParticleEmitterVisual::sc_MinBurstRateInSeconds,
           (char *)a3 + 8);
}
