/*
 * XREFs of NtUserMagControl @ 0x1C0231560
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     MagControl @ 0x1C01D001C (MagControl.c)
 */

__int64 __fastcall NtUserMagControl(int a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rcx
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( a2 )
  {
    a2 = ValidateHwnd(a2);
    if ( !a2 )
    {
      v8 = -1073741811;
LABEL_5:
      v4 = 0LL;
      v11 = RtlNtStatusToDosError(v8);
      UserSetLastError(v11, v12, v13, v14);
      goto LABEL_6;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6, v7);
  v8 = MagControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, a1, a2);
  if ( v8 < 0 )
    goto LABEL_5;
LABEL_6:
  UserSessionSwitchLeaveCrit(v10);
  return v4;
}
