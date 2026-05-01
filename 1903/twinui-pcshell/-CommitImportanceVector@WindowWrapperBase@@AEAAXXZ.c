/*
 * XREFs of ?CommitImportanceVector@WindowWrapperBase@@AEAAXXZ @ 0x180033E18
 * Callers:
 *     ?ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ @ 0x180033A20 (-ApproveWinRtActivation@WindowWrapperBase@@UEAAXXZ.c)
 *     _lambda_896972b7315e759534395e3cb0475917_::operator() @ 0x180033AD4 (_lambda_896972b7315e759534395e3cb0475917_--operator().c)
 *     _lambda_583260ce1dd6aa3aeb3daffdf12db906_::operator() @ 0x180033B94 (_lambda_583260ce1dd6aa3aeb3daffdf12db906_--operator().c)
 *     _lambda_6de305bf0e82d4681d226044ba439afd_::operator() @ 0x180071034 (_lambda_6de305bf0e82d4681d226044ba439afd_--operator().c)
 *     _lambda_4482569c7df9e5f85482c026bf60758d_::operator() @ 0x1800785B4 (_lambda_4482569c7df9e5f85482c026bf60758d_--operator().c)
 *     _lambda_de77c7beb7f3c417f64632c7b20f3eef_::operator() @ 0x180078AB4 (_lambda_de77c7beb7f3c417f64632c7b20f3eef_--operator().c)
 * Callees:
 *     ?CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800362F8 (-CommitImportanceVector_@ViewManagerInteropTraceLogging@@QEAAXKAEBT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     atexit @ 0x18008753C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Create@ViewManagerInteropTraceLogging@@IEAAXXZ @ 0x180297714 (-Create@ViewManagerInteropTraceLogging@@IEAAXXZ.c)
 */

void __fastcall WindowWrapperBase::CommitImportanceVector(WindowWrapperBase *this)
{
  const union _RM_ACTIVITY_IMPORTANCE *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  ViewManagerInteropTraceLogging *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  WINBOOL fPending; // [rsp+50h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+10h] BYREF

  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 208LL))(*((_QWORD *)this + 36));
  if ( !*((_BYTE *)this + 568) )
  {
    v2 = (WindowWrapperBase *)((char *)this + 260);
    if ( *((_DWORD *)this + 66) != *((_DWORD *)this + 65) )
    {
      v3 = *((_QWORD *)this + 13);
      if ( v3 )
      {
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 88LL))(v3);
        if ( v4 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xBA4,
            (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
            (const char *)(unsigned int)v4,
            -2);
        *((_DWORD *)this + 66) = *(_DWORD *)v2;
        v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 288LL))((char *)this + 16);
        Context = 0LL;
        if ( InitOnceBeginInitialize(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, &fPending, &Context)
          && fPending )
        {
          Context = qword_180599F00;
          qword_180599F00[0] = &IamTraceLogging::`vftable';
          atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
          ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_180599F00);
          InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_180599F00);
        }
        v6 = (_DWORD *)*((_QWORD *)Context + 1);
        if ( v6 && *v6 )
        {
          Context = 0LL;
          if ( InitOnceBeginInitialize(
                 &`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper,
                 0,
                 &fPending,
                 &Context) )
          {
            if ( fPending )
            {
              Context = qword_180599F00;
              qword_180599F00[0] = &IamTraceLogging::`vftable';
              atexit(lambda_1807517bb2a601749b2ae4fbbb57858f_::_lambda_invoker_cdecl_);
              ViewManagerInteropTraceLogging::Create((ViewManagerInteropTraceLogging *)qword_180599F00);
              InitOnceComplete(&`ViewManagerInteropTraceLogging::Instance'::`2'::wrapper, 0, qword_180599F00);
            }
          }
          ViewManagerInteropTraceLogging::CommitImportanceVector_(v7, v5, v2);
        }
      }
    }
  }
}
