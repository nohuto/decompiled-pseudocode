/*
 * XREFs of PiClearDeviceObjectList @ 0x1406EEAAC
 * Callers:
 *     PiAllocateDeviceObjectList @ 0x1406EE9F4 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x1406EEA5C (IopFreeRelationList.c)
 *     PipGrowDeviceObjectList @ 0x14083AD2C (PipGrowDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401D1780 (memset.c)
 */

void *__fastcall PiClearDeviceObjectList(_DWORD *a1)
{
  __int64 i; // rdi
  void *result; // rax

  for ( i = 0LL; (unsigned int)i < *a1; i = (unsigned int)(i + 1) )
    ObfDereferenceObjectWithTag(*(PVOID *)&a1[6 * i + 4], 0x4C706E50u);
  result = memset(a1 + 4, 0, 24LL * (unsigned int)a1[1]);
  *a1 = 0;
  a1[2] = 0;
  return result;
}
