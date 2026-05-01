/*
 * XREFs of ?TryBack@WindowWrapperBase@@UEAAJPEAU?$ITypedEventHandler@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewHandledEventArgs@2345@@Foundation@Windows@@@Z @ 0x1802A7FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dcd32fac5d1c9340cb60356276d77895___ @ 0x1802A5828 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dcd32fac5d1c9340cb60356276d77895.c)
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
      v10 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dcd32fac5d1c9340cb60356276d77895___(
              v9,
              CurrentThreadId,
              &v11);
      if ( v10 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          943LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v10);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x371,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80004001LL);
      result = 2147500033LL;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3B3,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  return result;
}
