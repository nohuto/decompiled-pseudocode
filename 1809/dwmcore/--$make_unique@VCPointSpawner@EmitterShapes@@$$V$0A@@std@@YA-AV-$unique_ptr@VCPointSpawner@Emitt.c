/*
 * XREFs of ??$make_unique@VCPointSpawner@EmitterShapes@@$$V$0A@@std@@YA?AV?$unique_ptr@VCPointSpawner@EmitterShapes@@U?$default_delete@VCPointSpawner@EmitterShapes@@@std@@@0@XZ @ 0x1801C4790
 * Callers:
 *     ?EnsureSpawner@CParticleEmitter@@AEAAJXZ @ 0x1801C58F8 (-EnsureSpawner@CParticleEmitter@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18002FAC8 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<EmitterShapes::CPointSpawner,,0>(_QWORD *a1)
{
  _QWORD *v2; // rax

  v2 = operator new(8uLL);
  if ( v2 )
    *v2 = &EmitterShapes::CPointSpawner::`vftable';
  *a1 = v2;
  return a1;
}
