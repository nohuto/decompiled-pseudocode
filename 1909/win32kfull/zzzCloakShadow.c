/*
 * XREFs of zzzCloakShadow @ 0x1C023ACB8
 * Callers:
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C0019FCC (zzzSetWindowCompositionCloak.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001A858 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

struct tagSHADOW *__fastcall zzzCloakShadow(struct tagWND *a1)
{
  struct tagSHADOW *result; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  struct tagSHADOW *v4; // rbx
  __int64 v5; // rdi
  unsigned int v6; // esi
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  result = FindShadow(a1);
  v4 = result;
  if ( result )
  {
    v5 = *((_QWORD *)result + 1);
    v6 = v2 != 0;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v2, v3);
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = v5;
    if ( v5 )
      HMLockObject(v5);
    zzzSetWindowCompositionCloak(*((_QWORD *)v4 + 1), 0LL, v6);
    return (struct tagSHADOW *)ThreadUnlock1(v9, v8, v10);
  }
  return result;
}
