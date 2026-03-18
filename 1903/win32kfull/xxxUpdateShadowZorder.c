/*
 * XREFs of xxxUpdateShadowZorder @ 0x1C023B1C8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C00CD9E0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0044F3C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     SetWindowGroupBand @ 0x1C0089E90 (SetWindowGroupBand.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C008C248 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 */

struct tagSHADOW *__fastcall xxxUpdateShadowZorder(__int64 a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // ecx
  __int64 v10; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // [rsp+40h] [rbp-28h] BYREF
  __int64 v16; // [rsp+48h] [rbp-20h]
  __int64 v17; // [rsp+50h] [rbp-18h]

  v15 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  result = FindShadow((struct tagWND *)a1);
  if ( !result )
    return result;
  v6 = *((_QWORD *)result + 1);
  LOBYTE(v4) = 8;
  v7 = *(_QWORD *)(v3 + 40);
  v8 = *(_QWORD *)(v6 + 40);
  if ( (*(_BYTE *)(v7 + 24) & 8) != 0 && (*(_BYTE *)(v8 + 24) & 8) == 0 )
  {
    v9 = 1;
LABEL_8:
    SetOrClrWF(v9, v6, 0x808u, 1);
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(v7 + 24) & 8) == 0 && (*(_BYTE *)(v8 + 24) & 8) != 0 )
  {
    v9 = 0;
    goto LABEL_8;
  }
LABEL_9:
  v10 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 236LL);
  if ( *(_DWORD *)(*(_QWORD *)(v6 + 40) + 236LL) != (_DWORD)v10 )
    SetWindowGroupBand((struct tagWND *)v6, v10, 0);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v10, v4, v5);
  v15 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v15;
  v16 = v6;
  HMLockObject(v6);
  xxxSetWindowPos((struct tagWND *)v6, a1, 0LL, 0LL, 0, 0, 19);
  return (struct tagSHADOW *)ThreadUnlock1(v13, v12, v14);
}
