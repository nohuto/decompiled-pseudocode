/*
 * XREFs of sub_180016660 @ 0x180016660
 * Callers:
 *     sub_18001670C @ 0x18001670C (sub_18001670C.c)
 * Callees:
 *     sub_180017588 @ 0x180017588 (sub_180017588.c)
 *     sub_18001BCE0 @ 0x18001BCE0 (sub_18001BCE0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801261F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180016660(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&unk_180215118);
  if ( v4 )
  {
    v6 = sub_180017588(v4);
    v5 = sub_18001BCE0(v6, a2);
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
