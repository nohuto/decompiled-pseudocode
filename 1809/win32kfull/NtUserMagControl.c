/*
 * XREFs of NtUserMagControl @ 0x1C02196F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     MagControl @ 0x1C01BC3DC (MagControl.c)
 */

_BOOL8 __fastcall NtUserMagControl(int a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  NTSTATUS v8; // eax
  __int64 ThreadWin32Thread; // rax
  BOOL v10; // ebx
  ULONG v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  EnterCrit(0LL, 1LL);
  if ( !a2 || (a2 = ValidateHwnd(a2)) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
    v8 = MagControl(*(_QWORD **)&gMagnContext, ThreadWin32Thread, a1, a2);
  }
  else
  {
    v8 = -1073741811;
  }
  v10 = v8 >= 0;
  if ( v8 < 0 )
  {
    v11 = RtlNtStatusToDosError(v8);
    UserSetLastError(v11, v12, v13, v14);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v10;
}
