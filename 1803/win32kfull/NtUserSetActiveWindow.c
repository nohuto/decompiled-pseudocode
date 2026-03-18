/*
 * XREFs of NtUserSetActiveWindow @ 0x1C0100D80
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxSetActiveWindow @ 0x1C0100E20 (xxxSetActiveWindow.c)
 */

__int64 __fastcall NtUserSetActiveWindow(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 *active; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

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
  v14[0] = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = v14;
  v14[1] = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  active = (__int64 *)xxxSetActiveWindow(v5);
  if ( active )
    v3 = *active;
  ThreadUnlock1(v11, v10, v12);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v2, v6, v7);
  return v3;
}
