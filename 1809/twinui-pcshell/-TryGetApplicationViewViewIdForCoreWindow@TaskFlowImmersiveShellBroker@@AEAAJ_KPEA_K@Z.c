/*
 * XREFs of ?TryGetApplicationViewViewIdForCoreWindow@TaskFlowImmersiveShellBroker@@AEAAJ_KPEA_K@Z @ 0x180056804
 * Callers:
 *     _lambda_dd556f8d7e16306f6186687681faffc7_::operator() @ 0x180056478 (_lambda_dd556f8d7e16306f6186687681faffc7_--operator().c)
 *     _lambda_1bf264e3837c966d4f3511d8e1ed533c_::operator() @ 0x1800566D0 (_lambda_1bf264e3837c966d4f3511d8e1ed533c_--operator().c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180039C30 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TaskFlowImmersiveShellBroker::TryGetApplicationViewViewIdForCoreWindow(
        TaskFlowImmersiveShellBroker *this,
        __int64 a2,
        unsigned __int64 *a3)
{
  __int64 v4; // rcx
  int v5; // eax
  struct IApplicationView *v6; // rdx
  const char *v7; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a3 = 0LL;
  v4 = *((_QWORD *)this + 35);
  try
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
    if ( v5 != -2147319765 )
    {
      if ( v5 < 0 )
      {
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x2BB,
          (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
          (const char *)(unsigned int)v5,
          -2);
        JUMPOUT(0x1800CCDECLL);
      }
      *a3 = ApplicationViewHelpers::GetWindowForView(0LL, v6);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x2C2,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v7);
  }
  return result;
}
