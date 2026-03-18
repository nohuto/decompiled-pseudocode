/*
 * XREFs of ?ProcessSetSpeed@CParticleBehaviors@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEBEHAVIORS_SETSPEED@@@Z @ 0x1801E8CF4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x180083C40 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 */

__int64 __fastcall CParticleBehaviors::ProcessSetSpeed(
        CParticleBehaviors *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEBEHAVIORS_SETSPEED *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource **v4; // r8
  CResource *v5; // r10

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(a2, *((_DWORD *)a3 + 2));
  return CParticleBehaviors::SetBehavior<CParticleScalarBehavior>(v5, ResourceWithoutType, v4);
}
