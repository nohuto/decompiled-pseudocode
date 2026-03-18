/*
 * XREFs of PiClearDeviceObjectList @ 0x14073345C
 * Callers:
 *     PiAllocateDeviceObjectList @ 0x1407333A4 (PiAllocateDeviceObjectList.c)
 *     IopFreeRelationList @ 0x14073340C (IopFreeRelationList.c)
 *     PipFreeDeviceObjectList @ 0x1408751BC (PipFreeDeviceObjectList.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
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
