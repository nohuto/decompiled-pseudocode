/*
 * XREFs of ?ProcessSetEmitterTime@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETEMITTERTIME@@@Z @ 0x18019FA50
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetEmitterTime(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETEMITTERTIME *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338768)(
           (char *)this + SDWORD2(xmmword_180338768),
           &CParticleEmitterVisual::sc_EmitterTime,
           (char *)a3 + 8);
}
