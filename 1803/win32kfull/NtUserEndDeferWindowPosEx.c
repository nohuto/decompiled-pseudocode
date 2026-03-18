/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C00140D0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     xxxEndDeferWindowPosEx @ 0x1C0026608 (xxxEndDeferWindowPosEx.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // ebx
  __int64 v9; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD v15[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 4;
  v3 = HMValidateHandle(a1, v2);
  v8 = 0;
  v9 = v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = v15;
      v15[1] = v9;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      v8 = xxxEndDeferWindowPosEx((struct tagSMWP *)v9);
      ThreadUnlock1(v12, v11, v13);
    }
  }
  UserSessionSwitchLeaveCrit(v5, v4, v6, v7);
  return v8;
}
