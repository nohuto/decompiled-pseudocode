/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1C0146168
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C008C0D0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     zzzUpdateLayeredWindow @ 0x1C0028DD8 (zzzUpdateLayeredWindow.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C008C248 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     _GetLayeredWindowAttributes @ 0x1C01462B8 (_GetLayeredWindowAttributes.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  struct tagSHADOW *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _BYTE v17[8]; // [rsp+50h] [rbp+7h] BYREF
  __int64 v18; // [rsp+58h] [rbp+Fh] BYREF
  struct tagWND *v19; // [rsp+60h] [rbp+17h]
  __int64 v20; // [rsp+68h] [rbp+1Fh]
  __int64 v21; // [rsp+70h] [rbp+27h] BYREF
  __int64 v22; // [rsp+78h] [rbp+2Fh]
  __int64 v23; // [rsp+80h] [rbp+37h]
  char v24; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v25; // [rsp+C0h] [rbp+77h] BYREF
  char v26; // [rsp+C8h] [rbp+7Fh] BYREF

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  result = FindShadow(a1);
  LODWORD(v25) = 0;
  v6 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3, v4, v5);
    v18 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v18;
    v19 = a1;
    if ( a1 )
      HMLockObject(a1);
    if ( (unsigned int)GetLayeredWindowAttributes(a1, v17, &v24, &v26) && (v26 & 2) != 0 )
    {
      BYTE2(v25) = v24;
      BYTE3(v25) = 1;
      v12 = *((_QWORD *)v6 + 1);
      v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11);
      v21 = *(_QWORD *)(v13 + 408);
      *(_QWORD *)(v13 + 408) = &v21;
      v22 = v12;
      if ( v12 )
        HMLockObject(v12);
      zzzUpdateLayeredWindow(*((struct tagWND **)v6 + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0, (__int64)&v25, 2u, 0LL);
      ThreadUnlock1(v15, v14, v16);
    }
    return (struct tagSHADOW *)ThreadUnlock1(v9, v8, v10);
  }
  return result;
}
