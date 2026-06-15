/*
 * XREFs of ?GetSessionMute@CPerStreamVolumeAudioStream@@UEAA_NXZ @ 0x180043360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CPerStreamVolumeAudioStream::GetSessionMute(CPerStreamVolumeAudioStream *this)
{
  return *((_BYTE *)this + 440);
}
