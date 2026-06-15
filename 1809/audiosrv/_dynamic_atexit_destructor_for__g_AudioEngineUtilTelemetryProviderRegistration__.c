/*
 * XREFs of _dynamic_atexit_destructor_for__g_AudioEngineUtilTelemetryProviderRegistration__ @ 0x180070740
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_AudioEngineUtilTelemetryProviderRegistration__()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = g_AudioEngineUtilTelemetryProviderRegistration;
  result = EtwEventUnregister(*(_QWORD *)(g_AudioEngineUtilTelemetryProviderRegistration + 32LL));
  *(_QWORD *)(v0 + 32) = 0LL;
  *(_DWORD *)v0 = 0;
  return result;
}
