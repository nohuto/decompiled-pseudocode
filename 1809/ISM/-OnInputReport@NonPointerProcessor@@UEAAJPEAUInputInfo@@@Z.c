/*
 * XREFs of ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180052360
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800EA960 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800ED770 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall NonPointerProcessor::OnInputReport(NonPointerProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rbx
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 64LL))(*((_QWORD *)this + 3));
  if ( !v4 )
  {
    v5 = -2147418113;
    v6 = 2147549183LL;
    v7 = 108LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)v6);
    v10 = v13;
    goto LABEL_14;
  }
  v8 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v4 + 64LL))(
         v4,
         0LL,
         *((_QWORD *)this + 4),
         0LL,
         &v13);
  v5 = v9;
  if ( v9 < 0 )
  {
    v7 = 117LL;
LABEL_10:
    v6 = (unsigned int)v9;
    goto LABEL_11;
  }
  v10 = v13;
  if ( v13 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v13 + 24LL))(v13, a2);
    v5 = v9;
    if ( v9 < 0 )
    {
      v7 = 123LL;
      goto LABEL_10;
    }
    v10 = v13;
  }
  v5 = 0;
LABEL_14:
  if ( v10 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return v5;
}
