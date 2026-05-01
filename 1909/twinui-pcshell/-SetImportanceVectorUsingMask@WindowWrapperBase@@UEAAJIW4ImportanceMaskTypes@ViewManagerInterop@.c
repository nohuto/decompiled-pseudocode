/*
 * XREFs of ?SetImportanceVectorUsingMask@WindowWrapperBase@@UEAAJIW4ImportanceMaskTypes@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180069F50
 * Callers:
 *     <none>
 * Callees:
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6de305bf0e82d4681d226044ba439afd___ @ 0x180069FB4 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_6de305bf0e82d4681d226044ba439afd.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall WindowWrapperBase::SetImportanceVectorUsingMask(__int64 a1, int a2, int a3)
{
  DWORD CurrentThreadId; // eax
  __int64 v4; // rcx
  int v5; // eax
  const char *v7; // r9
  _QWORD v8[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v10; // [rsp+58h] [rbp+10h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF

  v11 = a3;
  v10 = a2;
  v8[0] = &v10;
  v8[1] = a1 - 32;
  v8[2] = &v11;
  CurrentThreadId = GetCurrentThreadId();
  v5 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_6de305bf0e82d4681d226044ba439afd___(
         v4,
         CurrentThreadId,
         v8);
  if ( v5 >= 0 )
    return 0LL;
  try
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x8C3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      (const char *)(unsigned int)v5,
      -2);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x8C7,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  __debugbreak();
  JUMPOUT(0x1801111C6LL);
}
