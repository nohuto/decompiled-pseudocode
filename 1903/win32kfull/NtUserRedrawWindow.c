/*
 * XREFs of NtUserRedrawWindow @ 0x1C00C3170
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C00C3908 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rcx
  struct tagWND *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // [rsp+38h] [rbp-60h] BYREF
  struct tagWND *v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h]
  __int128 v20; // [rsp+58h] [rbp-40h]

  v20 = 0uLL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  EnterCrit(0LL, 1LL);
  v10 = 0;
  if ( a1 )
  {
    v12 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v12 )
      goto LABEL_9;
  }
  else
  {
    v12 = 0LL;
  }
  v17 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v17;
  v18 = v12;
  if ( v12 )
    HMLockObject(v12);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v20 = *a2;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
    UserSetLastError(1004LL, v7, v8, v9);
  else
    v10 = xxxRedrawWindow(v12);
  ThreadUnlock1(v14, v13, v15);
LABEL_9:
  UserSessionSwitchLeaveCrit(v11);
  return v10;
}
