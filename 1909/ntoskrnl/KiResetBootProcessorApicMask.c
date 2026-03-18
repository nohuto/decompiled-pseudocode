/*
 * XREFs of KiResetBootProcessorApicMask @ 0x14087DEE4
 * Callers:
 *     KeStartAllProcessors @ 0x1409EDC20 (KeStartAllProcessors.c)
 * Callees:
 *     <none>
 */

__int64 KiResetBootProcessorApicMask()
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(KiProcessorBlock[0] + 142);
  *(_DWORD *)(KiProcessorBlock[0] + 220) = -(result * *(unsigned __int8 *)(KiProcessorBlock[0] + 143));
  return result;
}
