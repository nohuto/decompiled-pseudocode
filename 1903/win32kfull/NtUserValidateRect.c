/*
 * XREFs of NtUserValidateRect @ 0x1C012B2F0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     xxxValidateRect @ 0x1C012B424 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 *v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  __int64 v18; // [rsp+48h] [rbp-30h]
  __int128 v19; // [rsp+58h] [rbp-20h] BYREF

  v2 = a2;
  v15 = a2;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0uLL;
  EnterCrit(0LL, 1LL);
  v7 = 0;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (__int128 *)MmUserProbeAddress;
    v19 = *v2;
    v15 = &v19;
  }
  if ( a1 )
  {
    v9 = ValidateHwnd(a1);
    if ( !v9 )
      goto LABEL_10;
  }
  else
  {
    v9 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  v16 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
  v17 = v9;
  if ( v9 )
    HMLockObject(v9);
  v7 = xxxValidateRect(v9, v15);
  ThreadUnlock1(v12, v11, v13);
LABEL_10:
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
