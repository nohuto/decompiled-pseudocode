/*
 * XREFs of ?ProcessSetEdgeThickness@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETEDGETHICKNESS@@@Z @ 0x18019F9F8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetEdgeThickness(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETEDGETHICKNESS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_180338730)(
           (char *)this + SDWORD2(xmmword_180338730),
           &CParticleEmitterVisual::sc_EdgeThickness,
           (char *)a3 + 8);
}
