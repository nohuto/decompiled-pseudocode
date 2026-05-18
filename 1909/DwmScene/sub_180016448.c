/*
 * XREFs of sub_180016448 @ 0x180016448
 * Callers:
 *     sub_1800164F4 @ 0x1800164F4 (sub_1800164F4.c)
 * Callees:
 *     sub_1800120F8 @ 0x1800120F8 (sub_1800120F8.c)
 *     sub_180017508 @ 0x180017508 (sub_180017508.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801261F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180016448(__int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&unk_180215118);
  if ( v4 )
  {
    v6 = sub_180017508(v4);
    v5 = sub_1800120F8(v6, a2);
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
