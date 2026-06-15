/*
 * XREFs of __scrt_initialize_mta @ 0x1400164D4
 * Callers:
 *     pre_c_initialization @ 0x1400157E0 (pre_c_initialization.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 _scrt_initialize_mta(void)
{
  return CSystemAudioDeviceOffloadGraph::UpdateRegistry();
}
