/*
 * XREFs of ?ShouldSnapToPixels@CEffectBrush@@UEBA_NXZ @ 0x1800C3E10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CEffectBrush::ShouldSnapToPixels(CEffectBrush *this)
{
  unsigned int v1; // esi
  int v2; // ebx
  __int64 i; // rdi
  __int64 v6; // rcx

  v1 = *((_DWORD *)this + 34);
  v2 = 0;
  if ( !v1 )
    return 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v6 = *(_QWORD *)(i + *((_QWORD *)this + 14));
    if ( v6 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 352LL))(v6) )
        break;
    }
    if ( ++v2 >= v1 )
      return 0;
  }
  return 1;
}
