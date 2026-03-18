/*
 * XREFs of ??$make_unique@VCPathSpawner@EmitterShapes@@PEAVCPathEmitterShape@2@$0A@@std@@YA?AV?$unique_ptr@VCPathSpawner@EmitterShapes@@U?$default_delete@VCPathSpawner@EmitterShapes@@@std@@@0@$$QEAPEAVCPathEmitterShape@EmitterShapes@@@Z @ 0x1801C4724
 * Callers:
 *     ?EnsureSpawner@CParticleEmitter@@AEAAJXZ @ 0x1801C58F8 (-EnsureSpawner@CParticleEmitter@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::make_unique<EmitterShapes::CPathSpawner,EmitterShapes::CPathEmitterShape *,0>(
        _QWORD *a1,
        __int64 *a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *result; // rax

  v4 = operator new(0x10uLL);
  if ( v4 )
  {
    v5 = *a2;
    *v4 = &EmitterShapes::CPathSpawner::`vftable';
    v4[1] = v5;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  }
  else
  {
    v4 = 0LL;
  }
  result = a1;
  *a1 = v4;
  return result;
}
