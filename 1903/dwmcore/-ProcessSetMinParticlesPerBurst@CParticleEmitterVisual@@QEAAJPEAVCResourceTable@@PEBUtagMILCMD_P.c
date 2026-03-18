/*
 * XREFs of ?ProcessSetMinParticlesPerBurst@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMINPARTICLESPERBURST@@@Z @ 0x1801A16CC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetMinParticlesPerBurst(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETMINPARTICLESPERBURST *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B780)(
           (char *)this + SDWORD2(xmmword_18033B780),
           &CParticleEmitterVisual::sc_MinParticlesPerBurst,
           (char *)a3 + 8);
}
