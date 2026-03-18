/*
 * XREFs of ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0136904
 * Callers:
 *     zzzReattachThreads @ 0x1C0135DA8 (zzzReattachThreads.c)
 *     zzzAttachToQueue @ 0x1C01362F0 (zzzAttachToQueue.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C00073B8 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     ?RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C00083F0 (-RemoveQMsgFromDeferList@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 *     SetWakeBit @ 0x1C0070EE0 (SetWakeBit.c)
 *     HMValidateHandleNoSecure @ 0x1C0072018 (HMValidateHandleNoSecure.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C007230C (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00EF3D0 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     IsHiddenByInputService @ 0x1C00F5BB0 (IsHiddenByInputService.c)
 *     FreeQEntry @ 0x1C010143C (FreeQEntry.c)
 *     IsProcessedByInputService @ 0x1C0136C84 (IsProcessedByInputService.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0136D0C (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

void __fastcall RedistributeInput(struct tagQMSG *a1, struct tagQ *a2, struct tagTHREADINFO *a3)
{
  __int64 v3; // r15
  struct tagQMSG *v4; // r14
  __int64 v5; // r13
  struct tagTHREADINFO *v6; // r9
  struct tagQMSG *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rsi
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbp
  __int64 v16; // rdx
  struct tagQMSG *v17; // rcx
  struct tagQMSG *v18; // rcx
  struct tagQMSG *v19; // rsi
  struct tagQMSG *v20; // rax
  unsigned int v21; // eax
  struct tagQMSG *v22; // rax
  struct tagQMSG *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  _UNKNOWN **v27; // rdx
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx

  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = a3;
  v8 = a1;
  if ( a1 )
  {
    while ( 1 )
    {
      v10 = *((_QWORD *)v8 + 13);
      v11 = v10;
      if ( v10 )
      {
        if ( (*(_DWORD *)(v10 + 1224) & 0x10000000) != 0 && IsHiddenByInputService((__int64)v8) )
        {
          *(_DWORD *)(v10 + 1224) = v28 & 0xEFFFFFFF;
          gKeyboardInputTelemetry[0] = 0LL;
          dword_1C032AB6C = 0;
          memset(&dword_1C032AAE8, 0, 0x80uLL);
          v11 = *((_QWORD *)v8 + 13);
        }
        v6 = a3;
      }
      v12 = v11;
      if ( (*(_DWORD *)(gptiCurrent + 1224LL) & 0x40000) != 0 )
      {
        v21 = *((_DWORD *)v8 + 6);
        if ( v11 == gptiCurrent )
        {
          if ( v21 >= 0x100 && v21 <= 0x102 && v6 )
          {
            *((_QWORD *)v8 + 13) = v6;
            v12 = (__int64)v6;
          }
        }
        else
        {
          if ( v21 == 513 || v21 == 516 )
          {
            LOBYTE(v11) = 1;
            v29 = HMValidateHandleNoSecure(*((_QWORD *)v8 + 2), v11, v10);
            if ( v29 )
            {
              if ( *(_QWORD *)(v29 + 16) == gptiCurrent )
                *((_QWORD *)v8 + 13) = gptiCurrent;
            }
          }
          v12 = *((_QWORD *)v8 + 13);
        }
      }
      if ( v8 == *((struct tagQMSG **)a2 + 11) )
      {
        v24 = *(_QWORD *)(v12 + 424);
        if ( a2 != (struct tagQ *)v24 )
        {
          v25 = *(_QWORD *)(v24 + 72);
          if ( !v25 && (v11 = *((_QWORD *)a2 + 9)) != 0 && *(_QWORD *)(v11 + 424) == v24 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_qqq(
                v24,
                v11,
                0x12u,
                0x22u,
                (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                v11,
                v24,
                *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 72LL));
              v24 = *(_QWORD *)(v12 + 424);
              v11 = *((_QWORD *)a2 + 9);
            }
            *(_QWORD *)(v24 + 72) = v11;
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_SF_qq(
                v24,
                v11,
                0x12u,
                0x23u,
                (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
                a2,
                *((_QWORD *)a2 + 9));
            *((_QWORD *)a2 + 9) = 0LL;
          }
          else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_SF_qq(
              v24,
              v11,
              0x12u,
              0x24u,
              (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
              v25,
              *(_QWORD *)(v12 + 424));
          }
        }
      }
      v13 = IsProcessedByInputService(v8);
      v14 = 0LL;
      if ( *((_DWORD *)v8 + 24) != 4 )
        v14 = v12;
      v15 = 0LL;
      if ( !v13 )
        v15 = v14;
      if ( v15 )
        break;
      v22 = *(struct tagQMSG **)v8;
      if ( *(_QWORD *)v8 )
      {
        *((_QWORD *)v22 + 1) = 0LL;
        v22 = *(struct tagQMSG **)v8;
      }
      v23 = v8;
      v8 = v22;
      if ( v23 == *((struct tagQMSG **)a2 + 11) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qq(
            v14,
            (__int64)&WPP_RECORDER_INITIALIZED,
            0x12u,
            0x25u,
            (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
            a2,
            *((_QWORD *)a2 + 11));
        *((_QWORD *)a2 + 11) = 0LL;
      }
      CleanEventMessage(v23);
      FreeQEntry((unsigned int *)v23);
LABEL_26:
      v6 = a3;
      if ( !v8 )
        goto LABEL_2;
    }
    if ( !v4 || v3 != v15 )
    {
      v16 = *(_QWORD *)(v15 + 424);
      v4 = *(struct tagQMSG **)(v16 + 32);
      if ( v4 && *((_DWORD *)v8 + 12) - *((_DWORD *)v4 + 12) >= 0 )
      {
        v5 = v16 + 24;
      }
      else
      {
        v4 = (struct tagQMSG *)(v16 + 24);
        v5 = v16 + 24;
      }
    }
    v17 = *(struct tagQMSG **)v4;
    if ( *(_QWORD *)v4 )
    {
      do
      {
        if ( *((_DWORD *)v8 + 12) - *((_DWORD *)v17 + 12) < 0 )
          break;
        v4 = v17;
        v17 = *(struct tagQMSG **)v17;
      }
      while ( v17 );
    }
    *((_DWORD *)v8 + 25) &= 0xFFF0FFFF;
    InputTraceLogging::Delivery::UpdateISODState(v8);
    v18 = v8;
    v19 = v8;
    v8 = *(struct tagQMSG **)v8;
    *(_QWORD *)v18 = *(_QWORD *)v4;
    if ( *(_QWORD *)v4 )
    {
      *((_QWORD *)v18 + 1) = *(_QWORD *)(*(_QWORD *)v4 + 8LL);
      *(_QWORD *)(*(_QWORD *)v4 + 8LL) = v19;
    }
    else
    {
      *((_QWORD *)v18 + 1) = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 8) = v18;
    }
    *(_QWORD *)v4 = v19;
    v4 = v19;
    ++*(_DWORD *)(v5 + 16);
    if ( *((_DWORD *)v19 + 24) && (*(_WORD *)(*(_QWORD *)(v15 + 440) + 6LL) & 0x2000) == 0 )
      SetWakeBit(v15, 0x2040u);
    v20 = (struct tagQMSG *)*((_QWORD *)a2 + 11);
    if ( v19 != v20 || (v26 = *(_QWORD *)(v15 + 424), a2 == (struct tagQ *)v26) )
    {
LABEL_24:
      if ( !v8 )
        goto LABEL_2;
      *((_QWORD *)v8 + 1) = 0LL;
      v3 = v15;
      goto LABEL_26;
    }
    if ( *(_QWORD *)(v26 + 88) )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
LABEL_58:
        *((_QWORD *)a2 + 11) = 0LL;
        goto LABEL_24;
      }
      WPP_RECORDER_SF_qq(
        v26,
        (__int64)&WPP_RECORDER_INITIALIZED,
        0x12u,
        0x27u,
        (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
        v26,
        *(_QWORD *)(v26 + 72));
    }
    else
    {
      v27 = &WPP_RECORDER_INITIALIZED;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqq(
          v26,
          (__int64)&WPP_RECORDER_INITIALIZED,
          0x12u,
          0x26u,
          (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
          v20,
          v26,
          0LL);
        v26 = *(_QWORD *)(v15 + 424);
        v20 = (struct tagQMSG *)*((_QWORD *)a2 + 11);
      }
      *(_QWORD *)(v26 + 88) = v20;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qq(
        v26,
        (__int64)v27,
        0x12u,
        0x28u,
        (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
        a2,
        *((_QWORD *)a2 + 11));
    goto LABEL_58;
  }
LABEL_2:
  v9 = *((_QWORD *)a2 + 6);
  if ( v9 )
  {
    do
    {
      v30 = *(_QWORD *)(v9 + 8);
      if ( *(struct tagQ **)(*(_QWORD *)(v9 + 104) + 424LL) != a2 )
      {
        RemoveQMsgFromDeferList((struct tagQ *)((char *)a2 + 24), (struct tagQMSG *)v9);
        DeferMessage((struct tagMLIST *)(*(_QWORD *)(*(_QWORD *)(v31 + 104) + 424LL) + 24LL), (struct tagQMSG *)v31);
      }
      v9 = v30;
    }
    while ( v30 );
  }
}
