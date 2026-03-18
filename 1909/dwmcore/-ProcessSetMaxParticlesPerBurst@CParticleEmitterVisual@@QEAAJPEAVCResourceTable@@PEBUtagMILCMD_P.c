/*
 * XREFs of ?ProcessSetMaxParticlesPerBurst@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMAXPARTICLESPERBURST@@@Z @ 0x18019FC54
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetMaxParticlesPerBurst(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETMAXPARTICLESPERBURST *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338810)(
           (char *)this + SDWORD2(xmmword_180338810),
           &CParticleEmitterVisual::sc_MaxParticlesPerBurst,
           (char *)a3 + 8);
}
