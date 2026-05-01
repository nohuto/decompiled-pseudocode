/*
 * XREFs of ?FinishSwipe@MultitaskingViewGestureHandler@@UEAAJHHHHI@Z @ 0x1803646E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z @ 0x180364800 (-GetMultitaskingViewState@MultitaskingViewGestureHandler@@AEBAJPEAUMultitaskingViewState@1@@Z.c)
 *     ?ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewState@1@I@Z @ 0x180364B78 (-ProcessGestureInput@MultitaskingViewGestureHandler@@AEAAJW4GestureState@@AEBUMultitaskingViewSt.c)
 */

__int64 __fastcall MultitaskingViewGestureHandler::FinishSwipe(
        MultitaskingViewGestureHandler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  int MultitaskingViewState; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 6) + 24LL))(*((_QWORD *)this + 6), 3LL);
  HIDWORD(v12) = 0;
  LOBYTE(v12) = 0;
  MultitaskingViewState = MultitaskingViewGestureHandler::GetMultitaskingViewState(
                            (MultitaskingViewGestureHandler *)((char *)this - 8),
                            (struct MultitaskingViewGestureHandler::MultitaskingViewState *)&v12);
  if ( MultitaskingViewState < 0 )
  {
    v8 = 205LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingviewgesturehandler.cpp",
      (const char *)(unsigned int)MultitaskingViewState);
    goto LABEL_6;
  }
  MultitaskingViewState = MultitaskingViewGestureHandler::ProcessGestureInput((char *)this - 8, 3LL, &v12, a6);
  if ( MultitaskingViewState < 0 )
  {
    v8 = 207LL;
    goto LABEL_5;
  }
LABEL_6:
  v9 = *((_QWORD *)this + 6);
  v12 = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 24LL))(v9, 0LL);
  *((_QWORD *)this + 14) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *(_QWORD *)((char *)this + 100) = 0LL;
  return 0LL;
}
