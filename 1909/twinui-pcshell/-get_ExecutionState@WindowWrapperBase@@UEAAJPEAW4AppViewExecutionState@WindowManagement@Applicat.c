/*
 * XREFs of ?get_ExecutionState@WindowWrapperBase@@UEAAJPEAW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x1802C7A90
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WindowWrapperBase::get_ExecutionState(
        WindowWrapperBase *this,
        enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = *((_QWORD *)this + 34);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 216LL))(v4);
    *(_DWORD *)a2 = 0;
    v5 = *((_QWORD *)this + 11);
    if ( !v5 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1421LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)0x80070490LL);
    v6 = (*(__int64 (__fastcall **)(__int64, enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState *))(*(_QWORD *)v5 + 112LL))(
           v5,
           a2);
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        1422LL,
        (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x591,
                           (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v7);
  }
  return result;
}
