/*
 * XREFs of NtUserRedrawWindow @ 0x1C002A700
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C002AA30 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  __int128 *v5; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  _QWORD v18[3]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v19; // [rsp+58h] [rbp-40h]

  v5 = a2;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( a1 )
  {
    v12 = ValidateHwnd(a1);
    if ( !v12 )
      goto LABEL_9;
  }
  else
  {
    v12 = 0LL;
  }
  v18[0] = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = v18;
  v18[1] = v12;
  if ( v12 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    v5 = a2;
  }
  if ( v5 )
  {
    if ( (unsigned __int64)v5 >= MmUserProbeAddress )
      v5 = (__int128 *)MmUserProbeAddress;
    v19 = *v5;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
    UserSetLastError(1004LL);
  else
    v7 = xxxRedrawWindow((struct tagWND *)v12);
  ThreadUnlock1(v14, v13, v15);
LABEL_9:
  UserSessionSwitchLeaveCrit(v9, v8, v10, v11);
  return v7;
}
