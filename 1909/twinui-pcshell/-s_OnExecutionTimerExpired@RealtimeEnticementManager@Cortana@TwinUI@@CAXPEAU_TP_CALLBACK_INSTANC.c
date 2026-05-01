/*
 * XREFs of ?s_OnExecutionTimerExpired@RealtimeEnticementManager@Cortana@TwinUI@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1801F3230
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007560C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ @ 0x1801F2A70 (-InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ.c)
 */

void __fastcall TwinUI::Cortana::RealtimeEnticementManager::s_OnExecutionTimerExpired(
        PTP_CALLBACK_INSTANCE Instance,
        RTL_SRWLOCK *Context,
        PTP_TIMER Timer)
{
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( Context )
  {
    v4 = TwinUI::Cortana::RealtimeEnticementManager::InvokeAppToAppServiceEnticement((TwinUI::Cortana::RealtimeEnticementManager *)Context);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x70,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\realtimeenticementmanager.cpp",
        (const char *)(unsigned int)v4);
    AcquireSRWLockExclusive(Context + 1);
    LOBYTE(Context[2].Ptr) = 0;
    if ( Context != (RTL_SRWLOCK *)-8LL )
      ReleaseSRWLockExclusive(Context + 1);
  }
}
