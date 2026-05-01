/*
 * XREFs of ?SetWindow@WindowReadyState@@QEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180021160
 * Callers:
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18001ED38 (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 *     _lambda_70dfa9c1db30439d8f324967aa0bddeb_::operator() @ 0x18006C774 (_lambda_70dfa9c1db30439d8f324967aa0bddeb_--operator().c)
 *     ?WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z @ 0x180245790 (-WindowCreated@ViewWrapperBase@@UEAAXPEAUHWND__@@W4WindowCreatedType@@@Z.c)
 *     ?WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z @ 0x180245910 (-WindowDestroyed@ViewWrapperBase@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18002167C (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800217E8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180021820 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

void __fastcall WindowReadyState::SetWindow(__int64 a1, HWND a2, int a3)
{
  char v6; // di
  char v7; // bp
  int *v8; // rsi
  __int64 v9; // rdx
  unsigned int PropW; // eax
  int v11; // eax
  int v12; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-40h] BYREF

  v6 = 1;
  v7 = *(_QWORD *)a1 && !*(_DWORD *)(a1 + 8);
  v8 = (int *)(a1 + 8);
  *(_QWORD *)a1 = a2;
  v12 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = v12 & 0xFFFFFFF1;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    a1,
    &v12,
    a1 + 8);
  if ( a2 )
  {
    PropW = (unsigned int)GetPropW(a2, L"CoreWindowResizeManager_ShouldWaitForLayoutCompletion");
    *(_BYTE *)(a1 + 24) = PropW == 1;
    if ( PropW == 1 && a3 != 1 )
    {
      v12 = *v8;
      *v8 = v12 | 2;
      ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
        a1,
        &v12,
        v8);
    }
    Rect = 0LL;
    GetWindowRect(a2, &Rect);
    v11 = Rect.right - Rect.left;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 28) = v11;
    *(_DWORD *)(a1 + 32) = Rect.bottom - Rect.top;
    WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)a1);
  }
  if ( !*(_QWORD *)a1 || *v8 )
    v6 = 0;
  if ( v6 != v7 )
  {
    LOBYTE(v9) = v6;
    std::_Func_class<void,bool>::operator()(a1 + 40, v9);
  }
}
