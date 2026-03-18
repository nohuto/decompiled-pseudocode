/*
 * XREFs of NtUserValidateRect @ 0x1C01062C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxValidateRect @ 0x1C01063F4 (xxxValidateRect.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserValidateRect(__int64 a1, __int128 *a2)
{
  __int128 *v2; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int128 *v14; // [rsp+28h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-40h] BYREF
  __int64 v16; // [rsp+40h] [rbp-38h]
  __int64 v17; // [rsp+48h] [rbp-30h]
  __int128 v18; // [rsp+58h] [rbp-20h] BYREF

  v2 = a2;
  v14 = a2;
  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0uLL;
  EnterCrit(0LL, 1LL);
  v6 = 0;
  if ( v2 )
  {
    if ( (unsigned __int64)v2 >= MmUserProbeAddress )
      v2 = (__int128 *)MmUserProbeAddress;
    v18 = *v2;
    v14 = &v18;
  }
  if ( a1 )
  {
    v8 = ValidateHwnd(a1);
    if ( !v8 )
      goto LABEL_10;
  }
  else
  {
    v8 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5);
  v15 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
  v16 = v8;
  if ( v8 )
    HMLockObject(v8);
  v6 = xxxValidateRect(v8, v14);
  ThreadUnlock1(v11, v10, v12);
LABEL_10:
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
