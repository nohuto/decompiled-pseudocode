/*
 * XREFs of ?ProcessSetEmitFrom@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETEMITFROM@@@Z @ 0x18019FA24
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?reset@?$unique_ptr@VCSpawner@EmitterShapes@@U?$default_delete@VCSpawner@EmitterShapes@@@std@@@std@@QEAAXPEAVCSpawner@EmitterShapes@@@Z @ 0x1801A1D5C (-reset@-$unique_ptr@VCSpawner@EmitterShapes@@U-$default_delete@VCSpawner@EmitterShapes@@@std@@@s.c)
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetEmitFrom(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETEMITFROM *a3)
{
  *((_DWORD *)this + 1545) = *((_DWORD *)a3 + 2);
  std::unique_ptr<EmitterShapes::CSpawner>::reset((char *)this + 6096, 0LL);
  return 0LL;
}
