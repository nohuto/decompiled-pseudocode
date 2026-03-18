/*
 * XREFs of NtUserSetCursorContents @ 0x1C021C530
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     ?zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z @ 0x1C015DC24 (-zzzSetCursorContents@@YA_NPEAUtagCURSOR@@0@Z.c)
 */

__int64 __fastcall NtUserSetCursorContents(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rdi
  struct tagCURSOR *v12; // rsi
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[5]; // [rsp+20h] [rbp-28h] BYREF

  EnterCrit(0LL, 1LL);
  LOBYTE(v4) = 3;
  v5 = HMValidateHandle(a1, v4);
  v10 = 0LL;
  v11 = v5;
  if ( v5 )
  {
    LOBYTE(v6) = 3;
    v12 = (struct tagCURSOR *)HMValidateHandle(a2, v6);
    if ( v12 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
      v17[0] = *(_QWORD *)(ThreadWin32Thread + 416);
      *(_QWORD *)(ThreadWin32Thread + 416) = v17;
      v17[1] = v11;
      _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
      v10 = (unsigned __int8)zzzSetCursorContents((struct tagCURSOR *)v11, v12);
      ThreadUnlock1(v15, v14);
    }
  }
  UserSessionSwitchLeaveCrit(v7, v6, v8, v9);
  return v10;
}
