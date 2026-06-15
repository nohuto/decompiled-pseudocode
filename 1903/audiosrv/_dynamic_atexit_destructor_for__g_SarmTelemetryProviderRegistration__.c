/*
 * XREFs of _dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__ @ 0x180073B70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_atexit_destructor_for__g_SarmTelemetryProviderRegistration__()
{
  __int64 v0; // rbx
  __int64 result; // rax

  v0 = g_SarmTelemetryProviderRegistration;
  result = EtwEventUnregister(*(_QWORD *)(g_SarmTelemetryProviderRegistration + 32LL));
  *(_QWORD *)(v0 + 32) = 0LL;
  *(_DWORD *)v0 = 0;
  return result;
}
