/*
 * XREFs of ?ProcessSetMaxParticlesPerBurst@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMAXPARTICLESPERBURST@@@Z @ 0x1801A1514
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetMaxParticlesPerBurst(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETMAXPARTICLESPERBURST *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B710)(
           (char *)this + SDWORD2(xmmword_18033B710),
           &CParticleEmitterVisual::sc_MaxParticlesPerBurst,
           (char *)a3 + 8);
}
