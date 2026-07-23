/*
 * XREFs of sub_1801121F0 @ 0x1801121F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQuerySemaphore @ 0x18009F1B0 (ZwQuerySemaphore.c)
 */

NTSTATUS __fastcall sub_1801121F0(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 >= 8 )
    return ZwQuerySemaphore(a1, SemaphoreBasicInformation, a2, 8u, ReturnLength);
  else
    return -1073741789;
}
