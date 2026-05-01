/*
 * XREFs of _lambda_adb4202210a1cd7d97551f2a3dbe735b_::operator() @ 0x180076A54
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_adb4202210a1cd7d97551f2a3dbe735b___::Run @ 0x180076A30 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_adb4202210a1cd7d97551f2a3dbe735b___--.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E934 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppView@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800A85EC (--$query@UIAppViewPreview@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UIApp.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_adb4202210a1cd7d97551f2a3dbe735b_::operator()(__int64 a1)
{
  int v2; // eax
  const char *v3; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h]

  try
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppView,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewPreview>();
    v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v6 + 72LL))(
           v6,
           **(_QWORD **)(a1 + 8),
           **(_QWORD **)(a1 + 16));
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x57C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
        (const char *)(unsigned int)v2,
        -2);
      JUMPOUT(0x180115382LL);
    }
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x57E,
                           (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                           v3);
  }
  return result;
}
