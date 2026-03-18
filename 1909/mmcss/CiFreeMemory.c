/*
 * XREFs of CiFreeMemory @ 0x1C0004A94
 * Callers:
 *     CiTaskIndexCreate @ 0x1C000ADC0 (CiTaskIndexCreate.c)
 *     CsTerminate @ 0x1C000C400 (CsTerminate.c)
 *     CiSystemTerminate @ 0x1C000C7DC (CiSystemTerminate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiFreeMemory(void *a1)
{
  ExFreePoolWithTag(a1, 0);
}
