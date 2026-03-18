/*
 * XREFs of ?IsEmptyDrawing@CParticleEmitter@@UEBA_NXZ @ 0x1801C6500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CParticleEmitter::IsEmptyDrawing(CParticleEmitter *this)
{
  char v1; // bl
  __int64 v2; // rcx

  v1 = 0;
  if ( !*((_DWORD *)this + 62) )
    return 1;
  v2 = *((_QWORD *)this + 717);
  if ( !v2 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 192LL))(v2) )
    return 1;
  return v1;
}
