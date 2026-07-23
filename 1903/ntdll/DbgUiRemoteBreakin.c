/*
 * XREFs of DbgUiRemoteBreakin @ 0x1800CD280
 * Callers:
 *     <none>
 * Callees:
 *     RtlExitUserThread @ 0x18006D500 (RtlExitUserThread.c)
 *     DbgBreakPoint @ 0x1800A0120 (DbgBreakPoint.c)
 */

void __cdecl __noreturn DbgUiRemoteBreakin(PVOID Context)
{
  if ( (NtCurrentPeb()->BeingDebugged || (MEMORY[0x7FFE02D4] & 2) != 0) && (NtCurrentTeb()->SameTebFlags & 0x20) == 0 )
  {
    if ( dword_180165428 )
    {
      if ( qword_18017A260 )
        qword_18017A260(Context);
    }
    DbgBreakPoint();
  }
  RtlExitUserThread(0);
}
