/*
 * XREFs of sub_180016534 @ 0x180016534
 * Callers:
 *     sub_180016620 @ 0x180016620 (sub_180016620.c)
 * Callees:
 *     sub_18001BC88 @ 0x18001BC88 (sub_18001BC88.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801261F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180016534(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_180215118);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &ISpectreRenderTarget::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &off_180148078;
    if ( qword_180269C80 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180269C80 + 8LL))(qword_180269C80);
    *v5 = &off_1801480B0;
    v5[2] = 0LL;
    v6 = sub_18001BC88(v5, *a2);
    if ( v6 >= 0 )
    {
      if ( v5 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 8LL))(v5);
      *a1 = v5;
      v6 = 0;
    }
    if ( v5 )
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v6;
}
