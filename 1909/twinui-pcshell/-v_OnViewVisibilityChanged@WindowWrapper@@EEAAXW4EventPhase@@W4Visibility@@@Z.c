/*
 * XREFs of ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18001DC00
 * Callers:
 *     <none>
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18001E258 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x18001E3BC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x18001E3F4 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18001ED6C (-Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 */

void __fastcall WindowWrapper::v_OnViewVisibilityChanged(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  char v4; // di
  __int64 v5; // rcx
  char v6; // bp
  __int64 v7; // r8
  int v8; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1 + 368;
  v4 = 1;
  if ( !*(_QWORD *)(a1 + 368) )
  {
    v5 = a1 + 376;
    goto LABEL_3;
  }
  v5 = a1 + 376;
  if ( *(_DWORD *)(v3 + 8) )
  {
LABEL_3:
    v6 = 0;
    goto LABEL_4;
  }
  v6 = 1;
LABEL_4:
  if ( a3 != 1 )
  {
    if ( !(_DWORD)a2 )
      goto LABEL_10;
    v7 = 1LL;
    goto LABEL_9;
  }
  if ( !(_DWORD)a2 )
  {
    if ( *(_BYTE *)(v3 + 24) )
    {
      v5 = v3 + 8;
      if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
      {
        v7 = 2LL;
LABEL_9:
        WindowReadyState::WaitFlags::Set(v5, v3, v7);
      }
    }
LABEL_10:
    if ( *(_QWORD *)v3 && !*(_DWORD *)(v3 + 8) )
      goto LABEL_13;
    goto LABEL_12;
  }
  v8 = *(_DWORD *)(v3 + 8);
  *(_DWORD *)(v3 + 8) = v8 & 0xFFFFFFFE;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
    v3,
    &v8,
    v3 + 8);
  if ( *(_QWORD *)v3 )
  {
    if ( !*(_DWORD *)(v3 + 8) )
      WindowReadyState::_WaitForUnfreezeIfNecessary((WindowReadyState *)v3);
    goto LABEL_10;
  }
LABEL_12:
  v4 = 0;
LABEL_13:
  if ( v6 != v4 )
  {
    LOBYTE(a2) = v4;
    std::_Func_class<void,bool>::operator()(v3 + 40, a2);
  }
}
