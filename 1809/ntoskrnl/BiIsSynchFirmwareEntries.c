/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14016E66C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E173C (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x140711A28 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
