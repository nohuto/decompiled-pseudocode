/*
 * XREFs of ?HandleShellHook@WindowReadyState@@QEAAX_K@Z @ 0x1802A43F4
 * Callers:
 *     ?HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z @ 0x180298470 (-HandlePresentationReadinessChange@ViewWrapperBase@@UEAAX_K@Z.c)
 * Callees:
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x180035B4C (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180035B84 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x180035BD8 (-Clear@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z.c)
 *     ??$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEA_K@Z @ 0x18006A488 (--$WindowReadiness_PendingPositionRemoved@AEBQEAUHWND__@@AEA_K@ViewManagerInteropTraceLogging@@S.c)
 *     ??$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@SAXAEAPEAUHWND__@@@Z @ 0x1802A42DC (--$WindowReadiness_ExtraPositionAcknowledgment@AEAPEAUHWND__@@@ViewManagerInteropTraceLogging@@S.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x1802A44A8 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 */

void __fastcall WindowReadyState::HandleShellHook(WindowReadyState *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  int *v4; // rcx
  int v5; // r8d
  _QWORD *v6; // rdi
  __int64 v7; // rax
  HWND *v8; // rcx
  char IsReadyForPresentation; // al

  if ( WindowReadyState::IsReadyForPresentation(this) )
    return;
  switch ( v2 )
  {
    case 31LL:
      v6 = (_QWORD *)(v3 + 16);
      v7 = *(_QWORD *)(v3 + 16);
      if ( v7 )
      {
        *v6 = v7 - 1;
        ViewManagerInteropTraceLogging::WindowReadiness_PendingPositionRemoved<HWND__ * const &,unsigned __int64 &>(
          (__int64 *)v3,
          (int *)(v3 + 16));
        if ( !*v6 )
        {
          v4 = (int *)((char *)this + 8);
          v5 = 8;
          goto LABEL_11;
        }
      }
      else
      {
        ViewManagerInteropTraceLogging::WindowReadiness_ExtraPositionAcknowledgment<HWND__ * &>((__int64 *)v3);
      }
      break;
    case 36LL:
      v4 = (int *)(v3 + 8);
      v5 = 4;
      goto LABEL_11;
    case 38LL:
      v4 = (int *)(v3 + 8);
      v5 = 2;
LABEL_11:
      WindowReadyState::WaitFlags::Clear(v4, (__int64 *)this, v5);
      break;
  }
  if ( WindowReadyState::IsReadyForPresentation(this) )
    WindowReadyState::_WaitForUnfreezeIfNecessary(v8);
  IsReadyForPresentation = WindowReadyState::IsReadyForPresentation(this);
  if ( IsReadyForPresentation )
    std::_Func_class<void,bool>::operator()((__int64)this + 40, IsReadyForPresentation);
}
