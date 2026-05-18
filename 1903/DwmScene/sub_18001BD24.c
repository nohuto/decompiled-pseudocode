/*
 * XREFs of sub_18001BD24 @ 0x18001BD24
 * Callers:
 *     sub_18001BDD0 @ 0x18001BDD0 (sub_18001BDD0.c)
 * Callees:
 *     sub_180013A50 @ 0x180013A50 (sub_180013A50.c)
 *     sub_180013FBC @ 0x180013FBC (sub_180013FBC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801260E8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001BD24(__int64 *a1, _QWORD *a2)
{
  void *v4; // rax
  int v5; // edi
  __int64 v6; // rbx

  *a1 = 0LL;
  v4 = operator new(0x30uLL, (const struct std::nothrow_t *)&unk_180214118);
  if ( v4 )
  {
    v6 = sub_180013A50((__int64)v4);
    v5 = sub_180013FBC(v6, a2);
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
