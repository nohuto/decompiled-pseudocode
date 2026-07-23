/*
 * XREFs of BiIsOfflineHandle @ 0x14016E6BC
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E29BC (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1406E3854 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140712CA8 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14071383C (BiDeleteElement.c)
 *     BcdQueryObject @ 0x1407139A4 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x1407140C4 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140714240 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140714610 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x1407147F0 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1408F1AA8 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1408F1B40 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1408F1B9C (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
