/*
 * XREFs of ?OnPersistState@CMuteSoftware@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800C4430
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1800C3AB8 (WPP_SF_q.c)
 */

void __fastcall CMuteSoftware::OnPersistState(
        struct _TP_CALLBACK_INSTANCE *a1,
        CMuteSoftware *a2,
        struct _TP_TIMER *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x4000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_9e0545d7d13c389699541bbc01b3c0a4_Traceguids, a2);
  }
  CMuteSoftware::PersistMuteState(a2);
}
