/*
 * XREFs of ?IsEmptyDrawing@CParticleEmitterVisual@@QEBA_NXZ @ 0x1801E8DD0
 * Callers:
 *     ?IsEmptyDrawing@CParticleEmitter@@UEBA_NXZ @ 0x1801E8DC0 (-IsEmptyDrawing@CParticleEmitter@@UEBA_NXZ.c)
 *     ?UpdateBounds@CParticleEmitterVisual@@IEAAXXZ @ 0x1801ED16C (-UpdateBounds@CParticleEmitterVisual@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CParticleEmitterVisual::IsEmptyDrawing(CParticleEmitterVisual *this)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( !*((_DWORD *)this + 256) )
    return 1;
  v2 = *((_QWORD *)this + 765);
  if ( !v2 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 232LL))(v2) )
    return 1;
  return v1;
}
