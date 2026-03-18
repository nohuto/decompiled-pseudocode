/*
 * XREFs of NtUserSetFocus @ 0x1C00CDFF0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ?xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00CE0A8 (-xxxSetFocus@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

__int64 __fastcall NtUserSetFocus(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagWND *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  v3 = 0LL;
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_8;
  }
  else
  {
    v5 = 0LL;
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
  v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v13;
  v13[1] = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v9 = xxxSetFocus((struct tagWND *)v5);
  if ( v9 )
    v3 = *(_QWORD *)v9;
  ThreadUnlock1(v11, v10);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v2, v6, v7);
  return v3;
}
