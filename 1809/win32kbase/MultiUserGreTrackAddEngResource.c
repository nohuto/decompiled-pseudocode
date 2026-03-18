/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x1C002BEA0
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x1C002BF30 (GreCreateSemaphoreInternal.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 *__fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2)
{
  __int64 *result; // rax

  *(_DWORD *)(a1 + 16) = a2;
  if ( MultiUserEngAllocListLock )
    EngAcquireSemaphore(MultiUserEngAllocListLock);
  result = (__int64 *)qword_1C01D0AC0;
  if ( *(struct _LIST_ENTRY **)qword_1C01D0AC0 != &MultiUserGreEngAllocList )
    __fastfail(3u);
  *(_QWORD *)a1 = &MultiUserGreEngAllocList;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  qword_1C01D0AC0 = a1;
  if ( MultiUserEngAllocListLock )
  {
    result = (__int64 *)EtwTraceGreLockReleaseSemaphore(L"MultiUserEngAllocListLock", MultiUserEngAllocListLock);
    if ( MultiUserEngAllocListLock )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
      return (__int64 *)PsLeavePriorityRegion();
    }
  }
  return result;
}
