/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1C02131E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     xxxDrawAnimatedRects @ 0x1C022426C (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v12[3]; // [rsp+58h] [rbp-20h] BYREF

  EnterCrit(0LL, 1LL);
  v3 = 0;
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
  v12[0] = *(_QWORD *)(ThreadWin32Thread + 416);
  *(_QWORD *)(ThreadWin32Thread + 416) = v12;
  v12[1] = v5;
  if ( v5 )
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
  v3 = xxxDrawAnimatedRects((struct tagWND *)v5);
  ThreadUnlock1(v10, v9);
LABEL_8:
  UserSessionSwitchLeaveCrit(v4, v2, v6, v7);
  return v3;
}
