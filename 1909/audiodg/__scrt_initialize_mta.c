/*
 * XREFs of __scrt_initialize_mta @ 0x1400168E4
 * Callers:
 *     pre_c_initialization @ 0x140015BF0 (pre_c_initialization.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 _scrt_initialize_mta(void)
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
