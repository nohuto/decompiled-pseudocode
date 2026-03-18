/*
 * XREFs of NtUserOpenThreadDesktop @ 0x1C0232240
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _OpenThreadDesktop @ 0x1C01EADE0 (_OpenThreadDesktop.c)
 */

struct _OBJECT_HANDLE_INFORMATION __fastcall NtUserOpenThreadDesktop(unsigned int a1, char a2, int a3, int a4)
{
  struct _OBJECT_HANDLE_INFORMATION v4; // r14
  NTSTATUS v9; // eax
  __int64 v10; // rcx
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  struct _OBJECT_HANDLE_INFORMATION v16; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = OpenThreadDesktop(a1, a2, a3, a4, (HANDLE *)&v16);
  if ( v9 >= 0 )
  {
    v4 = v16;
  }
  else
  {
    v11 = RtlNtStatusToDosError(v9);
    UserSetLastError(v11, v12, v13, v14);
  }
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
