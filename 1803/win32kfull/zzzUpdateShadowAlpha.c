/*
 * XREFs of zzzUpdateShadowAlpha @ 0x1C0119E48
 * Callers:
 *     NtUserSetLayeredWindowAttributes @ 0x1C007CBE0 (NtUserSetLayeredWindowAttributes.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C007CD20 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     zzzUpdateLayeredWindow @ 0x1C007CD40 (zzzUpdateLayeredWindow.c)
 *     _GetLayeredWindowAttributes @ 0x1C011A890 (_GetLayeredWindowAttributes.c)
 */

struct tagSHADOW *__fastcall zzzUpdateShadowAlpha(__int64 a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rdx
  struct tagSHADOW *v4; // rdi
  __int64 ThreadWin32Thread; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  _BYTE v14[8]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v15[3]; // [rsp+58h] [rbp+Fh] BYREF
  _QWORD v16[6]; // [rsp+70h] [rbp+27h] BYREF
  BYTE v17; // [rsp+B8h] [rbp+6Fh] BYREF
  struct _BLENDFUNCTION v18; // [rsp+C0h] [rbp+77h] BYREF
  char v19; // [rsp+C8h] [rbp+7Fh] BYREF

  result = FindShadow((struct tagWND *)a1);
  v4 = result;
  if ( result )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v3);
    v15[0] = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = v15;
    v15[1] = a1;
    if ( a1 )
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
    if ( (unsigned int)GetLayeredWindowAttributes(a1, v14, &v17, &v19) && (v19 & 2) != 0 )
    {
      *(_WORD *)&v18.BlendOp = 0;
      v18.SourceConstantAlpha = v17;
      v18.AlphaFormat = 1;
      v9 = *((_QWORD *)v4 + 1);
      v10 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6);
      v16[0] = *(_QWORD *)(v10 + 408);
      *(_QWORD *)(v10 + 408) = v16;
      v16[1] = v9;
      if ( v9 )
        _InterlockedIncrement((volatile signed __int32 *)(v9 + 8));
      zzzUpdateLayeredWindow(*((struct tagWND **)v4 + 1), 0LL, 0LL, 0LL, 0LL, 0LL, 0, &v18, 2u, 0LL);
      ThreadUnlock1(v12, v11, v13);
    }
    return (struct tagSHADOW *)ThreadUnlock1(v7, v6, v8);
  }
  return result;
}
