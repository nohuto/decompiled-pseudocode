/*
 * XREFs of sub_1800163D8 @ 0x1800163D8
 * Callers:
 *     sub_180016484 @ 0x180016484 (sub_180016484.c)
 * Callees:
 *     sub_1800120A8 @ 0x1800120A8 (sub_1800120A8.c)
 *     sub_180017498 @ 0x180017498 (sub_180017498.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801260E8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800163D8(__int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_180214118);
  if ( v4 )
  {
    v6 = sub_180017498(v4);
    v5 = sub_1800120A8(v6, a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
