/*
 * XREFs of ?vRop2FunctionC@@YAXPEAK00K@Z @ 0x1C00B1A40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C013D380 (memmove.c)
 */

void __fastcall vRop2FunctionC(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4)
{
  memmove(a1, a3, 4 * a4);
}
