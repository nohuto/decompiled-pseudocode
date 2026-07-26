/*
 * XREFs of ?ndisCompareProcNumInit@@_Y2INIT@@AHPEBX0@Z @ 0x1C01440B0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z @ 0x1C002BF78 (-ndisCompareProcNum@@YAHU_PROCESSOR_NUMBER@@0@Z.c)
 */

__int64 __fastcall ndisCompareProcNumInit(struct _PROCESSOR_NUMBER *a1, struct _PROCESSOR_NUMBER *a2)
{
  return ndisCompareProcNum(*a1, *a2);
}
