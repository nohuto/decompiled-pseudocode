/*
 * XREFs of sub_1801277C4 @ 0x1801277C4
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000CC6C @ 0x18000CC6C (sub_18000CC6C.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_1801277C4(__int64 a1, __int64 a2)
{
  char *v3; // rbx
  __int64 v4; // rax

  v3 = *(char **)(a2 + 96);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a2 + 64) + 8LL))(*(_QWORD *)(a2 + 64));
    sub_18000CC6C(v3, *(_QWORD *)(a2 + 104), (const char *)L"std::exception: %hs", v4);
  }
  return &loc_18000C2AC;
}
