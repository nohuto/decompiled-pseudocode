/*
 * XREFs of TraceLoggingUnregister @ 0x140807988
 * Callers:
 *     VrpRegistryUnload @ 0x1408081B0 (VrpRegistryUnload.c)
 *     IopInitializePlugPlayServices @ 0x1409C7608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     EtwUnregister @ 0x140707370 (EtwUnregister.c)
 */

void __stdcall TraceLoggingUnregister(TraceLoggingHProvider hProvider)
{
  EtwUnregister(hProvider->RegHandle);
  hProvider->RegHandle = 0LL;
  hProvider->LevelPlus1 = 0;
}
