/*
 * XREFs of ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C0122620
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C001A16C (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall CleanUpRegion(struct REGION *a1)
{
  REGION::vDeleteREGION(a1);
}
