/*
 * XREFs of NtUserSetActiveWindow @ 0x1C012E980
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C012EA54 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserSetActiveWindow(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rbx
  __int64 v6; // rcx
  struct tagWND *v7; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v5 = 0LL;
  if ( a1 )
  {
    v7 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v7 )
      goto LABEL_8;
  }
  else
  {
    v7 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
  v14 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
  v15 = v7;
  if ( v7 )
    HMLockObject(v7);
  v9 = xxxSetActiveWindow(v7);
  if ( v9 )
    v5 = *(_QWORD *)v9;
  ThreadUnlock1(v11, v10, v12);
LABEL_8:
  UserSessionSwitchLeaveCrit(v6);
  return v5;
}
