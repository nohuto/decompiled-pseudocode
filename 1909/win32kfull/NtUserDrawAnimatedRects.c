/*
 * XREFs of NtUserDrawAnimatedRects @ 0x1C022A9F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     xxxDrawAnimatedRects @ 0x1C023C0C0 (xxxDrawAnimatedRects.c)
 */

__int64 __fastcall NtUserDrawAnimatedRects(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ebx
  __int64 v5; // rcx
  struct tagWND *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v12; // [rsp+58h] [rbp-20h] BYREF
  struct tagWND *v13; // [rsp+60h] [rbp-18h]
  __int64 v14; // [rsp+68h] [rbp-10h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = 0;
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
  v12 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
  v13 = v6;
  if ( v6 )
    HMLockObject(v6);
  v4 = xxxDrawAnimatedRects(v6);
  ThreadUnlock1(v9, v8, v10);
LABEL_8:
  UserSessionSwitchLeaveCrit(v5);
  return v4;
}
