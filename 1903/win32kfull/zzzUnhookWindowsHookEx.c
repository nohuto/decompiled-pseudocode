/*
 * XREFs of zzzUnhookWindowsHookEx @ 0x1C00B41A4
 * Callers:
 *     zzzCancelJournalling @ 0x1C0081580 (zzzCancelJournalling.c)
 *     zzzSetWindowsHookEx @ 0x1C00B32E4 (zzzSetWindowsHookEx.c)
 *     NtUserUnhookWindowsHookEx @ 0x1C00B4150 (NtUserUnhookWindowsHookEx.c)
 *     zzzUnhookWindowsHook @ 0x1C01E8690 (zzzUnhookWindowsHook.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C0023A2C (PhkFirstGlobalValid.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     FreeHook @ 0x1C00B4250 (FreeHook.c)
 *     PhkNextValid @ 0x1C00B459C (PhkNextValid.c)
 *     ?zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z @ 0x1C01E802C (-zzzJournalAttach@@YAHPEAUtagTHREADINFO@@H@Z.c)
 */

__int64 __fastcall zzzUnhookWindowsHookEx(struct tagHOOK *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct tagHOOK *v4; // rbx
  __int64 v5; // rdi
  _BYTE *v6; // rsi
  int v8; // r8d
  __int64 i; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+20h] [rbp-28h] BYREF
  struct tagHOOK *v15; // [rsp+28h] [rbp-20h]
  __int64 v16; // [rsp+30h] [rbp-18h]

  v4 = a1;
  v5 = *((_QWORD *)a1 + 2);
  if ( (*((_DWORD *)a1 + 16) & 0x80u) != 0 )
    return 0LL;
  v6 = &unk_1C02E0698;
  if ( (*((_BYTE *)&unk_1C02E0698 + *((int *)a1 + 12) + 1) & 4) != 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    v16 = 0LL;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
    v14 = *(_QWORD *)(ThreadWin32Thread + 408);
    *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
    v15 = v4;
    HMLockObject(v4);
    zzzJournalAttach((struct tagTHREADINFO *)v5, 0);
    v4 = (struct tagHOOK *)ThreadUnlock1(v12, v11, v13);
  }
  if ( v4 )
    FreeHook(v4);
  if ( (*(_DWORD *)(v5 + 480) & 0x40000) != 0 )
  {
    v8 = -1;
    do
    {
      if ( (*v6 & 0x10) != 0 )
      {
        for ( i = PhkFirstGlobalValid(v5, v8); i; i = PhkNextValid(i) )
        {
          if ( *(_QWORD *)(i + 16) == v5 )
            return 1LL;
        }
      }
      ++v8;
      ++v6;
    }
    while ( v8 <= 14 );
    *(_DWORD *)(v5 + 480) &= ~0x40000u;
  }
  return 1LL;
}
