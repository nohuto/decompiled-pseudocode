/*
 * XREFs of ?ProcessSetMinParticlesPerBurst@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMINPARTICLESPERBURST@@@Z @ 0x18019FE0C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetMinParticlesPerBurst(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETMINPARTICLESPERBURST *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338880)(
           (char *)this + SDWORD2(xmmword_180338880),
           &CParticleEmitterVisual::sc_MinParticlesPerBurst,
           (char *)a3 + 8);
}
