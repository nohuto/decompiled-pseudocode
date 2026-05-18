/*
 * XREFs of sub_1801221A0 @ 0x1801221A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180020AB0 @ 0x180020AB0 (sub_180020AB0.c)
 *     sub_1800AC274 @ 0x1800AC274 (sub_1800AC274.c)
 *     sub_180121948 @ 0x180121948 (sub_180121948.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _Mtx_lock @ 0x18012740A (_Mtx_lock.c)
 *     _Mtx_unlock @ 0x180127410 (_Mtx_unlock.c)
 *     ?_Throw_C_error@std@@YAXH@Z @ 0x180127416 (-_Throw_C_error@std@@YAXH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1801221A0(__int64 a1, __int64 *a2)
{
  struct _Mtx_internal_imp_t *v4; // rbx
  int v5; // eax
  unsigned int v6; // esi
  int v7; // eax
  __int64 v8; // rdx
  __int64 *v9; // rcx
  __int64 *v11[5]; // [rsp+20h] [rbp-48h] BYREF
  int v12; // [rsp+48h] [rbp-20h] BYREF

  v11[2] = (__int64 *)-2LL;
  v11[3] = a2;
  v4 = (struct _Mtx_internal_imp_t *)(a1 + 160);
  v11[4] = (__int64 *)(a1 + 160);
  v5 = Mtx_lock((_Mtx_t)(a1 + 160));
  if ( v5 )
    std::_Throw_C_error(v5);
  v12 = 0;
  if ( *(_QWORD *)(a1 + 240) != **(_QWORD **)(a1 + 240) )
  {
    v11[0] = *(__int64 **)(a1 + 240);
    sub_180020AB0(v11);
    v12 = *((_DWORD *)v11[0] + 8) + 1;
  }
  sub_180121948((__int64 **)(a1 + 240), (__int64)v11, &v12);
  sub_1800AC274((__int64)(v11[0] + 5), (__int64)a2);
  v6 = v12;
  v7 = Mtx_unlock(v4);
  if ( v7 )
    std::_Throw_C_error(v7);
  v9 = (__int64 *)a2[7];
  if ( v9 )
  {
    LOBYTE(v8) = v9 != a2;
    (*(void (__fastcall **)(__int64 *, __int64))(*v9 + 32))(v9, v8);
    a2[7] = 0LL;
  }
  return v6;
}
