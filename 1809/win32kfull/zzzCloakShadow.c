/*
 * XREFs of zzzCloakShadow @ 0x1C0222C6C
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     zzzSetWindowCompositionCloak @ 0x1C0072E2C (zzzSetWindowCompositionCloak.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C0079E2C (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzCloakShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rdx
  struct tagSHADOW *v3; // rdi
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  result = FindShadow(a1);
  v3 = result;
  if ( result )
  {
    v4 = *((_QWORD *)result + 1);
    v5 = v2 != 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2);
    v9[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v9;
    v9[1] = v4;
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
    zzzSetWindowCompositionCloak(*((_QWORD *)v3 + 1), 0LL, v5);
    return (struct tagSHADOW *)ThreadUnlock1(v8, v7);
  }
  return result;
}
