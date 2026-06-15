/*
 * XREFs of ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x180003D20
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180006A28 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180045BEC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180046998 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_ @ 0x1800B3E78 (WPP_SF_.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LastClientReferenceRemoved(CPerStreamVolumeAudioSession *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 94LL, &WPP_753fb3ff45c7308b48420cd59c2f48a5_Traceguids);
  }
  if ( *((_BYTE *)this + 1024) && (int)CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this) >= 0 )
  {
    CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  }
  return 0LL;
}
