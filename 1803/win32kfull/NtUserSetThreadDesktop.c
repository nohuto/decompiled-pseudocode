/*
 * XREFs of NtUserSetThreadDesktop @ 0x1C000EA20
 * Callers:
 *     <none>
 * Callees:
 *     xxxSetThreadDesktop @ 0x1C000EEA8 (xxxSetThreadDesktop.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserSetThreadDesktop(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rcx
  NTSTATUS v5; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  ULONG v9; // eax
  __int64 CurrentProcess; // rax
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 1;
  v5 = ValidateHdesk(a1, v2, 0LL, &Object);
  if ( v5 < 0 )
  {
    if ( a1 || (CurrentProcess = PsGetCurrentProcess(v4, v3), v4 = gpepCSRSS, CurrentProcess != gpepCSRSS) )
    {
      LODWORD(a1) = 0;
    }
    else
    {
      v5 = xxxSetThreadDesktop(0LL, 0LL);
      LOBYTE(a1) = v5 >= 0;
    }
  }
  else
  {
    v5 = xxxSetThreadDesktop(a1, Object);
    LODWORD(a1) = v5 >= 0;
    ObfDereferenceObject(Object);
  }
  if ( v5 < 0 )
  {
    v9 = RtlNtStatusToDosError(v5);
    UserSetLastError(v9);
  }
  UserSessionSwitchLeaveCrit(v4, v3, v6, v7);
  return (unsigned int)a1;
}
