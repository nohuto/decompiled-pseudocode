/*
 * XREFs of MultiUserGreTrackAddEngResource @ 0x1C0010900
 * Callers:
 *     GreCreateSemaphoreInternal @ 0x1C0010864 (GreCreateSemaphoreInternal.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 */

__int64 *__fastcall MultiUserGreTrackAddEngResource(__int64 a1, int a2)
{
  __int64 *result; // rax

  *(_DWORD *)(a1 + 16) = a2;
  if ( MultiUserEngAllocListLock )
    EngAcquireSemaphore(MultiUserEngAllocListLock);
  result = (__int64 *)qword_1C0215748;
  if ( *(struct _LIST_ENTRY **)qword_1C0215748 != &MultiUserGreEngAllocList )
    __fastfail(3u);
  *(_QWORD *)a1 = &MultiUserGreEngAllocList;
  *(_QWORD *)(a1 + 8) = result;
  *result = a1;
  qword_1C0215748 = a1;
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
