/*
 * XREFs of ?ProcessSetEdgeThickness@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETEDGETHICKNESS@@@Z @ 0x1801A12B8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetEdgeThickness(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETEDGETHICKNESS *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B630)(
           (char *)this + SDWORD2(xmmword_18033B630),
           &CParticleEmitterVisual::sc_EdgeThickness,
           (char *)a3 + 8);
}
