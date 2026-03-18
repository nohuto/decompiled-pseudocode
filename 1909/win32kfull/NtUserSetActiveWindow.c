/*
 * XREFs of NtUserSetActiveWindow @ 0x1C0137620
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01376F4 (-xxxSetActiveWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserSetActiveWindow(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rbx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0LL;
  if ( a1 )
  {
    v6 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v6 )
      goto LABEL_8;
  }
  else
  {
    v6 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3);
  v13 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v13;
  v14 = v6;
  if ( v6 )
    HMLockObject(v6);
  v8 = xxxSetActiveWindow(v6);
  if ( v8 )
    v4 = *(_QWORD *)v8;
  ThreadUnlock1(v10, v9, v11);
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
