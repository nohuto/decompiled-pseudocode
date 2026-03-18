/*
 * XREFs of zzzMoveShadow @ 0x1C0222CF8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C003839C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0079E2C (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rcx
  struct tagSHADOW *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+50h] [rbp-28h] BYREF
  struct tagPOINT v10; // [rsp+88h] [rbp+10h] BYREF

  result = FindShadow(a1);
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v10 = *(struct tagPOINT *)(v4 + 88);
    v5 = *((_QWORD *)result + 1);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v9;
    v9[1] = v5;
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    zzzUpdateLayeredWindow(*((struct tagWND **)v3 + 1), 0LL, &v10, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)ThreadUnlock1(v8, v7);
  }
  return result;
}
