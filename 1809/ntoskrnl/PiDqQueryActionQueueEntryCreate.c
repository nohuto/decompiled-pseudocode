/*
 * XREFs of PiDqQueryActionQueueEntryCreate @ 0x14059272C
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x1405912D0 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryEnumObject @ 0x140596674 (PiDqQueryEnumObject.c)
 *     PiDqQueryApplyObjectEvent @ 0x1406F8B18 (PiDqQueryApplyObjectEvent.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqQueryActionQueueEntryCreate(int a1, __int64 a2, volatile signed __int32 *a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x58706E50u);
  *a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[8] = a1;
    *((_QWORD *)PoolWithTag + 2) = a2;
    if ( a2 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
      PoolWithTag = (_DWORD *)*a4;
    }
    *((_QWORD *)PoolWithTag + 3) = a3;
    if ( a3 )
      _InterlockedIncrement(a3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
