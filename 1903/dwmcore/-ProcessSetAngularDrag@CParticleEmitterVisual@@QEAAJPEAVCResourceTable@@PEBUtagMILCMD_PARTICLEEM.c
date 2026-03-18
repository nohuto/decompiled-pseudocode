/*
 * XREFs of ?ProcessSetAngularDrag@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETANGULARDRAG@@@Z @ 0x1801A1250
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetAngularDrag(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETANGULARDRAG *a3)
{
  return ((__int64 (__fastcall *)(char *, void *, char *))xmmword_18033B5C0)(
           (char *)this + SDWORD2(xmmword_18033B5C0),
           &CParticleEmitterVisual::sc_AngularDrag,
           (char *)a3 + 8);
}
