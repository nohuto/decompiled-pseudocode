/*
 * XREFs of CiFreeMemory @ 0x1C0004AE8
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000B590 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000C3C0 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C884 (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
