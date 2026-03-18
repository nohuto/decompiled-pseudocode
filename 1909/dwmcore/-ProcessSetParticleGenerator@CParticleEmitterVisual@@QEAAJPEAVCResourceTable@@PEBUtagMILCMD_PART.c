/*
 * XREFs of ?ProcessSetParticleGenerator@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETPARTICLEGENERATOR@@@Z @ 0x1801EC4C8
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009BE60 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007CBC0 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetParticleGenerator(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETPARTICLEGENERATOR *a3)
{
  struct CResource *ResourceWithoutType; // rax
  CParticleEmitterVisual *v4; // r9

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  return CParticleEmitterVisual::SetParticleGenerator(v4, ResourceWithoutType);
}
