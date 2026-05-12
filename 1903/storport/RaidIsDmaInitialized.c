/*
 * XREFs of RaidIsDmaInitialized @ 0x1C006FBD4
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C001A4B0 (RaidAdapterCompleteInitialization.c)
 *     RaidInitializePerfOpts @ 0x1C0021ADC (RaidInitializePerfOpts.c)
 *     StorPortGetUncachedExtension @ 0x1C0021F10 (StorPortGetUncachedExtension.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
