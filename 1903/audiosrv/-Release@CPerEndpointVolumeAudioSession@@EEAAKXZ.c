/*
 * XREFs of ?Release@CPerEndpointVolumeAudioSession@@EEAAKXZ @ 0x1800D11A0
 * Callers:
 *     ?Release@CPerEndpointVolumeAudioSession@@G7EAAKXZ @ 0x18006BAF0 (-Release@CPerEndpointVolumeAudioSession@@G7EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GBA@EAAKXZ @ 0x18006BB00 (-Release@CPerEndpointVolumeAudioSession@@GBA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GBI@EAAKXZ @ 0x18006BB10 (-Release@CPerEndpointVolumeAudioSession@@GBI@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GCA@EAAKXZ @ 0x18006BB20 (-Release@CPerEndpointVolumeAudioSession@@GCA@EAAKXZ.c)
 *     ?Release@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ @ 0x18006BB30 (-Release@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::Release(CPerEndpointVolumeAudioSession *this)
{
  return CUnknown::Release((CPerEndpointVolumeAudioSession *)((char *)this + 32));
}
