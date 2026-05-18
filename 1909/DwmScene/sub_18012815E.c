/*
 * XREFs of sub_18012815E @ 0x18012815E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001153C @ 0x18001153C (sub_18001153C.c)
 *     sub_180078150 @ 0x180078150 (sub_180078150.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void __fastcall __noreturn sub_18012815E(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rcx
  __int64 *v4; // rsi
  __int64 v5; // rdi
  const char *v6; // rbx
  __int64 v7; // rax

  v3 = *(_QWORD **)(a2 + 56);
  if ( *v3 )
  {
    v4 = (__int64 *)sub_18001153C((__int64)v3);
    v5 = *v4;
    v6 = sub_180078150();
    v7 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 208) + 8LL))(*(_QWORD *)(a2 + 208));
    (*(void (__fastcall **)(__int64 *, _QWORD, __int64, const char *))(v5 + 24))(v4, 0LL, v7, v6);
  }
  throw;
}
