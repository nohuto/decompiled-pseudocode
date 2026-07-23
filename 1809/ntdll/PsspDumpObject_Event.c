/*
 * XREFs of PsspDumpObject_Event @ 0x180113310
 * Callers:
 *     <none>
 * Callees:
 *     NtQueryEvent @ 0x1800A0DC0 (NtQueryEvent.c)
 */

NTSTATUS __fastcall PsspDumpObject_Event(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 >= 8 )
    return NtQueryEvent(a1, EventBasicInformation, a2, 8u, ReturnLength);
  else
    return -1073741789;
}
