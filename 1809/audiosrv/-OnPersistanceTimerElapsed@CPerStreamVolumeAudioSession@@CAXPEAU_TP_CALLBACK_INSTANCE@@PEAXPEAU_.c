/*
 * XREFs of ?OnPersistanceTimerElapsed@CPerStreamVolumeAudioSession@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800C1C10
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180010F4C (-StopSessionPersistanceTimer@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180045BEC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180046998 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_S @ 0x1800B3ED8 (WPP_SF_S.c)
 */

void __fastcall CPerStreamVolumeAudioSession::OnPersistanceTimerElapsed(
        struct _TP_CALLBACK_INSTANCE *a1,
        const wchar_t **a2,
        struct _TP_WORK *a3)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x74u,
      (__int64)&WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids,
      a2[96]);
  }
  if ( a2[140] )
  {
    CPerStreamVolumeAudioSession::StopSessionPersistanceTimer((CPerStreamVolumeAudioSession *)a2);
    CPerStreamVolumeAudioSession::PersistSessionConfiguration((CPerStreamVolumeAudioSession *)a2);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore((CPerStreamVolumeAudioSession *)a2);
  }
  CUnknown::Release((CUnknown *)(a2 + 4));
}
