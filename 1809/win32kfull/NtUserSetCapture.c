/*
 * XREFs of NtUserSetCapture @ 0x1C00D0F80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     xxxSetCapture @ 0x1C00D1A24 (xxxSetCapture.c)
 */

__int64 __fastcall NtUserSetCapture(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 *v9; // rax
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
  v9 = (__int64 *)xxxSetCapture(v5);
  if ( v9 )
    v3 = *v9;
  ThreadUnlock1(v11, v10);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v2, v6, v7);
  return v3;
}
