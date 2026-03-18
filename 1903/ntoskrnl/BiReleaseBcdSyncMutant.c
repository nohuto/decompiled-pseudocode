/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x14073DE94
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140728B98 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x140729D54 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14073BB4C (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14073C588 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14073C8D8 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14073CA40 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14073D18C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073D318 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1408E1A14 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14092E478 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092E510 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14092E56C (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1401C04D0 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
