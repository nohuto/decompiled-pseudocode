/*
 * XREFs of ?AddRef@CPerEndpointVolumeAudioSession@@GDNI@EAAKXZ @ 0x18006BA00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerEndpointVolumeAudioSession::AddRef(__int64 a1)
{
  return CAudioSession::AddRef((CAudioSession *)(a1 - 984));
}
