/*
 * XREFs of _lambda_a6a1a1620cd1726c3c4e0031d0123816_::operator() @ 0x18008ABD8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_a6a1a1620cd1726c3c4e0031d0123816___1_long_::Invoke @ 0x18008AE10 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)___ea_18008AE10.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z @ 0x180109888 (-DragCompleteWorker@CAppViewManager@@AEAAJAEBU_GUID@@UtagPOINT@@@Z.c)
 */

__int64 __fastcall lambda_a6a1a1620cd1726c3c4e0031d0123816_::operator()(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 *v3; // rcx
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rdx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct tagPOINT v12; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1[1];
  if ( v1 )
  {
    v3 = *(__int64 **)(*a1 + 192LL);
    v4 = *v3;
    if ( a1[6] )
    {
      v5 = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD))(v4 + 112))(v3, v1, a1[2]);
      if ( v5 >= 0 )
        goto LABEL_8;
      v6 = 1533LL;
    }
    else
    {
      v5 = (*(__int64 (**)(void))(v4 + 104))();
      if ( v5 >= 0 )
        goto LABEL_8;
      v6 = 1537LL;
    }
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      v6,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
  }
LABEL_8:
  if ( *((_BYTE *)a1 + 24) )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct tagPOINT *))(**(_QWORD **)(*a1 + 184LL) + 88LL))(
           *(_QWORD *)(*a1 + 184LL),
           (__int64)a1 + 28,
           &v12);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1544LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v7);
    v8 = CAppViewManager::DragCompleteWorker((CAppViewManager *)*a1, (const struct _GUID *)((char *)a1 + 28), v12);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1546LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v8);
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(**(_QWORD **)(*a1 + 184LL) + 40LL))(
           *(_QWORD *)(*a1 + 184LL),
           (__int64)a1 + 28,
           2LL,
           2LL);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        1548LL,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v9);
  }
  return 0LL;
}
