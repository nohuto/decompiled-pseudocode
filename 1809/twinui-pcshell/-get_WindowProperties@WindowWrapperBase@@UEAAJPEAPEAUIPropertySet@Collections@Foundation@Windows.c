/*
 * XREFs of ?get_WindowProperties@WindowWrapperBase@@UEAAJPEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180252200
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ecff0a6ad990c549a8393105facc7083___ @ 0x18024EF9C (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ecff0a6ad990c549a8393105facc7083.c)
 */

__int64 __fastcall WindowWrapperBase::get_WindowProperties(
        WindowWrapperBase *this,
        struct Windows::Foundation::Collections::IPropertySet **a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  const char *v5; // r9
  __int128 v7; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct Windows::Foundation::Collections::IPropertySet **v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = a2;
  *a2 = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    *(_QWORD *)&v7 = (char *)this - 16;
    *((_QWORD *)&v7 + 1) = &v9;
    CurrentThreadId = GetCurrentThreadId();
    v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ecff0a6ad990c549a8393105facc7083___(
           v3,
           CurrentThreadId,
           &v7);
    if ( v4 < 0 )
    {
      try
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          1256LL,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
          (const char *)(unsigned int)v4);
      }
      catch ( ... )
      {
        return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                               retaddr,
                               (void *)0x4ED,
                               (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                               v5);
      }
    }
  }
  return 0LL;
}
