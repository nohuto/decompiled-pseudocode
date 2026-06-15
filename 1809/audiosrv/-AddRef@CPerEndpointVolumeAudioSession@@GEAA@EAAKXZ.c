/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@GEAA@EAAKXZ @ 0x180068990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 1024));
}
