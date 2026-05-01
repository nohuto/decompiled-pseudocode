/*
 * XREFs of ?SetSize@WindowWrapperBase@@UEAAJUSize@Foundation@Windows@@@Z @ 0x180250FF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6___ @ 0x18024EEB8 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6.c)
 */

__int64 __fastcall WindowWrapperBase::SetSize(__int64 a1, __int64 a2)
{
  DWORD CurrentThreadId; // eax
  unsigned int v3; // ecx
  int v4; // eax
  const char *v5; // r9
  __int64 result; // rax
  _QWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v7[1] = -2LL;
  v7[0] = a2;
  *(_QWORD *)&v8 = a1 - 8;
  *((_QWORD *)&v8 + 1) = v7;
  CurrentThreadId = GetCurrentThreadId();
  v4 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_ce5d3d3f20d65dfcfb2bf58c8cf013b6___(
         v3,
         CurrentThreadId,
         &v8);
  try
  {
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        352LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x164,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v5);
  }
  return result;
}
