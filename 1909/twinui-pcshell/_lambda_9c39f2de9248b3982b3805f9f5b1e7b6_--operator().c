/*
 * XREFs of _lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::operator() @ 0x18014DA70
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_9c39f2de9248b3982b3805f9f5b1e7b6___1_long_::Invoke @ 0x180150900 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_180150900.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x18014F0C8 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall lambda_9c39f2de9248b3982b3805f9f5b1e7b6_::operator()(_QWORD *a1)
{
  __int64 v1; // rdx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct tagPOINT v9; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1[1];
  if ( v1 )
  {
    if ( a1[6] )
    {
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*a1 + 192LL) + 120LL))(
             *(_QWORD *)(*a1 + 192LL),
             v1,
             a1[2]);
      if ( v3 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5EC,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v3);
    }
  }
  if ( *((_BYTE *)a1 + 24) )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct tagPOINT *))(**(_QWORD **)(*a1 + 184LL) + 88LL))(
           *(_QWORD *)(*a1 + 184LL),
           (__int64)a1 + 28,
           &v9);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F2,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = CAppViewManager::DragCompleteWorker((CAppViewManager *)*a1, (const struct _GUID *)((char *)a1 + 28), v9);
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F4,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v5);
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(*a1 + 184LL) + 40LL))(
           *(_QWORD *)(*a1 + 184LL),
           (__int64)a1 + 28,
           2LL,
           2LL);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F6,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v6);
  }
  return 0LL;
}
