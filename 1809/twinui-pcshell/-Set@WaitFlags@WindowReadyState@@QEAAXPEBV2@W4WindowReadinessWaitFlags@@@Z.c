/*
 * XREFs of ?Set@WaitFlags@WindowReadyState@@QEAAXPEBV2@W4WindowReadinessWaitFlags@@@Z @ 0x18007C8B8
 * Callers:
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x180021084 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 *     _lambda_60221e79019ecf56c4402e49e3564341_::operator() @ 0x180021294 (_lambda_60221e79019ecf56c4402e49e3564341_--operator().c)
 *     ?v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180021460 (-v_OnViewVisibilityChanged@WindowWrapper@@EEAAXW4EventPhase@@W4Visibility@@@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ @ 0x180021820 (-_WaitForUnfreezeIfNecessary@WindowReadyState@@AEAAXXZ.c)
 *     ?VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z @ 0x18024E090 (-VisibilityChanged@WindowReadyState@@QEAAXW4EventPhase@@W4Visibility@@@Z.c)
 * Callees:
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@Z @ 0x18002167C (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4WindowReadinessWaitFlags@@AEAW42@@ViewManagerI.c)
 */

ULONG __fastcall WindowReadyState::WaitFlags::Set(int *a1, __int64 *a2, int a3)
{
  int v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = *a1;
  *a1 = a3 | v4;
  return ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum WindowReadinessWaitFlags const &,enum WindowReadinessWaitFlags &>(
           a2,
           &v4,
           a1);
}
