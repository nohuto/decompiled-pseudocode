/*
 * XREFs of ?OnTargetWithFocusChanged@NonPointerProcessor@@UEAAJPEAUIInputTarget@@0@Z @ 0x180007710
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NonPointerProcessor::OnTargetWithFocusChanged(
        NonPointerProcessor *this,
        struct IInputTarget *a2,
        struct IInputTarget *a3)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 (__fastcall *v7)(__int64, _QWORD, _QWORD, _QWORD); // rbp
  int v8; // eax
  unsigned int v9; // edi
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, struct IInputTarget *, struct IInputTarget *))(**((_QWORD **)this + 3) + 64LL))(
         *((_QWORD *)this + 3),
         a2,
         a3);
  v5 = v4;
  if ( v4 )
  {
    v6 = *((_QWORD *)this + 5);
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v4 + 64LL);
    if ( v6 )
    {
      *((_QWORD *)this + 5) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    v8 = v7(v5, 0LL, *((_QWORD *)this + 4), 0LL);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x9B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
        (const char *)(unsigned int)v8,
        (_DWORD)this + 40);
      return v9;
    }
    else
    {
      *((_BYTE *)this + 48) = 1;
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x92,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
      (const char *)0x8000FFFFLL,
      v11);
    return 2147549183LL;
  }
}
