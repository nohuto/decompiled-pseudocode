/*
 * XREFs of sub_180016260 @ 0x180016260
 * Callers:
 *     sub_18001630C @ 0x18001630C (sub_18001630C.c)
 * Callees:
 *     sub_1800101CC @ 0x1800101CC (sub_1800101CC.c)
 *     sub_180017408 @ 0x180017408 (sub_180017408.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801261F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180016260(__int64 *a1, int *a2, _QWORD *a3)
{
  void *v6; // rax
  int v7; // edi
  __int64 v8; // rbx

  *a1 = 0LL;
  v6 = operator new(0xD0uLL, (const struct std::nothrow_t *)&unk_180215118);
  if ( v6 )
  {
    v8 = sub_180017408(v6);
    v7 = sub_1800101CC(v8, *a2, a3);
    if ( v7 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v7 = 0;
    }
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v7;
}
