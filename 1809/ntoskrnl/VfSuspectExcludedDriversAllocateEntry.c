/*
 * XREFs of VfSuspectExcludedDriversAllocateEntry @ 0x140938D20
 * Callers:
 *     VfSuspectDriversParseRegistryString @ 0x1409F9948 (VfSuspectDriversParseRegistryString.c)
 *     VfXdvExcludeParseRegistryString @ 0x1409F9B04 (VfXdvExcludeParseRegistryString.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall VfSuspectExcludedDriversAllocateEntry(unsigned __int16 *a1, ULONG a2)
{
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx
  size_t v5; // r8
  const void *v6; // rdx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, a1[1] + 32LL, a2);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    v5 = *a1;
    PoolWithTag[9] = a1[1];
    v6 = (const void *)*((_QWORD *)a1 + 1);
    *((_QWORD *)PoolWithTag + 3) = PoolWithTag + 16;
    PoolWithTag[8] = v5;
    memmove(PoolWithTag + 16, v6, v5);
  }
  return v4;
}
