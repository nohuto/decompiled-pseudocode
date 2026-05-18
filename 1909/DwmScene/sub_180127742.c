/*
 * XREFs of sub_180127742 @ 0x180127742
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CC6C @ 0x18000CC6C (sub_18000CC6C.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

void *__fastcall sub_180127742(__int64 a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax
  int v5; // eax

  v3 = *(char **)(a2 + 64);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 40) + 8LL))(*(_QWORD *)(a2 + 40));
    sub_18000CC6C(v3, *(_QWORD *)(a2 + 72), (const char *)L"std::exception: %hs", v4);
  }
  v5 = *(_DWORD *)(a2 + 80);
  if ( v5 >= 0 )
    v5 = -2147024322;
  *(_DWORD *)(a2 + 80) = v5;
  return &loc_18000BD8B;
}
