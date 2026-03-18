/*
 * XREFs of UserSetLastStatus @ 0x1C0165E98
 * Callers:
 *     NtUserGetPrecisionTouchPadConfiguration @ 0x1C0002CA0 (NtUserGetPrecisionTouchPadConfiguration.c)
 *     NtUserGetDpiForMonitor @ 0x1C0013A20 (NtUserGetDpiForMonitor.c)
 *     NtUserSetPrecisionTouchPadConfiguration @ 0x1C00F1DB0 (NtUserSetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall UserSetLastStatus(NTSTATUS Status)
{
  NTSTATUS v2; // ebx
  struct _NT_TIB *result; // rax
  __int64 v4; // rcx
  ULONG v5; // eax

  if ( (Status & 0x1FFF0000) == 0x3F0000 || (Status & 0x1FFF0000) == 0x3E0000 )
  {
    v2 = 0;
    if ( Status < 0 )
      v2 = -1073741823;
  }
  else
  {
    v2 = Status;
  }
  result = (struct _NT_TIB *)KeIsAttachedProcess();
  if ( !(_BYTE)result )
  {
    LODWORD(KeGetPcr()->NtTib.Self[83].ArbitraryUserPointer) = Status;
    if ( PsGetCurrentProcessWow64Process(v4) )
      HIDWORD(KeGetPcr()->NtTib.Self[200].Self) = Status;
    v5 = RtlNtStatusToDosError(v2);
    return UserSetLastError(v5);
  }
  return result;
}
