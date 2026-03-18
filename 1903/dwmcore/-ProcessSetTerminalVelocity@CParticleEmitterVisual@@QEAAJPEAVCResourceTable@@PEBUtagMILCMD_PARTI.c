/*
 * XREFs of ?ProcessSetTerminalVelocity@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETTERMINALVELOCITY@@@Z @ 0x1801A182C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetTerminalVelocity(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETTERMINALVELOCITY *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B7B8)(
           (char *)this + SDWORD2(xmmword_18033B7B8),
           &CParticleEmitterVisual::sc_TerminalVelocity,
           (char *)a3 + 8);
}
