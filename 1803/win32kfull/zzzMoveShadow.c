/*
 * XREFs of zzzMoveShadow @ 0x1C01FAD2C
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C0026C8C (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C007CD20 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
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
  __int64 v9; // r8
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF
  struct tagPOINT v11; // [rsp+88h] [rbp+10h] BYREF

  result = FindShadow(a1);
  v3 = result;
  if ( result )
  {
    v4 = *(_QWORD *)(v2 + 40);
    v11 = *(struct tagPOINT *)(v4 + 88);
    v5 = *((_QWORD *)result + 1);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4);
    v10[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v10;
    v10[1] = v5;
    if ( v5 )
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 8));
    zzzUpdateLayeredWindow(*((struct tagWND **)v3 + 1), 0LL, &v11, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)ThreadUnlock1(v8, v7, v9);
  }
  return result;
}
