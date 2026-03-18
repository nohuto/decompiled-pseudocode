/*
 * XREFs of ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C007503C
 * Callers:
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0073634 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 * Callees:
 *     HMAssignmentLock @ 0x1C0024280 (HMAssignmentLock.c)
 *     xxxChangeForegroundKeyboardTable @ 0x1C0073110 (xxxChangeForegroundKeyboardTable.c)
 *     ?GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z @ 0x1C0075110 (-GetThreadsWithPKL@@YAIPEAPEAPEAUtagTHREADINFO@@PEAU_TL@@PEAUtagKL@@@Z.c)
 *     ApiSetEditionImmActivateAndUnloadThreadsLayout @ 0x1C019A340 (ApiSetEditionImmActivateAndUnloadThreadsLayout.c)
 */

void __fastcall xxxSetPKLinThreads(struct tagKL *a1, struct tagKL *a2)
{
  __int64 ThreadsWithPKL; // rsi
  int v5; // r8d
  struct tagTHREADINFO **v6; // r14
  __int128 v7; // [rsp+30h] [rbp-40h]
  __int128 v8; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v9[4]; // [rsp+50h] [rbp-20h] BYREF
  struct tagTHREADINFO **v10; // [rsp+90h] [rbp+20h] BYREF

  memset(v9, 0, 24);
  ThreadsWithPKL = GetThreadsWithPKL(&v10, (struct _TL *)v9, a2);
  if ( a1 && gptiForeground && *((struct tagKL **)gptiForeground + 54) == a2 )
    xxxChangeForegroundKeyboardTable(a2, a1);
  if ( (_DWORD)ThreadsWithPKL )
  {
    if ( a2 )
    {
      ApiSetEditionImmActivateAndUnloadThreadsLayout((_DWORD)v10, ThreadsWithPKL, v5, (_DWORD)a1, *((_DWORD *)a2 + 10));
    }
    else
    {
      v6 = v10;
      do
      {
        *((_QWORD *)&v7 + 1) = a1;
        *(_QWORD *)&v7 = (char *)*v6 + 432;
        v8 = v7;
        HMAssignmentLock((__int64 **)&v8);
        ++v6;
        --ThreadsWithPKL;
      }
      while ( ThreadsWithPKL );
    }
    PopAndFreeAlwaysW32ThreadLock(v9);
  }
  if ( a2 )
  {
    if ( *((struct tagKL **)a2 + 2) != a1 )
    {
      *(_QWORD *)(*((_QWORD *)a1 + 3) + 16LL) = *((_QWORD *)a1 + 2);
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 24LL) = *((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 2) = *((_QWORD *)a2 + 2);
      *((_QWORD *)a1 + 3) = a2;
      *(_QWORD *)(*((_QWORD *)a2 + 2) + 24LL) = a1;
      *((_QWORD *)a2 + 2) = a1;
    }
  }
}
