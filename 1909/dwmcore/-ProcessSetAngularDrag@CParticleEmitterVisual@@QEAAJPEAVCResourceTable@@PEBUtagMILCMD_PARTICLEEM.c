/*
 * XREFs of ?ProcessSetAngularDrag@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETANGULARDRAG@@@Z @ 0x18019F990
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetAngularDrag(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETANGULARDRAG *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_1803386C0)(
           (char *)this + SDWORD2(xmmword_1803386C0),
           &CParticleEmitterVisual::sc_AngularDrag,
           (char *)a3 + 8);
}
