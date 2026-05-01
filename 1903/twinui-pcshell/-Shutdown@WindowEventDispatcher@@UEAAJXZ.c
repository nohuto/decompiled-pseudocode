/*
 * XREFs of ?Shutdown@WindowEventDispatcher@@UEAAJXZ @ 0x180280710
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008BCF4 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_34b17e103c9e53767c239d4fd5bab5ae___ @ 0x18009A050 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_34b17e103c9e53767c239d4fd5bab5ae.c)
 */

__int64 __fastcall WindowEventDispatcher::Shutdown(WindowEventDispatcher *this)
{
  DWORD CurrentThreadId; // eax
  unsigned int v2; // ecx
  int v3; // eax
  __int64 *v5; // rdx
  const char *v6; // r9
  __int64 v7; // [rsp+0h] [rbp-38h] BYREF
  int v8[2]; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char *v10; // [rsp+40h] [rbp+8h] BYREF

  *(_QWORD *)v8 = -2LL;
  v10 = (char *)this - 72;
  CurrentThreadId = GetCurrentThreadId();
  v3 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_34b17e103c9e53767c239d4fd5bab5ae___(
         v2,
         CurrentThreadId,
         &v10);
  if ( v3 < 0 )
  {
    try
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        2123LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v3);
      __debugbreak();
_WindowEventDispatcher__Shutdown____1___catch$0:
      *((_DWORD *)v5 + 16) = wil::details::in1diag3::Return_CaughtException(
                               (wil::details::in1diag3 *)v5[7],
                               (void *)0x84E,
                               (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
                               v6);
      return (unsigned int)v10;
    }
    catch ( ... )
    {
      v5 = &v7;
      goto _WindowEventDispatcher__Shutdown____1___catch$0;
    }
  }
  return 0LL;
}
