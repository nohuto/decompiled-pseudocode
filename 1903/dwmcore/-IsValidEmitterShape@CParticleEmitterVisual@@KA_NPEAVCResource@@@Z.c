/*
 * XREFs of ?IsValidEmitterShape@CParticleEmitterVisual@@KA_NPEAVCResource@@@Z @ 0x1801ED880
 * Callers:
 *     ?SetEmitterShape@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z @ 0x1801EDDE8 (-SetEmitterShape@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CParticleEmitterVisual::IsValidEmitterShape(struct CResource *a1)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 136LL)
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 97LL)
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 54LL)
    || (*(unsigned __int8 (__fastcall **)(struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 122LL) )
  {
    return 1;
  }
  return v2;
}
