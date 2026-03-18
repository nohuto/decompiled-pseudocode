/*
 * XREFs of ?ProcessSetMaxBurstRateInSeconds@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMAXBURSTRATEINSECONDS@@@Z @ 0x18019FB38
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetMaxBurstRateInSeconds(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETMAXBURSTRATEINSECONDS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803387D8)(
           (char *)this + SDWORD2(xmmword_1803387D8),
           &CParticleEmitterVisual::sc_MaxBurstRateInSeconds,
           (char *)a3 + 8);
}
