/*
 * XREFs of ?ProcessSetMaxBurstRateInSeconds@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMAXBURSTRATEINSECONDS@@@Z @ 0x1801A13F8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetMaxBurstRateInSeconds(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETMAXBURSTRATEINSECONDS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B6D8)(
           (char *)this + SDWORD2(xmmword_18033B6D8),
           &CParticleEmitterVisual::sc_MaxBurstRateInSeconds,
           (char *)a3 + 8);
}
