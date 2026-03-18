/*
 * XREFs of NtUserMagControl @ 0x1C0230F40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     MagControl @ 0x1C01CFE8C (MagControl.c)
 */

__int64 __fastcall NtUserMagControl(int a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  NTSTATUS v7; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rcx
  ULONG v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  v4 = 1LL;
  EnterCrit(0LL, 1LL);
  if ( a2 )
  {
    a2 = ValidateHwnd(a2);
    if ( !a2 )
    {
      v7 = -1073741811;
LABEL_5:
      v4 = 0LL;
      v10 = RtlNtStatusToDosError(v7);
      UserSetLastError(v10, v11, v12, v13);
      goto LABEL_6;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6);
  v7 = MagControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, a1, a2);
  if ( v7 < 0 )
    goto LABEL_5;
LABEL_6:
  UserSessionSwitchLeaveCrit(v9);
  return v4;
}
