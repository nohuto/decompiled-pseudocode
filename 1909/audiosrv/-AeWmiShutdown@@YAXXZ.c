/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x180111F24
 * Callers:
 *     DllMain @ 0x180067C84 (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_18014D020);
    qword_18014D020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
