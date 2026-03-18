/*
 * XREFs of zzzCloakShadow @ 0x1C023B2D8
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     zzzSetWindowCompositionCloak @ 0x1C008B6E0 (zzzSetWindowCompositionCloak.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C008C248 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 */

struct tagSHADOW *__fastcall zzzCloakShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  struct tagSHADOW *v5; // rbx
  __int64 v6; // rdi
  unsigned int v7; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  __int64 v14; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  result = FindShadow(a1);
  v5 = result;
  if ( result )
  {
    v6 = *((_QWORD *)result + 1);
    v7 = v2 != 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3, v4);
    v12 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v12;
    v13 = v6;
    if ( v6 )
      HMLockObject(v6);
    zzzSetWindowCompositionCloak(*((_QWORD *)v5 + 1), 0LL, v7);
    return (struct tagSHADOW *)ThreadUnlock1(v10, v9, v11);
  }
  return result;
}
