/*
 * XREFs of RaidIsDmaInitialized @ 0x1C006F210
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x1C001AC2C (RaidAdapterCompleteInitialization.c)
 *     StorPortGetUncachedExtension @ 0x1C001D7F0 (StorPortGetUncachedExtension.c)
 *     RaidInitializePerfOpts @ 0x1C0021C74 (RaidInitializePerfOpts.c)
 * Callees:
 *     <none>
 */

bool __fastcall RaidIsDmaInitialized(_QWORD *a1)
{
  return a1 && *a1 != 0LL;
}
