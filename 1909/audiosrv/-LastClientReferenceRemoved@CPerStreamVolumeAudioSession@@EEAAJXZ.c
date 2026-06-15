/*
 * XREFs of ?LastClientReferenceRemoved@CPerStreamVolumeAudioSession@@EEAAJXZ @ 0x18003D5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18003D848 (-OpenSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004DDBC (-CloseSessionPropertyStore@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x18004E950 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     WPP_SF_ @ 0x1800C2170 (WPP_SF_.c)
 */

__int64 __fastcall CPerStreamVolumeAudioSession::LastClientReferenceRemoved(CPerStreamVolumeAudioSession *this)
{
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 94LL, &WPP_7f1ef5860f2032d8a1536e1a5abdceb7_Traceguids);
  }
  if ( *((_BYTE *)this + 984) && (int)CPerStreamVolumeAudioSession::OpenSessionPropertyStore(this) >= 0 )
  {
    CPerStreamVolumeAudioSession::PersistSessionConfiguration(this);
    CPerStreamVolumeAudioSession::CloseSessionPropertyStore(this);
  }
  return 0LL;
}
