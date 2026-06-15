/*
 * XREFs of ?AeWmiShutdown@@YAXXZ @ 0x1801046A4
 * Callers:
 *     DllMain @ 0x180063BBC (DllMain.c)
 * Callees:
 *     <none>
 */

void AeWmiShutdown(void)
{
  if ( g_fEventTracingEnabled )
  {
    EtwUnregisterTraceGuids(qword_180149020);
    qword_180149020 = 0LL;
    g_hAEWMITraceHandle = 0LL;
  }
}
