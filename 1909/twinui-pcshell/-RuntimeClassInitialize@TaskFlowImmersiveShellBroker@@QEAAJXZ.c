/*
 * XREFs of ?RuntimeClassInitialize@TaskFlowImmersiveShellBroker@@QEAAJXZ @ 0x180214508
 * Callers:
 *     ??$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18020D4CC (--$MakeAndInitialize@VTaskFlowImmersiveShellBroker@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEA.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1801354D4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::RuntimeClassInitialize(TaskFlowImmersiveShellBroker *this)
{
  CImmersiveShellComponent *v1; // rdi
  int v2; // ebx
  __int64 v3; // rdx
  int v5[4]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+30h] [rbp-28h]
  __int64 v7; // [rsp+38h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (TaskFlowImmersiveShellBroker *)((char *)this + 80);
  *(_OWORD *)v5 = *(_OWORD *)&SID_TaskFlowImmersiveShellBroker.Revision;
  v6 = 0LL;
  v7 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (TaskFlowImmersiveShellBroker *)((char *)this + 80),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  if ( v2 < 0 )
  {
    v3 = 54LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v6 = 0LL;
  *(_OWORD *)v5 = *(_OWORD *)&SID_TaskFlowUserActivityMonitor.Revision;
  v7 = 0LL;
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         v1,
         (const struct CImmersiveShellComponent::ISC_SERVICE *)v5,
         1LL);
  if ( v2 < 0 )
  {
    v3 = 56LL;
    goto LABEL_3;
  }
  return 0LL;
}
