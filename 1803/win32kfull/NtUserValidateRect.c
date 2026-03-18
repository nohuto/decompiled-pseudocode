/*
 * XREFs of NtUserValidateRect @ 0x1C01030D0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     xxxValidateRect @ 0x1C01031D0 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rdi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 *v15; // [rsp+28h] [rbp-50h]
  _QWORD v16[3]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v17; // [rsp+58h] [rbp-20h] BYREF

  v2 = a2;
  v15 = a2;
  EnterCrit(0LL, 1LL);
  v5 = 0;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (__int128 *)MmUserProbeAddress;
    v17 = *v2;
    v15 = &v17;
  }
  if ( a1 )
  {
    v7 = ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_10;
  }
  else
  {
    v7 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
  v16[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v16;
  v16[1] = v7;
  if ( v7 )
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
  v5 = xxxValidateRect(v7, v15);
  ThreadUnlock1(v12, v11, v13);
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v4, v8, v9);
  return v5;
}
