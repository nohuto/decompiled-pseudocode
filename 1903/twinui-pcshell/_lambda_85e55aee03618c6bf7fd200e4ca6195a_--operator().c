/*
 * XREFs of _lambda_85e55aee03618c6bf7fd200e4ca6195a_::operator() @ 0x180062A80
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_85e55aee03618c6bf7fd200e4ca6195a___::Run @ 0x180062A70 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_85e55aee03618c6bf7fd200e4ca6195a___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_85e55aee03618c6bf7fd200e4ca6195a_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // ebx
  int v5; // eax
  __int64 v6; // rcx
  int v8; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v10);
  v3 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2,
      v8);
    return v3;
  }
  else
  {
    for ( i = 0; i < v10; ++i )
    {
      v11 = 0LL;
      v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, GUID *, __int64 *))(**(_QWORD **)(a1 + 8) + 32LL))(
             *(_QWORD *)(a1 + 8),
             i,
             &GUID_c179334c_4295_40d3_bea1_c654d965605a,
             &v11);
      if ( v5 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7B,
          (unsigned int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
          (const char *)(unsigned int)v5,
          v8);
      else
        (*(void (__fastcall **)(__int64, _QWORD))a1)(v11, *(_QWORD *)(a1 + 16));
      v6 = v11;
      if ( v11 )
      {
        v11 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      }
    }
    return 0LL;
  }
}
