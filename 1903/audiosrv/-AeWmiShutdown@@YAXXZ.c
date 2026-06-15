/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x180112424
 * Callers:
 *     DllMain @ 0x180066C34 (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_18014E020);
    qword_18014E020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
