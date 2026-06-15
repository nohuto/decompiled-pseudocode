/*
 * XREFs of ?Release@CSystemAudioDeviceBase@@WBA@EAAKXZ @ 0x1400180F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CSystemAudioDeviceBase::Release()
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
