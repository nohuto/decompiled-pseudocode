/*
 * XREFs of BiIsSynchFirmwareEntries @ 0x140177990
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140728B98 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x14073BB4C (BcdCloseStore.c)
 * Callees:
 *     <none>
 */

bool __fastcall BiIsSynchFirmwareEntries(char a1)
{
  return (a1 & 2) == 0;
}
