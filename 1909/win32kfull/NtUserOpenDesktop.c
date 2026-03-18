/*
 * XREFs of NtUserOpenDesktop @ 0x1C007D450
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     _OpenDesktop @ 0x1C007D4E8 (_OpenDesktop.c)
 */

__int64 __fastcall NtUserOpenDesktop(int a1, int a2, int a3)
{
  __int64 v3; // rbp
  int v7; // edx
  NTSTATUS v8; // eax
  __int64 v9; // rcx
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v8 = OpenDesktop(a1, v7, a2, a3, (__int64)&v15);
  if ( v8 < 0 )
  {
    v11 = RtlNtStatusToDosError(v8);
    UserSetLastError(v11, v12, v13, v14);
  }
  else
  {
    v3 = v15;
  }
  UserSessionSwitchLeaveCrit(v9);
  return v3;
}
