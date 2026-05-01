/*
 * XREFs of ?GetViewActiveActivityManager@TaskFlowImmersiveShellBroker@@UEAAJPEAPEAUIViewActiveActivityManager@Activities@Data@Internal@Windows@@@Z @ 0x1801A9F60
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800891F8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A8BAC (-EnsureViewActiveActivityManager@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::GetViewActiveActivityManager(
        struct Windows::Internal::Data::Activities::IViewActiveActivityManager **this,
        struct Windows::Internal::Data::Activities::IViewActiveActivityManager **a2,
        __int64 a3)
{
  int active; // eax
  const char *v6; // r9
  struct Windows::Internal::Data::Activities::IViewActiveActivityManager *v7; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a2 = 0LL;
  active = TaskFlowImmersiveShellBroker::EnsureViewActiveActivityManager(
             (TaskFlowImmersiveShellBroker *)this,
             (__int64)a2,
             a3);
  try
  {
    if ( active < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        374LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)active);
    v7 = this[30];
    if ( v7 )
    {
      *a2 = v7;
      (*(void (__fastcall **)(struct Windows::Internal::Data::Activities::IViewActiveActivityManager *))(*(_QWORD *)v7 + 8LL))(v7);
    }
    else
    {
      *a2 = 0LL;
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x17B,
                           (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
                           v6);
  }
  return result;
}
