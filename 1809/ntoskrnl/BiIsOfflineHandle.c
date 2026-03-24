/*
 * XREFs of BiIsOfflineHandle @ 0x14016E5BC
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E171C (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1406E25B4 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140711A08 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14071259C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140712704 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140712E24 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FA0 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140713370 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713550 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1408F07E8 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1408F0880 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1408F08DC (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
