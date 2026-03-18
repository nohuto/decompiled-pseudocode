/*
 * XREFs of ?ProcessSetForce@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETFORCE@@@Z @ 0x1801A1368
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetForce(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETFORCE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B6A0)(
           (char *)this + SDWORD2(xmmword_18033B6A0),
           &CParticleEmitterVisual::sc_Force,
           (char *)a3 + 8);
}
