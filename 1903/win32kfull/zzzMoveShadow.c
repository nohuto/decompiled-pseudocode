/*
 * XREFs of zzzMoveShadow @ 0x1C023B380
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C008C248 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagSHADOW *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+50h] [rbp-28h] BYREF
  __int64 v13; // [rsp+58h] [rbp-20h]
  __int64 v14; // [rsp+60h] [rbp-18h]
  struct tagPOINT v15; // [rsp+88h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  result = FindShadow(a1);
  v5 = result;
  if ( result )
  {
    v6 = *(_QWORD *)(v2 + 40);
    v15 = *(struct tagPOINT *)(v6 + 88);
    v7 = *((_QWORD *)result + 1);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v3, v4);
    v12 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
    v13 = v7;
    if ( v7 )
      HMLockObject(v7);
    zzzUpdateLayeredWindow(*((struct tagWND **)v5 + 1), 0LL, &v15, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)ThreadUnlock1(v10, v9, v11);
  }
  return result;
}
