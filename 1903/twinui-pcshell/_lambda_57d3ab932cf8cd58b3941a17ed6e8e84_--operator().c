/*
 * XREFs of _lambda_57d3ab932cf8cd58b3941a17ed6e8e84_::operator() @ 0x18008CC00
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_57d3ab932cf8cd58b3941a17ed6e8e84___::Run @ 0x18008D140 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_57d3ab932cf8cd58b3941a17ed6e8e84___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_57d3ab932cf8cd58b3941a17ed6e8e84_::operator()(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64, __int64 *); // rbx
  int v3; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = 0LL;
  v1 = *a1;
  v2 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*a1 + 144LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  v3 = v2(v1, &v8);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
    v4 = v3;
    if ( v3 >= 0 )
    {
      v4 = 0;
      goto LABEL_7;
    }
    v5 = 8441LL;
  }
  else
  {
    v5 = 8440LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
  return v4;
}
