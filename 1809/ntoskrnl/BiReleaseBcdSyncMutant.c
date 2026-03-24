/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x140713AD0
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E171C (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1406E25B4 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140711A08 (BcdCloseStore.c)
 *     BcdOpenStore @ 0x140712268 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14071259C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140712704 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140712E24 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FA0 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140713370 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713550 (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1408A30F4 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x1408F07E8 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1408F0880 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1408F08DC (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1401B8590 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
