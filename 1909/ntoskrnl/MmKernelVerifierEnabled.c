/*
 * XREFs of MmKernelVerifierEnabled @ 0x1402BF234
 * Callers:
 *     VeAllocatePoolWithTagPriority @ 0x140971F50 (VeAllocatePoolWithTagPriority.c)
 *     VerifierExFreePool @ 0x1409727F0 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140972840 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     <none>
 */

__int64 MmKernelVerifierEnabled()
{
  return ((unsigned __int8)MiFlags >> 1) & 1;
}
