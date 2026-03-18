/*
 * XREFs of ??0CParticleEmitter@@QEAA@PEAVCComposition@@@Z @ 0x1801C4964
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z @ 0x1801AA818 (--0CParticleEmitterVisual@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0Particles@CParticleEmitter@@QEAA@XZ @ 0x1801C4C38 (--0Particles@CParticleEmitter@@QEAA@XZ.c)
 *     ?Setup@CParticleEmitter@@IEAAXXZ @ 0x1801C6B1C (-Setup@CParticleEmitter@@IEAAXXZ.c)
 *     ?StartEmitterTimerAnimation@CParticleEmitter@@IEAAJXZ @ 0x1801C75C8 (-StartEmitterTimerAnimation@CParticleEmitter@@IEAAJXZ.c)
 *     ?seed@?$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC@@std@@QEAAXII@Z @ 0x1801C80E8 (-seed@-$mersenne_twister@I$0CA@$0CHA@$0BIN@$0BP@$0JJAILANP@$0L@$06$0JNCMFGIA@$0P@$0OPMGAAAA@$0BC.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

CParticleEmitter *__fastcall CParticleEmitter::CParticleEmitter(CParticleEmitter *this, struct CComposition *a2)
{
  unsigned int v3; // eax
  int started; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CParticleEmitter::`vftable';
  CParticleEmitter::Particles::Particles((CParticleEmitter *)((char *)this + 56));
  *((_QWORD *)this + 32) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  *((_QWORD *)this + 40) = 0LL;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 46) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_DWORD *)this + 102) = 1065353216;
  *((_DWORD *)this + 103) = 1065353216;
  *((_DWORD *)this + 104) = 1065353216;
  *((_DWORD *)this + 105) = 1065353216;
  *((_DWORD *)this + 1386) = -1;
  std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::seed(
    (char *)this + 548,
    5489LL);
  *((_QWORD *)this + 702) = 0LL;
  *((_QWORD *)this + 703) = 0LL;
  *((_BYTE *)this + 5688) = 0;
  *(_QWORD *)((char *)this + 5700) = 0LL;
  *((_BYTE *)this + 5708) = 0;
  *((_DWORD *)this + 1428) = 0;
  *((_QWORD *)this + 715) = 0LL;
  v3 = std::_Random_device();
  std::mersenne_twister<unsigned int,32,624,397,31,2567483615,11,7,2636928640,15,4022730752,18>::seed(
    (char *)this + 548,
    v3);
  *((_BYTE *)this + 5708) = 1;
  CParticleEmitter::Setup(this);
  started = CParticleEmitter::StartEmitterTimerAnimation(this);
  if ( started < 0 )
    ModuleFailFastForHRESULT((unsigned int)started, retaddr);
  return this;
}
