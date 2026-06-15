/*
 * XREFs of _dynamic_atexit_destructor_for__g_SpatialAudioTraceLoggingProviderRegistration__ @ 0x180070710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_SpatialAudioTraceLoggingProviderRegistration__()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = g_SpatialAudioTraceLoggingProviderRegistration;
  result = EtwEventUnregister(*(_QWORD *)(g_SpatialAudioTraceLoggingProviderRegistration + 32LL));
  *(_QWORD *)(v0 + 32) = 0LL;
  *(_DWORD *)v0 = 0;
  return result;
}
