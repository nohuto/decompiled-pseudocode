/*
 * XREFs of BiIsOfflineHandle @ 0x140177A94
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140728B98 (BcdForciblyUnloadStore.c)
 *     BcdFlushStore @ 0x140729D54 (BcdFlushStore.c)
 *     BcdCloseStore @ 0x14073BB4C (BcdCloseStore.c)
 *     BiDeleteElement @ 0x14073C8D8 (BiDeleteElement.c)
 *     BcdQueryObject @ 0x14073CA40 (BcdQueryObject.c)
 *     BcdOpenObject @ 0x14073D18C (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14073D318 (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14073D8EC (BcdGetElementDataWithFlags.c)
 *     BcdCreateObject @ 0x14092E478 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14092E510 (BcdDeleteObject.c)
 *     BcdEnumerateObjects @ 0x14092E56C (BcdEnumerateObjects.c)
 * Callees:
 *     <none>
 */

char __fastcall BiIsOfflineHandle(char a1)
{
  return a1 & 1;
}
