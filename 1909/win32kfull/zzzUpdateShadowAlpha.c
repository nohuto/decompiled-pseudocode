/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1C0146F18
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C001A6E0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001A858 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C002F248 (zzzUpdateLayeredWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     _GetLayeredWindowAttributes @ 0x1C0147068 (_GetLayeredWindowAttributes.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  struct tagSHADOW *v5; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  _BYTE v15[8]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v16; // [rsp+58h] [rbp+Fh] BYREF
  struct tagWND *v17; // [rsp+60h] [rbp+17h]
  __int64 v18; // [rsp+68h] [rbp+1Fh]
  __int64 v19; // [rsp+70h] [rbp+27h] BYREF
  __int64 v20; // [rsp+78h] [rbp+2Fh]
  __int64 v21; // [rsp+80h] [rbp+37h]
  char v22; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+C0h] [rbp+77h] BYREF
  char v24; // [rsp+C8h] [rbp+7Fh] BYREF

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  result = FindShadow(a1);
  LODWORD(v23) = 0;
  v5 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4);
    v16 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v16;
    v17 = a1;
    if ( a1 )
      HMLockObject(a1);
    if ( (unsigned int)GetLayeredWindowAttributes(a1, v15, &v22, &v24) && (v24 & 2) != 0 )
    {
      BYTE2(v23) = v22;
      BYTE3(v23) = 1;
      v10 = *((_QWORD *)v5 + 1);
      v11 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v7, v9);
      v19 = *(_QWORD *)(v11 + 408);
      *(_QWORD *)(v11 + 408) = &v19;
      v20 = v10;
      if ( v10 )
        HMLockObject(v10);
      zzzUpdateLayeredWindow(*((struct tagWND **)v5 + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0, (__int64)&v23, 2u, 0LL);
      ThreadUnlock1(v13, v12, v14);
    }
    return (struct tagSHADOW *)ThreadUnlock1(v8, v7, v9);
  }
  return result;
}
