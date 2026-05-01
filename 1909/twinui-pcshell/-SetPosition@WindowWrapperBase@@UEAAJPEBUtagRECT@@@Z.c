/*
 * XREFs of ?SetPosition@WindowWrapperBase@@UEAAJPEBUtagRECT@@@Z @ 0x180078580
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7f14c6771b056785188f2aea6d6f99cb___ @ 0x1800785D4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_7f14c6771b056785188f2aea6d6f99cb.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::SetPosition(WindowWrapperBase *this, const struct tagRECT *a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  const char *v6; // r9
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  const struct tagRECT *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  v7[0] = &v9;
  v7[1] = this;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_7f14c6771b056785188f2aea6d6f99cb___(
         v3,
         CurrentThreadId,
         v7);
  if ( v4 >= 0 )
    return 0LL;
  try
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xDB,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      -2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xDF,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  __debugbreak();
  JUMPOUT(0x180115A86LL);
}
