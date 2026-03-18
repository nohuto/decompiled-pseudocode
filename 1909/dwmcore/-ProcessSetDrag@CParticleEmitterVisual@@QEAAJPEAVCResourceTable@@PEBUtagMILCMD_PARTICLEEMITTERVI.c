/*
 * XREFs of ?ProcessSetDrag@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETDRAG@@@Z @ 0x18019F9CC
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetDrag(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETDRAG *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803386F8)(
           (char *)this + SDWORD2(xmmword_1803386F8),
           &CParticleEmitterVisual::sc_Drag,
           (char *)a3 + 8);
}
