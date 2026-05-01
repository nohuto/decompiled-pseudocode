/*
 * XREFs of ?BoostPriority@WindowWrapperBase@@UEAAJXZ @ 0x18006F6C0
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd3f6d7ea91d00747dcff202126691de___ @ 0x18006F70C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_dd3f6d7ea91d00747dcff202126691de.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::BoostPriority(WindowWrapperBase *this)
{
  DWORD CurrentThreadId; // eax
  __int64 v2; // rcx
  int v3; // eax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = (char *)this - 32;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_dd3f6d7ea91d00747dcff202126691de___(
         v2,
         CurrentThreadId,
         &v7);
  if ( v3 >= 0 )
    return 0LL;
  try
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x769,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v3,
      -2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x76D,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  __debugbreak();
  JUMPOUT(0x1800D5FC2LL);
}
