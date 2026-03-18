/*
 * XREFs of ?IsValidBrushResource@CParticleEmitterVisual@@KA_NPEBVCResource@@@Z @ 0x1801EC088
 * Callers:
 *     ?SetBrush@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z @ 0x1801EC538 (-SetBrush@CParticleEmitterVisual@@QEAAJPEAVCResource@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CParticleEmitterVisual::IsValidBrushResource(const struct CResource *a1)
{
  char v2; // bl

  v2 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 19LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 176LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 102LL)
    || (*(unsigned __int8 (__fastcall **)(const struct CResource *, __int64))(*(_QWORD *)a1 + 48LL))(a1, 67LL) )
  {
    return 1;
  }
  return v2;
}
