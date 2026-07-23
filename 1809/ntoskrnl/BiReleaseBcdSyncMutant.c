/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x140714D70
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E29BC (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1406E3854 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140712CA8 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140713508 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x1407139A4 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1407140C4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140714240 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407147F0 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1408A4354 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x1408F1AA8 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1408F1B40 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1408F1B9C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1401B86F0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
