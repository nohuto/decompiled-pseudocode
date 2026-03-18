/*
 * XREFs of ?ProcessSetMaxParticleInstances@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_SETMAXPARTICLEINSTANCES@@@Z @ 0x1801A14D4
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     std::vector_Instance_Pos4_QRot_ColorDW_Size2_std::allocator_Instance_Pos4_QRot_ColorDW_Size2___::_Resize__lambda_8dfb7c59ebd300cc893a48a945ad3f00___ @ 0x18019C83C (std--vector_Instance_Pos4_QRot_ColorDW_Size2_std--allocator_Instance_Pos4_QRot_ColorDW_Size2___-.c)
 *     ?Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z @ 0x1801A1A60 (-Reserve@ParticleCollection@CParticleEmitterVisual@@QEAAXH@Z.c)
 */

__int64 __fastcall CParticleEmitterVisual::ProcessSetMaxParticleInstances(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_SETMAXPARTICLEINSTANCES *a3)
{
  int v3; // edx

  v3 = *((_DWORD *)a3 + 2);
  *((_DWORD *)this + 1553) = v3;
  CParticleEmitterVisual::ParticleCollection::Reserve((CParticleEmitterVisual *)((char *)this + 568), v3);
  std::vector_Instance_Pos4_QRot_ColorDW_Size2_std::allocator_Instance_Pos4_QRot_ColorDW_Size2___::_Resize__lambda_8dfb7c59ebd300cc893a48a945ad3f00___(
    (__int64)this + 1032,
    *((unsigned int *)this + 1553));
  return 0LL;
}
