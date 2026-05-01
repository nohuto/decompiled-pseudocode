/*
 * XREFs of _lambda_4f7e66b8cf68c224e991614d9a353a90_::operator() @ 0x180405768
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90___::Run @ 0x180405C00 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_4f7e66b8cf68c224e991614d9a353a90___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_4f7e66b8cf68c224e991614d9a353a90_::operator()(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  unsigned int i; // esi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, GUID *, __int64 *); // rbx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)(a1 + 8) + 24LL))(*(_QWORD *)(a1 + 8), &v10);
  v3 = v2;
  if ( v2 >= 0 )
  {
    for ( i = 0; i < v10; ++i )
    {
      v11 = 0LL;
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v6 + 32LL);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
      v8 = v7(v6, i, &GUID_c179334c_4295_40d3_bea1_c654d965605a, &v11);
      if ( v8 >= 0 )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))a1)(v11, *(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24));
      else
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x7B,
          (__int64)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopnotifications.cpp",
          (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
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
