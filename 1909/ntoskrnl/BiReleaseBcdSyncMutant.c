/*
 * XREFs of BiReleaseBcdSyncMutant @ 0x14073FD94
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140729F08 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14072B0C4 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14073DA4C (BcdCloseStore.c)
 *     BcdOpenStore @ 0x14073E488 (BcdOpenStore.c)
 *     BiDeleteElement @ 0x14073E7D8 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14073E940 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073F7EC (BcdGetElementDataWithFlags.c)
 *     SepSecureBootCorrectBcd @ 0x1408E1314 (SepSecureBootCorrectBcd.c)
 *     BcdCreateObject @ 0x14092DEEC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092DF84 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14092DFE0 (BcdEnumerateObjects.c)
 * Callees:
 *     ZwReleaseMutant @ 0x1401C1050 (ZwReleaseMutant.c)
 */

NTSTATUS __fastcall BiReleaseBcdSyncMutant(char a1)
{
  NTSTATUS result; // eax

  if ( !a1 && BcdMutantHandle != (HANDLE)-1LL )
    return ZwReleaseMutant(BcdMutantHandle, 0LL);
  return result;
}
