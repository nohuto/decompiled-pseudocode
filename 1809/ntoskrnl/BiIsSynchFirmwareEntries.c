/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x14016E78C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E29BC (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x140712CA8 (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
