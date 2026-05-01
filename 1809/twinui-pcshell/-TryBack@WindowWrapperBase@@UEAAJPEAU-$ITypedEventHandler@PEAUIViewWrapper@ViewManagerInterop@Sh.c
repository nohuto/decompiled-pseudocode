/*
 * XREFs of ?TryBack@WindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x180251210
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f8421c91cc109f3cf87d8162b66792d4___ @ 0x18024F164 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_f8421c91cc109f3cf87d8162b66792d4.c)
 */

__int64 __fastcall WindowWrapperBase::TryBack(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int8 (__fastcall *v5)(__int64); // rax
  const char *v6; // r9
  __int64 result; // rax
  DWORD CurrentThreadId; // eax
  unsigned int v9; // ecx
  int v10; // eax
  __int128 v11; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v2 = a1 - 8;
  v3 = *(_QWORD *)(a1 - 8);
  v4 = a1 - 8;
  v5 = *(unsigned __int8 (__fastcall **)(__int64))(v3 + 112);
  try
  {
    if ( v5(v4) )
    {
      *(_QWORD *)&v11 = &v13;
      *((_QWORD *)&v11 + 1) = v2;
      CurrentThreadId = GetCurrentThreadId();
      v10 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_f8421c91cc109f3cf87d8162b66792d4___(
              v9,
              CurrentThreadId,
              &v11);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          873LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v10);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x333,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
      result = 2147500033LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x36D,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
