/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C0054F14
 * Callers:
 *     zzzSetWindowsHookEx @ 0x1C0054144 (zzzSetWindowsHookEx.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C0054EC0 (NtUserUnhookWindowsHookEx.c)
 *     zzzCancelJournalling @ 0x1C0139E10 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01E8510 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0029E9C (PhkFirstGlobalValid.c)
 *     FreeHook @ 0x1C0054FC0 (FreeHook.c)
 *     PhkNextValid @ 0x1C005530C (PhkNextValid.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E7EAC (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1)
{
  struct tagHOOK *v1; // rbx
  __int64 v2; // rdi
  _BYTE *v3; // rsi
  int v5; // r8d
  __int64 i; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-28h] BYREF
  struct tagHOOK *v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]

  v1 = a1;
  v2 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v3 = &unk_1C02DF858;
  if ( (*((_BYTE *)&unk_1C02DF858 + *((int *)a1 + 12) + 1) & 4) != 0 )
  {
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    v11 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v11;
    v12 = v1;
    HMLockObject(v1);
    zzzJournalAttach((struct tagTHREADINFO *)v2, 0);
    v1 = (struct tagHOOK *)ThreadUnlock1(v9, v8, v10);
  }
  if ( v1 )
    FreeHook(v1);
  if ( (*(_DWORD *)(v2 + 480) & 0x40000) != 0 )
  {
    v5 = -1;
    do
    {
      if ( (*v3 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v2, v5); i; i = PhkNextValid(i) )
        {
          if ( *(_QWORD *)(i + 16) == v2 )
            return 1LL;
        }
      }
      ++v5;
      ++v3;
    }
    while ( v5 <= 14 );
    *(_DWORD *)(v2 + 480) &= ~0x40000u;
  }
  return 1LL;
}
