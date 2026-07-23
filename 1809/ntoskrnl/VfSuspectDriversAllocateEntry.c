/*
 * XREFs of VfSuspectDriversAllocateEntry @ 0x1409384B4
 * Callers:
 *     VfDriverEnableVerifierForAll @ 0x140929018 (VfDriverEnableVerifierForAll.c)
 *     VfSuspectDriversLoadCallback @ 0x1409387A4 (VfSuspectDriversLoadCallback.c)
 *     VfAddVerifierEntry @ 0x14094B814 (VfAddVerifierEntry.c)
 *     VfTriageAddDrivers @ 0x1409F94EC (VfTriageAddDrivers.c)
 *     VfSuspectDriversParseRegistryString @ 0x1409F9948 (VfSuspectDriversParseRegistryString.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall VfSuspectDriversAllocateEntry(const void **a1)
{
  _DWORD *PoolWithTag; // rax
  _DWORD *v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, *((unsigned __int16 *)a1 + 1) + 40LL, 0x44536656u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[4] = 0;
    PoolWithTag[5] = 0;
    *((_QWORD *)PoolWithTag + 4) = PoolWithTag + 10;
    *((_WORD *)PoolWithTag + 12) = *(_WORD *)a1;
    *((_WORD *)PoolWithTag + 13) = *((_WORD *)a1 + 1);
    memmove(PoolWithTag + 10, a1[1], *(unsigned __int16 *)a1);
  }
  return v3;
}
