/*
 * XREFs of sub_1800C1FE0 @ 0x1800C1FE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800BB0EC @ 0x1800BB0EC (sub_1800BB0EC.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800C1FE0(__int64 a1, _QWORD *a2, int a3, __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rcx

  v4 = a3;
  if ( a3 < 0 || a3 >= (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a1 + 24LL))(a1, a4) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v8 = sub_1800BB0EC(*a4, v7);
    *a2 = 0LL;
    a2[1] = 0LL;
    v9 = *(_QWORD *)(v8 + 16 * v4 + 16);
    if ( v9 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v9 = *(_QWORD *)(v8 + 16 * v4 + 16);
    }
    *a2 = *(_QWORD *)(v8 + 16 * v4 + 8);
    a2[1] = v9;
  }
  return a2;
}
