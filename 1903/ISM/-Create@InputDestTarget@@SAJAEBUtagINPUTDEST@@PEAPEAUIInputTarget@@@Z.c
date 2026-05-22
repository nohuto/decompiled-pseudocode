/*
 * XREFs of ?Create@InputDestTarget@@SAJAEBUtagINPUTDEST@@PEAPEAUIInputTarget@@@Z @ 0x1800C7A90
 * Callers:
 *     ?GetTargetFromInputDest@DWMInputRouter@@UEAAJAEBUtagINPUTDEST@@PEAUIInputTarget@@PEAPEAU3@@Z @ 0x1800C3890 (-GetTargetFromInputDest@DWMInputRouter@@UEAAJAEBUtagINPUTDEST@@PEAUIInputTarget@@PEAPEAU3@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0InputDestTarget@@QEAA@AEBUtagINPUTDEST@@@Z @ 0x1800C79C4 (--0InputDestTarget@@QEAA@AEBUtagINPUTDEST@@@Z.c)
 */

__int64 __fastcall InputDestTarget::Create(const struct tagINPUTDEST *a1, struct IInputTarget **a2)
{
  InputDestTarget *v4; // rbx
  InputDestTarget *v5; // rax
  InputDestTarget *v6; // rdi
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v4 = 0LL;
  v5 = (InputDestTarget *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = 0LL;
  if ( v5 )
  {
    v4 = InputDestTarget::InputDestTarget(v5, a1);
    v6 = v4;
  }
  if ( v6 )
  {
    (**(void (__fastcall ***)(InputDestTarget *, GUID *, struct IInputTarget **))v4)(
      v4,
      &GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3,
      a2);
    v7 = 0;
  }
  else
  {
    v7 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\inputdesttarget.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v6 )
    (*(void (__fastcall **)(InputDestTarget *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
