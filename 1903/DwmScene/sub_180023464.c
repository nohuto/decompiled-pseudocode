/*
 * XREFs of sub_180023464 @ 0x180023464
 * Callers:
 *     sub_1800253B0 @ 0x1800253B0 (sub_1800253B0.c)
 * Callees:
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall sub_180023464(__int64 a1)
{
  struct _Mtx_internal_imp_t *v2; // rsi
  int v3; // eax
  __int64 *v4; // rdi
  __int64 *v5; // rbx
  __int64 **v6; // rax
  __int64 *i; // rax
  __int64 *j; // rcx
  int v9; // eax

  v2 = (struct _Mtx_internal_imp_t *)(a1 + 4168);
  v3 = Mtx_lock((_Mtx_t)(a1 + 4168));
  if ( v3 )
    std::_Throw_C_error(v3);
  v4 = *(__int64 **)(a1 + 4152);
  v5 = (__int64 *)*v4;
  while ( v5 != v4 )
  {
    (**(void (__fastcall ***)(__int64, _QWORD))v5[4])(v5[4], *(unsigned int *)(a1 + 4248));
    v6 = (__int64 **)v5[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
        v5 = i;
      v5 = i;
    }
    else
    {
      v5 = (__int64 *)v5[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  v9 = Mtx_unlock(v2);
  if ( v9 )
    std::_Throw_C_error(v9);
}
