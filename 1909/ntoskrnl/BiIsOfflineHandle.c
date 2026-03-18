/*
 * XREFs of BiIsOfflineHandle @ 0x140178184
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140729F08 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x14072B0C4 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14073DA4C (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14073E7D8 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14073E940 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14073F08C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073F218 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14073F60C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073F7EC (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14092DEEC (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092DF84 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14092DFE0 (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
