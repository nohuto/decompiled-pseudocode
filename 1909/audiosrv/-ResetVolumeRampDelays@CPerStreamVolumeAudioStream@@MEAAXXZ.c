/*
 * XREFs of ?ResetVolumeRampDelays@CPerStreamVolumeAudioStream@@MEAAXXZ @ 0x180049C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CPerStreamVolumeAudioStream::ResetVolumeRampDelays(CPerStreamVolumeAudioStream *this)
{
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
}
