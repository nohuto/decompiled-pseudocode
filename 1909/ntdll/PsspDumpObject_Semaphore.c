/*
 * XREFs of PsspDumpObject_Semaphore @ 0x180112320
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySemaphore @ 0x18009F960 (ZwQuerySemaphore.c)
 */

__int64 __fastcall PsspDumpObject_Semaphore(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 >= 8 )
    return ZwQuerySemaphore();
  else
    return 3221225507LL;
}
