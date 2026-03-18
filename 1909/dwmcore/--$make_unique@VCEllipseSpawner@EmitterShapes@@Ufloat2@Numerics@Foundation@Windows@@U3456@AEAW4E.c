/*
 * XREFs of ??$make_unique@VCEllipseSpawner@EmitterShapes@@Ufloat2@Numerics@Foundation@Windows@@U3456@AEAW4EmitFrom@2@$0A@@std@@YA?AV?$unique_ptr@VCEllipseSpawner@EmitterShapes@@U?$default_delete@VCEllipseSpawner@EmitterShapes@@@std@@@0@$$QEAUfloat2@Numerics@Foundation@Windows@@0AEAW4EmitFrom@EmitterShapes@@@Z @ 0x1801E953C
 * Callers:
 *     ?EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ @ 0x1801EB2D0 (-EnsureSpawner@CParticleEmitterVisual@@IEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_unique<EmitterShapes::CEllipseSpawner,Windows::Foundation::Numerics::float2,Windows::Foundation::Numerics::float2,enum EmitterShapes::EmitFrom &,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        int *a4)
{
  _QWORD *v8; // rax
  int v9; // r9d
  __int64 v11; // [rsp+20h] [rbp-18h]

  v8 = operator new(0x20uLL);
  if ( v8 )
  {
    v9 = *a4;
    v11 = *a3;
    v8[1] = *a2;
    v8[2] = v11;
    *v8 = &EmitterShapes::CEllipseSpawner::`vftable';
    *((_DWORD *)v8 + 6) = v9;
  }
  *a1 = v8;
  return a1;
}
