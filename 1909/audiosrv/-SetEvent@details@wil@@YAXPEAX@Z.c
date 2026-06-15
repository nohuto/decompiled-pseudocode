/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18002CB78
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x18002CAAC (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?CloseAudioHandle@CAudioStream@@QEAAJXZ @ 0x1800D9BAC (-CloseAudioHandle@CAudioStream@@QEAAJXZ.c)
 *     ?ProcessWorkItem@CWorkFifo@@AEAAXXZ @ 0x180120D28 (-ProcessWorkItem@CWorkFifo@@AEAAXXZ.c)
 *     ?Shutdown@CWorkFifo@@QEAAXXZ @ 0x180122140 (-Shutdown@CWorkFifo@@QEAAXXZ.c)
 *     ?TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180122180 (-TimerCallback@CWorkFifo@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800BC9F8 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x8E6, v2, v3);
    __debugbreak();
  }
}
