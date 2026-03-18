/*
 * XREFs of TraceLoggingUnregister @ 0x1408079A8
 * Callers:
 *     VrpRegistryUnload @ 0x1408081D0 (VrpRegistryUnload.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x140707390 (EtwUnregister.c)
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EtwUnregister(hProvider->RegHandle);
  hProvider->RegHandle = 0LL;
  hProvider->LevelPlus1 = 0;
}
