/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C00B5264
 * Callers:
 *     NtUserUnhookWindowsHookEx @ 0x1C00B5210 (NtUserUnhookWindowsHookEx.c)
 *     zzzSetWindowsHookEx @ 0x1C00B5454 (zzzSetWindowsHookEx.c)
 *     zzzCancelJournalling @ 0x1C012B2A4 (zzzCancelJournalling.c)
 *     zzzUnhookWindowsHook @ 0x1C01D3AA0 (zzzUnhookWindowsHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     PhkFirstGlobalValid @ 0x1C00B189C (PhkFirstGlobalValid.c)
 *     FreeHook @ 0x1C00B5770 (FreeHook.c)
 *     PhkNextValid @ 0x1C00B5C80 (PhkNextValid.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01D3440 (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1, __int64 a2)
{
  struct tagHOOK *v2; // rbx
  __int64 v3; // rdi
  _BYTE *v4; // rsi
  int v6; // r8d
  __int64 i; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1;
  v3 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v4 = &unk_1C02CDED8;
  if ( (*((_BYTE *)&unk_1C02CDED8 + *((int *)a1 + 12) + 1) & 4) != 0 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
    v11[0] = *(_QWORD *)(ThreadWin32Thread + 416);
    *(_QWORD *)(ThreadWin32Thread + 416) = v11;
    v11[1] = v2;
    _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
    zzzJournalAttach((struct tagTHREADINFO *)v3, 0);
    v2 = (struct tagHOOK *)ThreadUnlock1(v10, v9);
  }
  if ( v2 )
    FreeHook(v2);
  if ( (*(_DWORD *)(v3 + 488) & 0x40000) != 0 )
  {
    v6 = -1;
    do
    {
      if ( (*v4 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v3, v6); i; i = PhkNextValid(i) )
        {
          if ( *(_QWORD *)(i + 16) == v3 )
            return 1LL;
        }
      }
      ++v6;
      ++v4;
    }
    while ( v6 <= 14 );
    *(_DWORD *)(v3 + 488) &= ~0x40000u;
  }
  return 1LL;
}
