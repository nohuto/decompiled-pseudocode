/*
 * XREFs of ?ProcessSetTorque@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETTORQUE@@@Z @ 0x18019FF98
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetTorque(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETTORQUE *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803388F0)(
           (char *)this + SDWORD2(xmmword_1803388F0),
           &CParticleEmitterVisual::sc_Torque,
           (char *)a3 + 8);
}
