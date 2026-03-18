/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C0023720
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D0F00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001B498 (WPP_RECORDER_SF_D.c)
 *     ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C001F9B4 (-UpdateKeyState@@YAXPEAUtagQ@@IH@Z.c)
 *     PhkFirstGlobalValid @ 0x1C0023A2C (PhkFirstGlobalValid.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C0023B48 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     ?RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C0023B84 (-RemoveMessage@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ??0?$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z @ 0x1C0025620 (--0-$CLockExclusiveAllowRecursion@VDLT_QUEUE@@@@QEAA@AEAUtagObjLock@@@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C0025A2C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_ @ 0x1C0026C14 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoRip @ 0x1C00B4C50 (HMValidateHandleNoRip.c)
 *     DelQEntry @ 0x1C00CFB78 (DelQEntry.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00D0D1C (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqDqqqDqqDqqqD @ 0x1C01E3E4C (WPP_RECORDER_SF_qqDqqqDqqDqqqD.c)
 *     xxxCallJournalRecordHook @ 0x1C01E8550 (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, unsigned int a3)
{
  __int64 *i; // rbx
  __int64 GlobalValid; // rax
  __int64 v8; // r8
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r8
  int v12; // r9d
  __int64 v13; // rcx
  unsigned int v14; // eax
  unsigned __int8 v15; // di
  __int64 v16; // rdx
  BOOL v17; // r8d
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  unsigned __int8 v24; // si
  unsigned int v25; // edx
  unsigned __int8 v26; // si
  __int64 v27; // rax
  __int16 v28; // cx
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  int v34; // [rsp+20h] [rbp-B8h]
  __int64 v35; // [rsp+A0h] [rbp-38h] BYREF

  i = 0LL;
  CLockExclusiveAllowRecursion<DLT_QUEUE>::CLockExclusiveAllowRecursion<DLT_QUEUE>(&v35, *((_QWORD *)a1 + 53));
  if ( !*(_QWORD *)(*((_QWORD *)a1 + 53) + 88LL) )
    return 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D(
      (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
      4u,
      0x12u,
      0x16u,
      (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids);
  InputTraceLogging::Delivery::RemoveMessage(a2);
  GlobalValid = PhkFirstGlobalValid(a1, 1LL);
  if ( GlobalValid && *((_QWORD *)a1 + 56) == grpdeskRitInput )
  {
    *(_DWORD *)(GlobalValid + 64) |= 4u;
    goto LABEL_17;
  }
  if ( PhkFirstGlobalValid(a1, 0LL) )
    xxxCallJournalRecordHook(a2);
  v8 = *((_QWORD *)a1 + 53);
  i = *(__int64 **)(v8 + 88);
  if ( !i )
    return 0LL;
  if ( i != (__int64 *)1 )
  {
    if ( !(unsigned int)EqualMsg(*(struct tagQMSG **)(v8 + 88), a2) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qqDqqqDqqDqqqD(
          v10,
          v9,
          v11,
          v12,
          v34,
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
        v11 = *((_QWORD *)a1 + 53);
      }
      for ( i = *(__int64 **)(v11 + 24); ; i = (__int64 *)*i )
      {
        if ( !i )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v9) = 4;
            WPP_RECORDER_SF_(v10, v9, 18, 25, (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids);
          }
          return 0LL;
        }
        if ( (unsigned int)EqualMsg((struct tagQMSG *)i, a2) )
          break;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(v10, v9, 18, 24, (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids, i);
    }
    v13 = *((_QWORD *)a1 + 53);
    if ( i == *(__int64 **)(v13 + 88) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        WPP_RECORDER_SF_qq(
          v13,
          v9,
          18,
          26,
          (__int64)&WPP_db4c9b3ed78a39e6374fde78dedf6449_Traceguids,
          v13,
          *(_QWORD *)(v13 + 88));
        v13 = *((_QWORD *)a1 + 53);
      }
      *(_QWORD *)(v13 + 88) = 0LL;
      v13 = *((_QWORD *)a1 + 53);
    }
    DelQEntry(v13 + 24, i, a3);
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
  v14 = *((_DWORD *)a2 + 6);
  v15 = 0;
  v16 = 0LL;
  v17 = 1;
  if ( v14 == 514 )
  {
    v17 = 0;
    goto LABEL_30;
  }
  if ( v14 > 0x202 )
  {
    v29 = v14 - 516;
    if ( v29 )
    {
      v30 = v29 - 1;
      if ( v30 )
      {
        v31 = v30 - 2;
        if ( v31 )
        {
          v32 = v31 - 1;
          if ( v32 )
          {
            v33 = v32 - 3;
            if ( v33 )
            {
              if ( v33 != 1 )
                return (struct tagQMSG *)i;
              v17 = 0;
            }
            if ( *((_WORD *)a2 + 17) == 1 )
            {
              v15 = 5;
              goto LABEL_31;
            }
            if ( *((_WORD *)a2 + 17) == 2 )
            {
              v15 = 6;
              goto LABEL_31;
            }
            goto LABEL_26;
          }
          v17 = 0;
        }
        v15 = 4;
        goto LABEL_31;
      }
      v17 = 0;
    }
    v15 = 2;
    goto LABEL_26;
  }
  v18 = v14 - 255;
  if ( v18 )
  {
    v19 = v18 - 1;
    if ( !v19 )
      goto LABEL_33;
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 3;
      if ( !v21 )
        goto LABEL_33;
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 != 252 )
          goto LABEL_26;
LABEL_30:
        v15 = 1;
        goto LABEL_31;
      }
    }
    v17 = 0;
LABEL_33:
    v15 = *((_BYTE *)a2 + 32);
    LODWORD(v16) = *((_DWORD *)a2 + 10) & 0x1000000;
    if ( v15 == 16 )
    {
      *((_QWORD *)a2 + 5) &= ~0x1000000uLL;
      goto LABEL_35;
    }
LABEL_26:
    if ( (unsigned __int8)(v15 - 17) > 1u )
    {
      if ( !v15 )
        return (struct tagQMSG *)i;
LABEL_31:
      UpdateKeyState(*((struct tagQ **)a1 + 53), v15, v17);
      return (struct tagQMSG *)i;
    }
    goto LABEL_35;
  }
  if ( (*((_DWORD *)a1 + 306) & 0x200000) == 0 )
    return (struct tagQMSG *)i;
  if ( *((_QWORD *)a2 + 4) )
    return (struct tagQMSG *)i;
  LOBYTE(v16) = 18;
  v27 = HMValidateHandleNoRip(*((_QWORD *)a2 + 5), v16, 1LL);
  if ( !v27 || *(_DWORD *)(v27 + 32) != 1 )
    return (struct tagQMSG *)i;
  v28 = *(_WORD *)(v27 + 58);
  v15 = *(_BYTE *)(v27 + 62);
  v17 = (v28 & 1) == 0;
  LODWORD(v16) = v28 & 6;
  if ( v15 != 16 )
    goto LABEL_26;
  *(_WORD *)(v27 + 58) = v28 & 0xFFF9;
LABEL_35:
  v24 = 2 * v15 + 0x80 + ((_DWORD)v16 != 0);
  v25 = v24;
  v26 = v24 ^ 1;
  UpdateKeyState(*((struct tagQ **)a1 + 53), v25, v17);
  if ( v17
    || ((unsigned __int8)(1 << (2 * (v26 & 3))) & *(_BYTE *)(((unsigned __int64)v26 >> 2) + *((_QWORD *)a1 + 53) + 236)) == 0 )
  {
    goto LABEL_31;
  }
  return (struct tagQMSG *)i;
}
