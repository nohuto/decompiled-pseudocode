/*
 * XREFs of BiIsOfflineHandle @ 0x14016E59C
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1406E173C (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x1406E25D4 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x140711A28 (BcdCloseStore.c)
 *     BiDeleteElement @ 0x1407125BC (BiDeleteElement.c)
 *     BcdQueryObject @ 0x140712724 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x140712E44 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x140712FC0 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x140713390 (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x140713570 (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x1408F0808 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x1408F08A0 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x1408F08FC (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
