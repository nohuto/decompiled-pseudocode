/*
 * XREFs of ?ProcessClear@CParticleEmitterVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PARTICLEEMITTERVISUAL_CLEAR@@@Z @ 0x1801ED998
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?Clear@ParticleCollection@CParticleEmitterVisual@@QEAAXXZ @ 0x1801EC508 (-Clear@ParticleCollection@CParticleEmitterVisual@@QEAAXXZ.c)
 */

__int64 __fastcall CParticleEmitterVisual::ProcessClear(
        CParticleEmitterVisual *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_PARTICLEEMITTERVISUAL_CLEAR *a3)
{
  __int64 v3; // r9

  CParticleEmitterVisual::ParticleCollection::Clear((CParticleEmitterVisual *)((char *)this + 568));
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v3 + 64LL))(v3, 0LL, v3);
  return 0LL;
}
