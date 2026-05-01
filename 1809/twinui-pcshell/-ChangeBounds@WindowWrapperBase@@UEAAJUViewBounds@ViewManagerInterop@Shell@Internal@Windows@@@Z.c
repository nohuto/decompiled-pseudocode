/*
 * XREFs of ?ChangeBounds@WindowWrapperBase@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18006B870
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_248f8e1f8d7e47609613baa4997faea8___ @ 0x18006B8C0 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_248f8e1f8d7e47609613baa4997faea8.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::ChangeBounds(__int64 a1, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  __int64 v3; // rcx
  int v4; // eax
  const char *v6; // r9
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7[0] = a2;
  v7[1] = a1 - 8;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_248f8e1f8d7e47609613baa4997faea8___(
         v3,
         CurrentThreadId,
         v7);
  if ( v4 >= 0 )
    return 0LL;
  try
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x255,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v4,
      -2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x259,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v6);
  }
  __debugbreak();
  JUMPOUT(0x1800D49B6LL);
}
