/*
 * XREFs of ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C00F82C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001D7B4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall CleanUpRegion(struct REGION *a1)
{
  REGION::vDeleteREGION(a1);
}
