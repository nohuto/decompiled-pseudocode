/*
 * XREFs of _lambda_3fb1906df1a9d6575b86cde3260bcd26_::operator() @ 0x180380054
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3fb1906df1a9d6575b86cde3260bcd26___::Run @ 0x180380580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3fb1906df1a9d6575b86cde3260bcd26___--Run.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_3fb1906df1a9d6575b86cde3260bcd26_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // edi
  __int64 v6; // rbx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v9; // [rsp+50h] [rbp+8h] BYREF
  __int64 v10; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v9);
  v3 = v2;
  if ( v2 >= 0 )
  {
    for ( i = 0; i < v9; ++i )
    {
      v10 = 0LL;
      v6 = *(_QWORD *)(a1 + 8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
      v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL))(
             v6,
             i,
             &GUID_c179334c_4295_40d3_bea1_c654d965605a,
             &v10);
      if ( v7 >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a1)(v10, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          123LL,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
          (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B,
      (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
      (const char *)(unsigned int)v2);
    return v3;
  }
}
