/*
 * XREFs of ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180035490
 * Callers:
 *     ?WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180033910 (-WindowDiscoveredFromShellHook@WindowWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 *     _lambda_88a6f648851480fde846e948b133eaba_::operator() @ 0x180047834 (_lambda_88a6f648851480fde846e948b133eaba_--operator().c)
 * Callees:
 *     ?PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z @ 0x180033964 (-PushZbidToWindow@WindowWrapperBase@@AEAAXW4ZBID@@@Z.c)
 *     ?ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ @ 0x180033D5C (-ReconcileSessionIdleTaskCompletion@WindowWrapperBase@@AEAAXXZ.c)
 *     ?NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1@@Z @ 0x180033F50 (-NotifyGlobalComponentsForWindowStateChange@WindowWrapperBase@@AEAAXPEAUHWND__@@W4WindowChange@1.c)
 *     Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_68891fd7acf34f77316d42659bd39f51___ @ 0x180034148 (Windows--Internal--ComTaskPool--RunSynchronousTaskOnMTA__lambda_68891fd7acf34f77316d42659bd39f51.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x1800359E8 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x180035B4C (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180035B84 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x18003604C (-PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall WindowWrapperBase::SetWindowId(WindowWrapperBase *a1, int a2, int a3)
{
  HWND v3; // rbx
  __int64 v5; // rcx
  const char *v6; // r9
  int v7; // r12d
  _QWORD *v8; // rdi
  int v9; // esi
  int v10; // eax
  int *v11; // r15
  __int64 v12; // rdx
  unsigned int PropW; // eax
  bool v14; // zf
  DWORD CurrentThreadId; // eax
  unsigned int v16; // ecx
  int v17; // eax
  unsigned __int64 i; // r15
  __int64 v19; // rcx
  unsigned int v20; // edi
  const WCHAR *StringRawBuffer; // rax
  int v22; // [rsp+20h] [rbp-58h]
  int v23; // [rsp+24h] [rbp-54h] BYREF
  _QWORD v24[2]; // [rsp+28h] [rbp-50h] BYREF
  struct tagRECT Rect; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v24[1] = -2LL;
  LODWORD(v24[0]) = a3;
  v3 = (HWND)a2;
  v5 = *((_QWORD *)a1 + 36);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 208LL))(v5);
    v7 = *((_DWORD *)a1 + 76);
    if ( (_DWORD)v3 != v7 )
    {
      *((_DWORD *)a1 + 76) = (_DWORD)v3;
      v8 = (_QWORD *)((char *)a1 + 368);
      v9 = 0;
      v10 = *((_DWORD *)a1 + 94);
      if ( !*((_QWORD *)a1 + 46) || (LOBYTE(v22) = 1, v10) )
        LOBYTE(v22) = 0;
      *v8 = v3;
      v11 = (int *)((char *)a1 + 376);
      v23 = v10;
      *((_DWORD *)a1 + 94) = v10 & 0xFFFFFFF1;
      ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
        (char *)a1 + 368,
        &v23,
        (char *)a1 + 376);
      if ( (_DWORD)v3 )
      {
        PropW = (unsigned int)GetPropW(v3, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion");
        *((_BYTE *)a1 + 392) = PropW == 1;
        if ( PropW == 1 )
        {
          v23 = *v11;
          *v11 = v23 | 2;
          ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
            (char *)a1 + 368,
            &v23,
            (char *)a1 + 376);
        }
        Rect = 0LL;
        GetWindowRect(v3, &Rect);
        *((_DWORD *)a1 + 99) = Rect.right - Rect.left;
        *((_DWORD *)a1 + 100) = Rect.bottom - Rect.top;
        *((_QWORD *)a1 + 48) = 0LL;
        WindowReadyState::_WaitForUnfreezeIfNecessary((WindowWrapperBase *)((char *)a1 + 368));
      }
      if ( !*v8 || (LOBYTE(v12) = 1, *v11) )
        LOBYTE(v12) = 0;
      if ( (_BYTE)v12 != (_BYTE)v22 )
        std::_Func_class<void,bool>::operator()((char *)a1 + 408, v12);
      v14 = (_DWORD)v3 == 0;
      if ( (_DWORD)v3 )
      {
        (*(void (__fastcall **)(WindowWrapperBase *, _QWORD))(*(_QWORD *)a1 + 168LL))(a1, 0LL);
        if ( LODWORD(v24[0]) != 1 )
        {
          WindowWrapperBase::PushZbidToWindow((__int64)a1, *((_DWORD *)a1 + 129));
          WindowWrapperBase::PushBoundsToWindow(a1, 3LL);
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a1 + 36) + 216LL))(*((_QWORD *)a1 + 36));
          if ( *((_DWORD *)a1 + 76) )
          {
            v24[0] = a1;
            CurrentThreadId = GetCurrentThreadId();
            v17 = Windows::Internal::ComTaskPool::RunSynchronousTaskOnMTA__lambda_68891fd7acf34f77316d42659bd39f51___(
                    v16,
                    CurrentThreadId,
                    v24);
            if ( v17 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xB8C,
                (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
                (const char *)(unsigned int)v17,
                v22);
          }
          for ( i = 0LL; i < *((_QWORD *)a1 + 27); ++i )
          {
            v19 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 8 * i);
            v20 = *(_DWORD *)(v19 + 16);
            StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v19 + 8), 0LL);
            SetPropW(v3, StringRawBuffer, (HANDLE)v20);
          }
        }
        v14 = (_DWORD)v3 == 0;
      }
      if ( !v14 )
        v7 = (int)v3;
      LOBYTE(v9) = (_DWORD)v3 == 0;
      WindowWrapperBase::NotifyGlobalComponentsForWindowStateChange((__int64)a1, v7, v9);
      WindowWrapperBase::ReconcileSessionIdleTaskCompletion(a1);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x677,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowwrapperbase.cpp",
      v6);
  }
}
