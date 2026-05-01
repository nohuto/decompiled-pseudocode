/*
 * XREFs of _lambda_ea27fc5d667820da3627d864690b6295_::operator() @ 0x18007B394
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ea27fc5d667820da3627d864690b6295___::Run @ 0x18007B370 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_ea27fc5d667820da3627d864690b6295___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ea27fc5d667820da3627d864690b6295_::operator()(_QWORD *a1)
{
  int v2; // eax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  try
  {
    v2 = (*(__int64 (**)(void))(**(_QWORD **)(*a1 + 304LL) + 48LL))();
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x189,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v2,
        -2);
      JUMPOUT(0x180116AD8LL);
    }
    *(_OWORD *)(*a1 + 724LL) = *(_OWORD *)a1[1];
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x18C,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v3);
  }
  return result;
}
