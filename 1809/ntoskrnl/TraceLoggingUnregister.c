/*
 * XREFs of TraceLoggingUnregister @ 0x140808B88
 * Callers:
 *     VrpRegistryUnload @ 0x1408093B0 (VrpRegistryUnload.c)
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x140708610 (EtwUnregister.c)
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EtwUnregister(hProvider->RegHandle);
  hProvider->RegHandle = 0LL;
  hProvider->LevelPlus1 = 0;
}
