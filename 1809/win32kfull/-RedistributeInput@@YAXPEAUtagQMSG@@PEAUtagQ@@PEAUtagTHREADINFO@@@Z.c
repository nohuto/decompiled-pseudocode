/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00D66A8
 * Callers:
 *     zzzReattachThreads @ 0x1C00D695C (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C00D6E7C (zzzAttachToQueue.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0004AF0 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0005950 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1C003730C (HMValidateHandleNoSecure.c)
 *     SetWakeBit @ 0x1C0037440 (SetWakeBit.c)
 *     IsHiddenByInputService @ 0x1C00386F0 (IsHiddenByInputService.c)
 *     IsProcessedByInputService @ 0x1C00D5CC8 (IsProcessedByInputService.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C01081C0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C011D664 (FreeQEntry.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  __int64 v3; // r12
  struct tagQMSG *v4; // r14
  __int64 v5; // r15
  struct tagTHREADINFO *v6; // r9
  struct tagQMSG *i; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  BOOL v13; // eax
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rbp
  __int64 v17; // rdx
  struct tagQMSG *v18; // rcx
  struct tagQMSG *v19; // rcx
  struct tagQMSG *v20; // rsi
  struct tagQMSG *v21; // rcx
  unsigned int v22; // eax
  struct tagQMSG *v23; // rax
  struct tagQMSG *v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r8
  int v29; // r9d
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rdx

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a3;
  for ( i = a1; i; v6 = a3 )
  {
    v10 = *((_QWORD *)i + 13);
    v11 = v10;
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 1208) & 0x10000000) != 0 && IsHiddenByInputService((__int64)i) )
      {
        *(_DWORD *)(v28 + 1208) = v29 & 0xEFFFFFFF;
        gKeyboardInputTelemetry = 0LL;
        dword_1C031795C = 0;
        memset(&unk_1C03178D8, 0, 0x80uLL);
        v11 = *((_QWORD *)i + 13);
      }
      v6 = a3;
    }
    v12 = v11;
    if ( (*(_DWORD *)(gptiCurrent + 1208LL) & 0x40000) != 0 )
    {
      v22 = *((_DWORD *)i + 6);
      if ( v11 == gptiCurrent )
      {
        if ( v22 >= 0x100 && v22 <= 0x102 && v6 )
        {
          *((_QWORD *)i + 13) = v6;
          v12 = (__int64)v6;
        }
      }
      else
      {
        if ( v22 == 513 || v22 == 516 )
        {
          LOBYTE(v11) = 1;
          v30 = HMValidateHandleNoSecure(*((_QWORD *)i + 2), v11);
          if ( v30 )
          {
            if ( *(_QWORD *)(v30 + 16) == gptiCurrent )
              *((_QWORD *)i + 13) = gptiCurrent;
          }
        }
        v12 = *((_QWORD *)i + 13);
      }
    }
    if ( i == *((struct tagQMSG **)a2 + 10) )
    {
      v25 = *(_QWORD *)(v12 + 432);
      if ( a2 != (struct tagQ *)v25 && !*(_QWORD *)(v25 + 64) )
      {
        v26 = *((_QWORD *)a2 + 8);
        if ( v26 )
        {
          if ( *(_QWORD *)(v26 + 432) == v25 )
          {
            *(_QWORD *)(v25 + 64) = v26;
            *((_QWORD *)a2 + 8) = 0LL;
          }
        }
      }
    }
    v13 = IsProcessedByInputService((__int64)i);
    v15 = 0LL;
    if ( *((_DWORD *)i + 24) != 4 )
      v15 = v14;
    v16 = 0LL;
    if ( !v13 )
      v16 = v15;
    if ( v16 )
    {
      if ( !v4 || v3 != v16 )
      {
        v17 = *(_QWORD *)(v16 + 432);
        v4 = *(struct tagQMSG **)(v17 + 32);
        if ( v4 && *((_DWORD *)i + 12) - *((_DWORD *)v4 + 12) >= 0 )
        {
          v5 = v17 + 24;
        }
        else
        {
          v4 = (struct tagQMSG *)(v17 + 24);
          v5 = v17 + 24;
        }
      }
      v18 = *(struct tagQMSG **)v4;
      if ( *(_QWORD *)v4 )
      {
        do
        {
          if ( *((_DWORD *)i + 12) - *((_DWORD *)v18 + 12) < 0 )
            break;
          v4 = v18;
          v18 = *(struct tagQMSG **)v18;
        }
        while ( v18 );
      }
      *((_DWORD *)i + 25) &= 0xFFF0FFFF;
      v19 = i;
      v20 = i;
      i = *(struct tagQMSG **)i;
      *(_QWORD *)v19 = *(_QWORD *)v4;
      if ( *(_QWORD *)v4 )
      {
        *((_QWORD *)v19 + 1) = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
        *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v20;
      }
      else
      {
        *((_QWORD *)v19 + 1) = *(_QWORD *)(v5 + 8);
        *(_QWORD *)(v5 + 8) = v19;
      }
      *(_QWORD *)v4 = v20;
      v4 = v20;
      ++*(_DWORD *)(v5 + 16);
      if ( *((_DWORD *)v20 + 24) && (*(_WORD *)(*(_QWORD *)(v16 + 448) + 6LL) & 0x2000) == 0 )
        SetWakeBit(v16, 0x2040u);
      v21 = (struct tagQMSG *)*((_QWORD *)a2 + 10);
      if ( v20 == v21 )
      {
        v27 = *(_QWORD *)(v16 + 432);
        if ( a2 != (struct tagQ *)v27 )
        {
          if ( !*(_QWORD *)(v27 + 80) )
            *(_QWORD *)(v27 + 80) = v21;
          *((_QWORD *)a2 + 10) = 0LL;
        }
      }
      if ( !i )
        break;
      *((_QWORD *)i + 1) = 0LL;
      v3 = v16;
    }
    else
    {
      v23 = *(struct tagQMSG **)i;
      if ( *(_QWORD *)i )
      {
        *((_QWORD *)v23 + 1) = 0LL;
        v23 = *(struct tagQMSG **)i;
      }
      v24 = i;
      i = v23;
      if ( v24 == *((struct tagQMSG **)a2 + 10) )
        *((_QWORD *)a2 + 10) = 0LL;
      CleanEventMessage(v24);
      FreeQEntry(v24);
    }
  }
  v9 = *((_QWORD *)a2 + 6);
  if ( v9 )
  {
    do
    {
      v31 = *(_QWORD *)(v9 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v9 + 104) + 432LL) != a2 )
      {
        RemoveQMsgFromDeferList((struct tagQ *)((char *)a2 + 24), (struct tagQMSG *)v9);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v32 + 104) + 432LL) + 24LL), (struct tagQMSG *)v32);
      }
      v9 = v31;
    }
    while ( v31 );
  }
}
