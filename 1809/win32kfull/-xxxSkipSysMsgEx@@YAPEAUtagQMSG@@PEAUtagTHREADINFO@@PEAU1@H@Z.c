/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C00B15F8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0034C00 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     DelQEntry @ 0x1C0038198 (DelQEntry.c)
 *     PhkFirstGlobalValid @ 0x1C00B189C (PhkFirstGlobalValid.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C00B19A8 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C00B19E4 (-UpdateKeyState@@YAXPEAUtagQ@@IH@Z.c)
 *     HMValidateHandleNoRip @ 0x1C00B6440 (HMValidateHandleNoRip.c)
 *     xxxCallJournalRecordHook @ 0x1C01D394C (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, __int64 a3)
{
  __int64 i; // rbx
  int v4; // edi
  __int64 GlobalValid; // r8
  __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned __int8 v12; // di
  __int64 v13; // rdx
  BOOL v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned __int8 v21; // si
  unsigned int v22; // edx
  unsigned __int8 v23; // si
  unsigned int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rax
  __int16 v27; // cx
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax

  i = 0LL;
  v4 = a3;
  if ( *(_QWORD *)(*((_QWORD *)a1 + 54) + 80LL) )
  {
    GlobalValid = PhkFirstGlobalValid(a1, 1LL, a3);
    if ( GlobalValid && *((_QWORD *)a1 + 57) == grpdeskRitInput )
    {
      *(_DWORD *)(GlobalValid + 64) |= 4u;
      goto LABEL_13;
    }
    if ( PhkFirstGlobalValid(a1, 0LL, GlobalValid) )
    {
      xxxCallJournalRecordHook(a2);
      v8 = *((_QWORD *)a1 + 54);
    }
    i = *(_QWORD *)(v8 + 80);
    if ( i )
    {
      if ( i == 1 )
        goto LABEL_13;
      if ( (unsigned int)EqualMsg(*(struct tagQMSG **)(v8 + 80), a2) )
      {
LABEL_8:
        v10 = *((_QWORD *)a1 + 54);
        if ( i == *(_QWORD *)(v10 + 80) )
        {
          *(_QWORD *)(v10 + 80) = 0LL;
          v10 = *((_QWORD *)a1 + 54);
        }
        DelQEntry(v10 + 24, i, v4);
        if ( v4 )
        {
          i = 0LL;
        }
        else
        {
          *(_QWORD *)(i + 8) = 0LL;
          *(_QWORD *)i = 0LL;
        }
        EtwTraceInputProcessDelay(a1);
        *(_DWORD *)(*((_QWORD *)a1 + 54) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
LABEL_13:
        if ( (*((_DWORD *)a2 + 25) & 0x40000) != 0 )
          return (struct tagQMSG *)i;
        v11 = *((_DWORD *)a2 + 6);
        v12 = 0;
        v13 = 0LL;
        v14 = 1;
        if ( v11 == 514 )
        {
          v14 = 0;
          goto LABEL_26;
        }
        if ( v11 > 0x202 )
        {
          v24 = v11 - 516;
          if ( v24 )
          {
            v25 = v24 - 1;
            if ( v25 )
            {
              v28 = v25 - 2;
              if ( v28 )
              {
                v29 = v28 - 1;
                if ( v29 )
                {
                  v30 = v29 - 3;
                  if ( v30 )
                  {
                    if ( v30 != 1 )
                      return (struct tagQMSG *)i;
                    v14 = 0;
                  }
                  if ( *((_WORD *)a2 + 17) == 1 )
                  {
                    v12 = 5;
                    goto LABEL_27;
                  }
                  if ( *((_WORD *)a2 + 17) == 2 )
                  {
                    v12 = 6;
                    goto LABEL_27;
                  }
                  goto LABEL_22;
                }
                v14 = 0;
              }
              v12 = 4;
              goto LABEL_27;
            }
            v14 = 0;
          }
          v12 = 2;
          goto LABEL_22;
        }
        v15 = v11 - 255;
        if ( !v15 )
        {
          if ( (*((_DWORD *)a1 + 302) & 0x200000) == 0 )
            return (struct tagQMSG *)i;
          if ( *((_QWORD *)a2 + 4) )
            return (struct tagQMSG *)i;
          LOBYTE(v13) = 18;
          v26 = HMValidateHandleNoRip(*((_QWORD *)a2 + 5), v13);
          if ( !v26 || *(_DWORD *)(v26 + 32) != 1 )
            return (struct tagQMSG *)i;
          v27 = *(_WORD *)(v26 + 58);
          v12 = *(_BYTE *)(v26 + 62);
          v14 = (v27 & 1) == 0;
          LODWORD(v13) = v27 & 6;
          if ( v12 == 16 )
          {
            *(_WORD *)(v26 + 58) = v27 & 0xFFF9;
            goto LABEL_31;
          }
          goto LABEL_22;
        }
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 3;
            if ( !v18 )
              goto LABEL_29;
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 != 252 )
                goto LABEL_22;
LABEL_26:
              v12 = 1;
              goto LABEL_27;
            }
          }
          v14 = 0;
        }
LABEL_29:
        v12 = *((_BYTE *)a2 + 32);
        LODWORD(v13) = *((_DWORD *)a2 + 10) & 0x1000000;
        if ( v12 == 16 )
        {
          *((_QWORD *)a2 + 5) &= ~0x1000000uLL;
          goto LABEL_31;
        }
LABEL_22:
        if ( (unsigned __int8)(v12 - 17) > 1u )
        {
          if ( !v12 )
            return (struct tagQMSG *)i;
LABEL_27:
          UpdateKeyState(*((struct tagQ **)a1 + 54), v12, v14);
          return (struct tagQMSG *)i;
        }
LABEL_31:
        v21 = 2 * v12 + 0x80 + ((_DWORD)v13 != 0);
        v22 = v21;
        v23 = v21 ^ 1;
        UpdateKeyState(*((struct tagQ **)a1 + 54), v22, v14);
        if ( !v14
          && ((unsigned __int8)(1 << (2 * (v23 & 3))) & *(_BYTE *)(((unsigned __int64)v23 >> 2)
                                                                 + *((_QWORD *)a1 + 54)
                                                                 + 228)) != 0 )
        {
          return (struct tagQMSG *)i;
        }
        goto LABEL_27;
      }
      for ( i = *(_QWORD *)(v9 + 24); i; i = *(_QWORD *)i )
      {
        if ( (unsigned int)EqualMsg((struct tagQMSG *)i, a2) )
          goto LABEL_8;
      }
    }
  }
  return 0LL;
}
