/*
 * XREFs of sub_1801121F0 @ 0x1801121F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySemaphore @ 0x18009F1B0 (ZwQuerySemaphore.c)
 */

__int64 __fastcall sub_1801121F0(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 >= 8 )
    return ZwQuerySemaphore();
  else
    return 3221225507LL;
}
