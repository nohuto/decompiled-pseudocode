/*
 * XREFs of sub_18000D570 @ 0x18000D570
 * Callers:
 *     sub_18000D618 @ 0x18000D618 (sub_18000D618.c)
 * Callees:
 *     sub_18000D658 @ 0x18000D658 (sub_18000D658.c)
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801260E8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000D570(__int64 *a1, __int64 a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0xB8uLL, (const struct std::nothrow_t *)&unk_180214118);
  if ( v4 )
  {
    v6 = sub_18000D658(v4);
    v5 = sub_1800199B8(v6, a2);
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
