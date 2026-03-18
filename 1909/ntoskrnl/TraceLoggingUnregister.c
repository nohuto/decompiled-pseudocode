/*
 * XREFs of TraceLoggingUnregister @ 0x14084088C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8468 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x140749F60 (EtwUnregister.c)
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EtwUnregister(hProvider->RegHandle);
  hProvider->RegHandle = 0LL;
  hProvider->LevelPlus1 = 0;
}
