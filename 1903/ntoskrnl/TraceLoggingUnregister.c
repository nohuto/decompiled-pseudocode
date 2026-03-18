/*
 * XREFs of TraceLoggingUnregister @ 0x14084122C
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409F8558 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x140748060 (EtwUnregister.c)
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EtwUnregister(hProvider->RegHandle);
  hProvider->RegHandle = 0LL;
  hProvider->LevelPlus1 = 0;
}
