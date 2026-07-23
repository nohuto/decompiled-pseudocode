/*
 * XREFs of IopAllocateErrorLogEntry @ 0x14016CC8C
 * Callers:
 *     IoAllocateErrorLogEntry @ 0x14016CC50 (IoAllocateErrorLogEntry.c)
 *     IoAllocateGenericErrorLogEntry @ 0x1402830C8 (IoAllocateGenericErrorLogEntry.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall IopAllocateErrorLogEntry(PVOID Object, PVOID a2, char a3)
{
  unsigned int v5; // ebx
  _WORD *PoolWithTag; // rdi
  _WORD *result; // rax

  if ( (unsigned __int8)(a3 - 48) > 0xC0u )
    return 0LL;
  v5 = ((a3 + 7) & 0xF8) + 48;
  if ( (unsigned int)_InterlockedExchangeAdd(&IopErrorLogAllocation, v5) > 0x64000
    || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x72456F49u)) == 0LL )
  {
    _InterlockedExchangeAdd(&IopErrorLogAllocation, -v5);
    return 0LL;
  }
  if ( Object )
    ObfReferenceObjectWithTag(Object, 0x746C6644u);
  if ( a2 )
    ObfReferenceObjectWithTag(a2, 0x746C6644u);
  memset(PoolWithTag, 0, v5);
  PoolWithTag[1] = v5;
  *PoolWithTag = 11;
  result = PoolWithTag + 24;
  *((_QWORD *)PoolWithTag + 3) = Object;
  *((_QWORD *)PoolWithTag + 4) = a2;
  return result;
}
