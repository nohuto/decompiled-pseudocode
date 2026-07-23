/*
 * XREFs of sub_180112080 @ 0x180112080
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryEvent @ 0x18009D1A0 (ZwQueryEvent.c)
 */

NTSTATUS __fastcall sub_180112080(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 >= 8 )
    return ZwQueryEvent(a1, EventBasicInformation, a2, 8u, ReturnLength);
  else
    return -1073741789;
}
