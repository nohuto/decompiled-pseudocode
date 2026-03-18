/*
 * XREFs of xxxUpdateShadowZorder @ 0x1C023ABA8
 * Callers:
 *     ?xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z @ 0x1C006F0B0 (-xxxSendChangedMsgs@@YAXPEAUtagSMWP@@@Z.c)
 * Callees:
 *     SetWindowGroupBand @ 0x1C0019924 (SetWindowGroupBand.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C001A858 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x1C006C7B4 (xxxSetWindowPos.c)
 *     SetOrClrWF @ 0x1C008990C (SetOrClrWF.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 */

struct tagSHADOW *__fastcall xxxUpdateShadowZorder(__int64 a1)
{
  struct tagSHADOW *result; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rdx
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h]
  __int64 v16; // [rsp+50h] [rbp-18h]

  v14 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  result = FindShadow((struct tagWND *)a1);
  if ( !result )
    return result;
  v5 = *((_QWORD *)result + 1);
  LOBYTE(v4) = 8;
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_QWORD *)(v5 + 40);
  if ( (*(_BYTE *)(v6 + 24) & 8) != 0 && (*(_BYTE *)(v7 + 24) & 8) == 0 )
  {
    v8 = 1;
LABEL_8:
    SetOrClrWF(v8, v5, 0x808u, 1);
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(v6 + 24) & 8) == 0 && (*(_BYTE *)(v7 + 24) & 8) != 0 )
  {
    v8 = 0;
    goto LABEL_8;
  }
LABEL_9:
  v9 = *(unsigned int *)(*(_QWORD *)(a1 + 40) + 236LL);
  if ( *(_DWORD *)(*(_QWORD *)(v5 + 40) + 236LL) != (_DWORD)v9 )
    SetWindowGroupBand((struct tagWND *)v5, v9, 0);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v4);
  v14 = *(_QWORD *)(ThreadWin32Thread + 408);
  *(_QWORD *)(ThreadWin32Thread + 408) = &v14;
  v15 = v5;
  HMLockObject(v5);
  xxxSetWindowPos((struct tagWND *)v5, a1, 0LL, 0LL, 0, 0, 19);
  return (struct tagSHADOW *)ThreadUnlock1(v12, v11, v13);
}
