/*
 * XREFs of ?AddRef@CSystemAudioDeviceBase@@W7EAAKXZ @ 0x1400180E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CSystemAudioDeviceBase::AddRef()
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
