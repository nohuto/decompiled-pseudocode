/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1C0222DBC
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C0079CD0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     zzzUpdateLayeredWindow @ 0x1C0077B50 (zzzUpdateLayeredWindow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0079E2C (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     _GetLayeredWindowAttributes @ 0x1C013B400 (_GetLayeredWindowAttributes.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(__int64 a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rdx
  struct tagSHADOW *v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v14[6]; // [rsp+70h] [rbp+27h] BYREF
  BYTE v15; // [rsp+B8h] [rbp+6Fh] BYREF
  struct _BLENDFUNCTION v16; // [rsp+C0h] [rbp+77h] BYREF
  unsigned int v17; // [rsp+C8h] [rbp+7Fh] BYREF

  result = FindShadow((struct tagWND *)a1);
  v4 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v13[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v13;
    v13[1] = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    if ( (unsigned int)GetLayeredWindowAttributes(a1, &v12, &v15, &v17) && (v17 & 2) != 0 )
    {
      *(_WORD *)&v16.BlendOp = 0;
      v16.SourceConstantAlpha = v15;
      v16.AlphaFormat = 1;
      v8 = *((_QWORD *)v4 + 1);
      v9 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
      v14[0] = *(_QWORD *)(v9 + 416);
      *(_QWORD *)(v9 + 416) = v14;
      v14[1] = v8;
      if ( v8 )
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      zzzUpdateLayeredWindow(*((struct tagWND **)v4 + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0, &v16, 2u, 0LL);
      ThreadUnlock1(v11, v10);
    }
    return (struct tagSHADOW *)ThreadUnlock1(v7, v6);
  }
  return result;
}
