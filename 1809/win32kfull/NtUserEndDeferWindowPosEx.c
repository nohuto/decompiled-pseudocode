/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C0111960
 * Callers:
 *     <none>
 * Callees:
 *     xxxEndDeferWindowPosEx @ 0x1C0038714 (xxxEndDeferWindowPosEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 4;
  v5 = HMValidateHandle(a1, v4);
  v10 = 0;
  v11 = v5;
  if ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL, v6, v8, v9);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
      v16[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v16;
      v16[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v10 = xxxEndDeferWindowPosEx((struct tagSMWP *)v11, a2);
      ThreadUnlock1(v14, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
