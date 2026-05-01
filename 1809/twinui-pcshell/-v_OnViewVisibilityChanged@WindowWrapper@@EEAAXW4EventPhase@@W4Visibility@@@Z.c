/*
 * XREFs of ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180021460
 * Callers:
 *     <none>
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18002167C (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1800217E8 (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180021820 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18007C8B8 (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall WindowWrapper::v_OnViewVisibilityChanged(__int64 a1, __int64 a2, int a3)
{
  WindowReadyState *v3; // rdi
  int *v4; // rbx
  char v5; // si
  char v6; // bp
  int v7; // eax
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = (WindowReadyState *)(a1 + 360);
  v4 = (int *)(a1 + 368);
  v5 = 1;
  v6 = *(_QWORD *)(a1 + 360) && !*v4;
  if ( a3 != 1 )
  {
    if ( (_DWORD)a2 )
      WindowReadyState::WaitFlags::Set(a1 + 368, a1 + 360, 1LL);
LABEL_9:
    if ( *(_QWORD *)v3 && !*v4 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( !(_DWORD)a2 )
  {
    if ( *(_BYTE *)(a1 + 384) )
    {
      v7 = *v4;
      if ( (*v4 & 1) != 0 )
      {
        v8 = *v4;
        *v4 = v7 | 2;
        ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
          v3,
          &v8,
          a1 + 368);
      }
    }
    goto LABEL_9;
  }
  v8 = *v4;
  *v4 = v8 & 0xFFFFFFFE;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    v3,
    &v8,
    a1 + 368);
  if ( *(_QWORD *)v3 )
  {
    if ( !*v4 )
      WindowReadyState::_WaitForUnfreezeIfNecessary(v3);
    goto LABEL_9;
  }
LABEL_11:
  v5 = 0;
LABEL_12:
  if ( v6 != v5 )
  {
    LOBYTE(a2) = v5;
    std::_Func_class<void,bool>::operator()((char *)v3 + 40, a2);
  }
}
