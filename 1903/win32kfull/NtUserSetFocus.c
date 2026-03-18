/*
 * XREFs of NtUserSetFocus @ 0x1C0013AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0013B80 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserSetFocus(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  struct tagWND *v4; // rdi
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  struct tagWND *v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v2 = 0LL;
  if ( a1 )
  {
    v4 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v4 )
      goto LABEL_8;
  }
  else
  {
    v4 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v11 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
  v12 = v4;
  if ( v4 )
    HMLockObject(v4);
  v6 = xxxSetFocus(v4);
  if ( v6 )
    v2 = *(_QWORD *)v6;
  ThreadUnlock1(v8, v7, v9);
LABEL_8:
  UserSessionSwitchLeaveCrit(v3);
  return v2;
}
