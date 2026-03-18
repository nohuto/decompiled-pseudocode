/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0057B60
 * Callers:
 *     zzzReattachThreads @ 0x1C00586B4 (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C0058B78 (zzzAttachToQueue.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0005A3C (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C0006580 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C000C670 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     FreeQEntry @ 0x1C000F9A0 (FreeQEntry.c)
 *     SetWakeBit @ 0x1C001C970 (SetWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     IsProcessedByInputService @ 0x1C0057DCC (IsProcessedByInputService.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  struct tagQ *v3; // r10
  struct tagQ *v4; // rdi
  struct tagQMSG *v5; // rbx
  __int64 v6; // r12
  struct tagQMSG *v7; // r14
  char *i; // r15
  __int64 v9; // rdx
  int v10; // eax
  struct tagQ *v11; // rcx
  __int64 v12; // rbp
  struct tagQMSG *v13; // rcx
  struct tagQMSG *v14; // rcx
  struct tagQMSG *v15; // rsi
  struct tagQMSG *v16; // rcx
  unsigned int v17; // eax
  struct tagQMSG *v18; // rax
  struct tagQMSG *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // rdx
  struct tagTHREADINFO *v27; // [rsp+60h] [rbp+18h]

  v27 = a3;
  v3 = 0LL;
  v4 = a2;
  v5 = a1;
  v6 = 0LL;
  v7 = 0LL;
  for ( i = 0LL; v5; a3 = v27 )
  {
    if ( (*((_DWORD *)v5 + 25) & 0x10000) != 0 )
    {
      v23 = *((_QWORD *)v5 + 13);
      if ( v23 )
      {
        *(_DWORD *)(v23 + 1200) &= ~0x10000000u;
        gKeyboardInputTelemetry = v3;
        dword_1C03299EC = (int)v3;
      }
    }
    if ( (*(_DWORD *)(gptiCurrent + 1200LL) & 0x40000) != 0 )
    {
      v17 = *((_DWORD *)v5 + 6);
      if ( *((_QWORD *)v5 + 13) == gptiCurrent )
      {
        if ( v17 >= 0x100 && v17 <= 0x102 && a3 )
          *((_QWORD *)v5 + 13) = a3;
      }
      else if ( v17 == 513 || v17 == 516 )
      {
        LOBYTE(a2) = 1;
        v24 = HMValidateHandleNoSecure(*((_QWORD *)v5 + 2), (__int64)a2);
        v3 = 0LL;
        if ( v24 )
        {
          if ( *(_QWORD *)(v24 + 16) == gptiCurrent )
            *((_QWORD *)v5 + 13) = gptiCurrent;
        }
      }
    }
    if ( v5 == *((struct tagQMSG **)v4 + 10) )
    {
      v20 = *(_QWORD *)(*((_QWORD *)v5 + 13) + 424LL);
      if ( v4 != (struct tagQ *)v20 && *(struct tagQ **)(v20 + 64) == v3 )
      {
        v21 = *((_QWORD *)v4 + 8);
        if ( v21 )
        {
          if ( *(_QWORD *)(v21 + 424) == v20 )
          {
            *(_QWORD *)(v20 + 64) = v21;
            *((_QWORD *)v4 + 8) = v3;
          }
        }
      }
    }
    v10 = IsProcessedByInputService(v5);
    v11 = v3;
    v12 = (__int64)v3;
    if ( *((_DWORD *)v5 + 24) != 4 )
      v11 = a2;
    if ( !v10 )
      v12 = (__int64)v11;
    if ( v12 )
    {
      if ( !v7 || v6 != v12 )
      {
        a2 = *(struct tagQ **)(v12 + 424);
        v7 = (struct tagQMSG *)*((_QWORD *)a2 + 4);
        if ( v7 && *((_DWORD *)v5 + 12) - *((_DWORD *)v7 + 12) >= 0 )
        {
          i = (char *)a2 + 24;
        }
        else
        {
          v7 = (struct tagQ *)((char *)a2 + 24);
          i = (char *)a2 + 24;
        }
      }
      v13 = *(struct tagQMSG **)v7;
      if ( *(_QWORD *)v7 )
      {
        a2 = (struct tagQ *)*((unsigned int *)v5 + 12);
        do
        {
          if ( (int)a2 - *((_DWORD *)v13 + 12) < 0 )
            break;
          v7 = v13;
          v13 = *(struct tagQMSG **)v13;
        }
        while ( v13 );
      }
      *((_DWORD *)v5 + 25) &= 0xFFF8FFFF;
      v14 = v5;
      v15 = v5;
      v5 = *(struct tagQMSG **)v5;
      *(_QWORD *)v14 = *(_QWORD *)v7;
      if ( *(_QWORD *)v7 )
      {
        *((_QWORD *)v14 + 1) = *(_QWORD *)(*(_QWORD *)v7 + 8LL);
        *(_QWORD *)(*(_QWORD *)v7 + 8LL) = v15;
      }
      else
      {
        *((_QWORD *)v14 + 1) = *((_QWORD *)i + 1);
        *((_QWORD *)i + 1) = v14;
      }
      *(_QWORD *)v7 = v15;
      v7 = v15;
      ++*((_DWORD *)i + 4);
      if ( *((_DWORD *)v15 + 24) != (_DWORD)v3 && (*(_WORD *)(*(_QWORD *)(v12 + 440) + 6LL) & 0x2000) == 0 )
      {
        SetWakeBit(v12, 0x2040u);
        v3 = 0LL;
      }
      v16 = (struct tagQMSG *)*((_QWORD *)v4 + 10);
      if ( v15 == v16 )
      {
        v22 = *(_QWORD *)(v12 + 424);
        if ( v4 != (struct tagQ *)v22 )
        {
          if ( *(struct tagQ **)(v22 + 80) == v3 )
            *(_QWORD *)(v22 + 80) = v16;
          *((_QWORD *)v4 + 10) = v3;
        }
      }
      if ( !v5 )
        break;
      *((_QWORD *)v5 + 1) = v3;
      v6 = v12;
    }
    else
    {
      v18 = *(struct tagQMSG **)v5;
      if ( *(_QWORD *)v5 )
      {
        *((_QWORD *)v18 + 1) = v3;
        v18 = *(struct tagQMSG **)v5;
      }
      v19 = v5;
      v5 = v18;
      if ( v19 == *((struct tagQMSG **)v4 + 10) )
        *((_QWORD *)v4 + 10) = v3;
      CleanEventMessage(v19);
      FreeQEntry((unsigned int *)v19);
      v3 = 0LL;
    }
  }
  v9 = *((_QWORD *)v4 + 6);
  if ( v9 )
  {
    do
    {
      v25 = *(_QWORD *)(v9 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v9 + 104) + 424LL) != v4 )
      {
        RemoveQMsgFromDeferList((struct tagQ *)((char *)v4 + 24), (struct tagQMSG *)v9);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v26 + 104) + 424LL) + 24LL), (struct tagQMSG *)v26);
      }
      v9 = v25;
    }
    while ( v25 );
  }
}
