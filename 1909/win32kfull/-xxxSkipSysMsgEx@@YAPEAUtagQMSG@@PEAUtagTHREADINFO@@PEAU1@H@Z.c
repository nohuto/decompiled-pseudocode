/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0029B90
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00725D0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001BBC0 (WPP_RECORDER_SF_D.c)
 *     PhkFirstGlobalValid @ 0x1C0029E9C (PhkFirstGlobalValid.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C0029FB8 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0029FF4 (-RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C002BA90 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C002BE9C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D084 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoRip @ 0x1C00559FC (HMValidateHandleNoRip.c)
 *     DelQEntry @ 0x1C0071248 (DelQEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00723EC (WPP_RECORDER_SF_qq.c)
 *     ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C00F90C4 (-UpdateKeyState@@YAXPEAUtagQ@@IH@Z.c)
 *     WPP_RECORDER_SF_qqDqqqDqqDqqqD @ 0x1C01E3CCC (WPP_RECORDER_SF_qqDqqqDqqDqqqD.c)
 *     xxxCallJournalRecordHook @ 0x1C01E83D0 (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, unsigned int a3)
{
  __int64 *i; // rbx
  int v7; // edx
  __int64 GlobalValid; // rax
  __int64 v9; // r8
  int v10; // edx
  int v11; // ecx
  __int64 v12; // r8
  int v13; // r9d
  __int64 v14; // rcx
  unsigned int v15; // eax
  unsigned __int8 v16; // di
  __int64 v17; // rdx
  BOOL v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned __int8 v25; // si
  unsigned int v26; // edx
  unsigned __int8 v27; // si
  __int64 v28; // rax
  __int16 v29; // cx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  unsigned int v34; // eax
  int v35; // [rsp+20h] [rbp-B8h]
  __int64 v36; // [rsp+A0h] [rbp-38h] BYREF

  i = 0LL;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v36, *((_QWORD *)a1 + 53));
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 53) + 88LL) )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v7) = 4;
    WPP_RECORDER_SF_D(
      (unsigned int)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
      v7,
      18,
      22,
      (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
      *((_DWORD *)a2 + 6));
  }
  InputTraceLogging::Delivery::RemoveMessage(a2);
  GlobalValid = PhkFirstGlobalValid(a1, 1LL);
  if ( GlobalValid && *((_QWORD *)a1 + 56) == grpdeskRitInput )
  {
    *(_DWORD *)(GlobalValid + 64) |= 4u;
    goto LABEL_17;
  }
  if ( PhkFirstGlobalValid(a1, 0LL) )
    xxxCallJournalRecordHook(a2);
  v9 = *((_QWORD *)a1 + 53);
  i = *(__int64 **)(v9 + 88);
  if ( !i )
    return 0LL;
  if ( i != (__int64 *)1 )
  {
    if ( !(unsigned int)EqualMsg(*(struct tagQMSG **)(v9 + 88), a2) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqDqqqDqqDqqqD(
          v11,
          v10,
          v12,
          v13,
          v35,
          (char)a2,
          *((_QWORD *)a2 + 13),
          *((_DWORD *)a2 + 6),
          *((_QWORD *)a2 + 2),
          *((_QWORD *)a2 + 4),
          *((_QWORD *)a2 + 5),
          *((_DWORD *)a2 + 12),
          (char)i,
          i[13],
          *((_DWORD *)i + 6),
          i[2],
          i[4],
          i[5],
          *((_DWORD *)i + 12));
        v12 = *((_QWORD *)a1 + 53);
      }
      for ( i = *(__int64 **)(v12 + 24); ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v10) = 4;
            WPP_RECORDER_SF_(v11, v10, 18, 25, (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids);
          }
          return 0LL;
        }
        if ( (unsigned int)EqualMsg((struct tagQMSG *)i, a2) )
          break;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(v11, v10, 18, 24, (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids, i);
    }
    v14 = *((_QWORD *)a1 + 53);
    if ( i == *(__int64 **)(v14 + 88) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qq(
          v14,
          v10,
          18,
          26,
          (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
          v14,
          *(_QWORD *)(v14 + 88));
        v14 = *((_QWORD *)a1 + 53);
      }
      *(_QWORD *)(v14 + 88) = 0LL;
      v14 = *((_QWORD *)a1 + 53);
    }
    DelQEntry(v14 + 24, i, a3);
    if ( a3 )
    {
      i = 0LL;
    }
    else
    {
      i[1] = 0LL;
      *i = 0LL;
    }
    EtwTraceInputProcessDelay(a1);
    *(_DWORD *)(*((_QWORD *)a1 + 53) + 424LL) = (MEMORY[0xFFFFF78000000320]
                                               * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
LABEL_17:
  if ( (*((_DWORD *)a2 + 25) & 0x40000) != 0 )
    return (struct tagQMSG *)i;
  v15 = *((_DWORD *)a2 + 6);
  v16 = 0;
  v17 = 0LL;
  v18 = 1;
  if ( v15 == 514 )
  {
    v18 = 0;
    goto LABEL_30;
  }
  if ( v15 > 0x202 )
  {
    v30 = v15 - 516;
    if ( v30 )
    {
      v31 = v30 - 1;
      if ( v31 )
      {
        v32 = v31 - 2;
        if ( v32 )
        {
          v33 = v32 - 1;
          if ( v33 )
          {
            v34 = v33 - 3;
            if ( v34 )
            {
              if ( v34 != 1 )
                return (struct tagQMSG *)i;
              v18 = 0;
            }
            if ( *((_WORD *)a2 + 17) == 1 )
            {
              v16 = 5;
              goto LABEL_31;
            }
            if ( *((_WORD *)a2 + 17) == 2 )
            {
              v16 = 6;
              goto LABEL_31;
            }
            goto LABEL_26;
          }
          v18 = 0;
        }
        v16 = 4;
        goto LABEL_31;
      }
      v18 = 0;
    }
    v16 = 2;
    goto LABEL_26;
  }
  v19 = v15 - 255;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( !v20 )
      goto LABEL_33;
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 3;
      if ( !v22 )
        goto LABEL_33;
      v23 = v22 - 1;
      if ( v23 )
      {
        if ( v23 != 252 )
          goto LABEL_26;
LABEL_30:
        v16 = 1;
        goto LABEL_31;
      }
    }
    v18 = 0;
LABEL_33:
    v16 = *((_BYTE *)a2 + 32);
    LODWORD(v17) = *((_DWORD *)a2 + 10) & 0x1000000;
    if ( v16 == 16 )
    {
      *((_QWORD *)a2 + 5) &= ~0x1000000uLL;
      goto LABEL_35;
    }
LABEL_26:
    if ( (unsigned __int8)(v16 - 17) > 1u )
    {
      if ( !v16 )
        return (struct tagQMSG *)i;
LABEL_31:
      UpdateKeyState(*((struct tagQ **)a1 + 53), v16, v18);
      return (struct tagQMSG *)i;
    }
    goto LABEL_35;
  }
  if ( (*((_DWORD *)a1 + 306) & 0x200000) == 0 )
    return (struct tagQMSG *)i;
  if ( *((_QWORD *)a2 + 4) )
    return (struct tagQMSG *)i;
  LOBYTE(v17) = 18;
  v28 = HMValidateHandleNoRip(*((_QWORD *)a2 + 5), v17, 1LL);
  if ( !v28 || *(_DWORD *)(v28 + 32) != 1 )
    return (struct tagQMSG *)i;
  v29 = *(_WORD *)(v28 + 58);
  v16 = *(_BYTE *)(v28 + 62);
  v18 = (v29 & 1) == 0;
  LODWORD(v17) = v29 & 6;
  if ( v16 != 16 )
    goto LABEL_26;
  *(_WORD *)(v28 + 58) = v29 & 0xFFF9;
LABEL_35:
  v25 = 2 * v16 + 0x80 + ((_DWORD)v17 != 0);
  v26 = v25;
  v27 = v25 ^ 1;
  UpdateKeyState(*((struct tagQ **)a1 + 53), v26, v18);
  if ( v18
    || ((unsigned __int8)(1 << (2 * (v27 & 3))) & *(_BYTE *)(((unsigned __int64)v27 >> 2) + *((_QWORD *)a1 + 53) + 236)) == 0 )
  {
    goto LABEL_31;
  }
  return (struct tagQMSG *)i;
}
