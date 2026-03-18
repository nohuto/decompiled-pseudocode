/*
 * XREFs of ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C0282390
 * Callers:
 *     <none>
 * Callees:
 *     ?vSynchronizeDriver@@YAXK@Z @ 0x1C00551FC (-vSynchronizeDriver@@YAXK@Z.c)
 */

void __fastcall GreSynchronizeTimer(void *a1)
{
  vSynchronizeDriver(128);
}
