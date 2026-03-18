/*
 * XREFs of ?IsValidBrushResource@CParticleEmitter@@CA_NPEBVCResource@@@Z @ 0x1801C6554
 * Callers:
 *     ?SetBrush@CParticleEmitter@@QEAAJPEAVCResource@@@Z @ 0x1801C69E4 (-SetBrush@CParticleEmitter@@QEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CParticleEmitter::IsValidBrushResource(const struct CResource *a1)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 19LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 145LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 95LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 63LL) )
  {
    return 1;
  }
  return v2;
}
