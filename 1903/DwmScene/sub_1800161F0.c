/*
 * XREFs of sub_1800161F0 @ 0x1800161F0
 * Callers:
 *     sub_18001629C @ 0x18001629C (sub_18001629C.c)
 * Callees:
 *     sub_18001017C @ 0x18001017C (sub_18001017C.c)
 *     sub_180017398 @ 0x180017398 (sub_180017398.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801260E8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800161F0(__int64 *a1, int *a2, _QWORD *a3)
{
  void *v6; // rax
  int v7; // edi
  __int64 v8; // rbx

  *a1 = 0LL;
  v6 = operator new(0xD0uLL, (const struct std::nothrow_t *)&unk_180214118);
  if ( v6 )
  {
    v8 = sub_180017398(v6);
    v7 = sub_18001017C(v8, *a2, a3);
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
