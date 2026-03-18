/*
 * XREFs of NtAddDriverEntry @ 0x140910E50
 * Callers:
 *     <none>
 * Callees:
 *     ExpSetDriverEntry @ 0x14090F718 (ExpSetDriverEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall NtAddDriverEntry(PEFI_DRIVER_ENTRY BootEntry, ULONG Id)
{
  if ( dword_1404324F0 == 2 )
    return ExpSetDriverEntry(1, BootEntry, *(unsigned __int64 *)&Id);
  else
    return -1073741822;
}
