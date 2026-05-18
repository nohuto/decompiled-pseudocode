/*
 * XREFs of sub_1800139C8 @ 0x1800139C8
 * Callers:
 *     sub_180013A60 @ 0x180013A60 (sub_180013A60.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180013AA0 @ 0x180013AA0 (sub_180013AA0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801261F8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800139C8(_QWORD *a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  void *v5; // rax
  _QWORD *v6; // rdi

  v2 = 0;
  *a1 = 0LL;
  v5 = operator new(0x30uLL, (const struct std::nothrow_t *)&unk_180215118);
  if ( v5 )
  {
    v6 = (_QWORD *)sub_180013AA0(v5);
    std::shared_ptr<__ExceptionPtr>::operator=(v6 + 4, a2);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    *a1 = v6;
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 16LL))(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
