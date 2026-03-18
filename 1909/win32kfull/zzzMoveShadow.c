/*
 * XREFs of zzzMoveShadow @ 0x1C023AD60
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001A858 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

struct tagSHADOW *__fastcall zzzMoveShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rcx
  __int64 v3; // r8
  struct tagSHADOW *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+50h] [rbp-28h] BYREF
  __int64 v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]
  struct tagPOINT v14; // [rsp+88h] [rbp+10h] BYREF

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  result = FindShadow(a1);
  v4 = result;
  if ( result )
  {
    v5 = *(_QWORD *)(v2 + 40);
    v14 = *(struct tagPOINT *)(v5 + 88);
    v6 = *((_QWORD *)result + 1);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v3);
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = v6;
    if ( v6 )
      HMLockObject(v6);
    zzzUpdateLayeredWindow(*((struct tagWND **)v4 + 1), 0LL, &v14, 0LL, 0LL, 0LL, 0, 0LL, 0, 0LL);
    return (struct tagSHADOW *)ThreadUnlock1(v9, v8, v10);
  }
  return result;
}
