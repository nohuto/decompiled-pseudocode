/*
 * XREFs of ?v_CloseRequestedAsync@WindowWrapper@@EEAAXPEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18024DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapper::v_CloseRequestedAsync(__int64 a1)
{
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 600) + 480LL))(*(_QWORD *)(a1 + 600));
  if ( (int)result < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      375LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapper.cpp",
      (const char *)(unsigned int)result);
    __debugbreak();
  }
  return result;
}
