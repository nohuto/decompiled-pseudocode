/*
 * XREFs of NtUserEndDeferWindowPosEx @ 0x1C00224F0
 * Callers:
 *     <none>
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     xxxEndDeferWindowPosEx @ 0x1C00702A0 (xxxEndDeferWindowPosEx.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserEndDeferWindowPosEx(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ebx
  struct tagSMWP *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  struct tagSMWP *v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  LOBYTE(v2) = 4;
  v3 = HMValidateHandle(a1, v2);
  v5 = 0;
  v6 = (struct tagSMWP *)v3;
  if ( v3 )
  {
    if ( (*(_DWORD *)(v3 + 24) & 4) != 0 )
    {
      UserSetLastError(1405LL);
    }
    else
    {
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      v12 = *(_QWORD *)(ThreadWin32Thread + 408);
      *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
      v13 = v6;
      HMLockObject(v6);
      v5 = xxxEndDeferWindowPosEx(v6);
      ThreadUnlock1(v9, v8, v10);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
