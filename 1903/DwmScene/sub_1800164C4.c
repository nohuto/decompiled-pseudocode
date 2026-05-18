/*
 * XREFs of sub_1800164C4 @ 0x1800164C4
 * Callers:
 *     sub_1800165B0 @ 0x1800165B0 (sub_1800165B0.c)
 * Callees:
 *     sub_18001BB78 @ 0x18001BB78 (sub_18001BB78.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801260E8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800164C4(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // edi

  *a1 = 0LL;
  v4 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_180214118);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &ISpectreRenderTarget::`vftable';
    *((_DWORD *)v4 + 3) = 1;
    *v4 = &off_180147078;
    if ( qword_180268C80 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180268C80 + 8LL))(qword_180268C80);
    *v5 = &off_1801470B0;
    v5[2] = 0LL;
    v6 = sub_18001BB78(v5, *a2);
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
