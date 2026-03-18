/*
 * XREFs of ?ProcessSetEmitterGeometry@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETEMITTERGEOMETRY@@@Z @ 0x1801EDBB4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetEmitterGeometry(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETEMITTERGEOMETRY *a3)
{
  struct CResource *ResourceWithoutType; // rax
  CParticleEmitterVisual *v4; // r9

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  return CParticleEmitterVisual::SetEmitterShape(v4, ResourceWithoutType);
}
