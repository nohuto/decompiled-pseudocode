/*
 * XREFs of sub_180122600 @ 0x180122600
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E0EC @ 0x18006E0EC (sub_18006E0EC.c)
 *     sub_180121734 @ 0x180121734 (sub_180121734.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180122600(_QWORD *a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rbx
  __int64 **v6; // rax
  __int64 i; // rax
  __int64 *j; // rax
  char *v10; // [rsp+48h] [rbp-40h] BYREF
  char *v11; // [rsp+50h] [rbp-38h]
  __int64 v12; // [rsp+58h] [rbp-30h]

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = (_QWORD *)a1[18];
  v5 = (_QWORD *)*v4;
  while ( v5 != v4 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    (*(void (__fastcall **)(_QWORD *, char **, _QWORD *))(*a1 + 200LL))(a1, &v10, v5 + 4);
    sub_180121734((__int64 **)a2, *(__int64 **)(a2 + 8), v10, v11);
    sub_18006E0EC((__int64)&v10);
    v6 = (__int64 **)v5[2];
    if ( *((_BYTE *)v6 + 25) )
    {
      for ( i = v5[1]; !*(_BYTE *)(i + 25) && v5 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
        v5 = (_QWORD *)i;
      v5 = (_QWORD *)i;
    }
    else
    {
      v5 = (_QWORD *)v5[2];
      for ( j = *v6; !*((_BYTE *)j + 25); j = (__int64 *)*j )
        v5 = j;
    }
  }
  return a2;
}
