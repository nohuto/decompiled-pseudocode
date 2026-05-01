/*
 * XREFs of ?Consolidate@WindowWrapperBase@@UEAAJW4ConsolidatedState@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1802501F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1cb4bc77149432cf31b2161997b139b7___ @ 0x18024EA60 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_1cb4bc77149432cf31b2161997b139b7.c)
 */

__int64 __fastcall WindowWrapperBase::Consolidate(__int64 a1, int a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  *(_QWORD *)&v7 = a1 - 8;
  *((_QWORD *)&v7 + 1) = &v9;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_1cb4bc77149432cf31b2161997b139b7___(
         v3,
         CurrentThreadId,
         &v7);
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        669LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2A1,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
