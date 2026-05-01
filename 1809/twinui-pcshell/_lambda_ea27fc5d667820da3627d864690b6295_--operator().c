/*
 * XREFs of _lambda_ea27fc5d667820da3627d864690b6295_::operator() @ 0x180075244
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_ea27fc5d667820da3627d864690b6295___::Run @ 0x180075220 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_ea27fc5d667820da3627d864690b6295___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_ea27fc5d667820da3627d864690b6295_::operator()(_QWORD *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(*a1 + 296LL);
  try
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 48LL))(v2);
    if ( v3 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x189,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
        (const char *)(unsigned int)v3,
        -2);
      JUMPOUT(0x1800D7AC4LL);
    }
    *(_OWORD *)(*a1 + 708LL) = *(_OWORD *)a1[1];
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x18C,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
                           v4);
  }
  return result;
}
