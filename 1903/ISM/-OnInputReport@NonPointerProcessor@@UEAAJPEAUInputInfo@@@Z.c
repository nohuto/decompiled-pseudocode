/*
 * XREFs of ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800923E0
 * Callers:
 *     ?OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x180125090 (-OnInputReport@ButtonProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18012B140 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonPointerProcessor::OnInputReport(NonPointerProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, _QWORD, char *); // r14
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_BYTE *)this + 56) )
    goto LABEL_9;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4));
  v5 = v4;
  if ( !v4 )
  {
    v6 = -2147418113;
    v7 = 115LL;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v9 = *((_QWORD *)this + 6);
  v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, char *))(*(_QWORD *)v4 + 64LL);
  if ( v9 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v11 = v10(v5, 0LL, *((_QWORD *)this + 5), 0LL, (char *)this + 48);
  v12 = v11;
  if ( v11 >= 0 )
  {
LABEL_9:
    v13 = *((_QWORD *)this + 6);
    if ( v13 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, struct InputInfo *))(*(_QWORD *)v13 + 24LL))(v13, a2);
      if ( v6 < 0 )
      {
        v7 = 127LL;
        goto LABEL_4;
      }
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)(unsigned int)v11);
    return v12;
  }
}
