/*
 * XREFs of ?xxxSkipSysMsgEx@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@PEAU1@H@Z @ 0x1C000F124
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C004A500 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkFirstGlobalValid @ 0x1C000F7EC (PhkFirstGlobalValid.c)
 *     DelQEntry @ 0x1C000F8DC (DelQEntry.c)
 *     ?EqualMsg@@YAHPEAUtagQMSG@@0@Z @ 0x1C000F964 (-EqualMsg@@YAHPEAUtagQMSG@@0@Z.c)
 *     ?UpdateKeyState@@YAXPEAUtagQ@@IH@Z @ 0x1C000F9E8 (-UpdateKeyState@@YAXPEAUtagQ@@IH@Z.c)
 *     HMValidateHandleNoRip @ 0x1C006CF60 (HMValidateHandleNoRip.c)
 *     xxxCallJournalRecordHook @ 0x1C01B0924 (xxxCallJournalRecordHook.c)
 */

struct tagQMSG *__fastcall xxxSkipSysMsgEx(struct tagTHREADINFO *a1, struct tagQMSG *a2, unsigned int a3)
{
  __int64 *i; // rbx
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
  if ( *(_QWORD *)(*((_QWORD *)a1 + 53) + 80LL) )
  {
    GlobalValid = PhkFirstGlobalValid(a1, 1LL);
    if ( GlobalValid && *((_QWORD *)a1 + 56) == grpdeskRitInput )
    {
      *(_DWORD *)(GlobalValid + 64) |= 4u;
      goto LABEL_13;
    }
    if ( PhkFirstGlobalValid(a1, 0LL) )
    {
      xxxCallJournalRecordHook(a2);
      v8 = *((_QWORD *)a1 + 53);
    }
    i = *(__int64 **)(v8 + 80);
    if ( i )
    {
      if ( i == (__int64 *)1 )
        goto LABEL_13;
      if ( (unsigned int)EqualMsg(*(struct tagQMSG **)(v8 + 80), a2) )
      {
LABEL_8:
        v10 = *((_QWORD *)a1 + 53);
        if ( i == *(__int64 **)(v10 + 80) )
        {
          *(_QWORD *)(v10 + 80) = 0LL;
          v10 = *((_QWORD *)a1 + 53);
        }
        DelQEntry(v10 + 24, i, a3);
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
        *(_DWORD *)(*((_QWORD *)a1 + 53) + 416LL) = (MEMORY[0xFFFFF78000000320]
                                                   * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
LABEL_13:
        if ( (*((_DWORD *)a2 + 25) & 0x20000) != 0 )
          return (struct tagQMSG *)i;
        v11 = *((_DWORD *)a2 + 6);
        v12 = 0;
        v13 = 0LL;
        v14 = 1;
        if ( v11 == 514 )
        {
          v14 = 0;
LABEL_32:
          v12 = 1;
          goto LABEL_27;
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
                  goto LABEL_25;
                }
                v14 = 0;
              }
              v12 = 4;
              goto LABEL_27;
            }
            v14 = 0;
          }
          v12 = 2;
          goto LABEL_25;
        }
        v15 = v11 - 255;
        if ( !v15 )
        {
          if ( (*((_DWORD *)a1 + 300) & 0x200000) == 0 )
            return (struct tagQMSG *)i;
          if ( *((_QWORD *)a2 + 4) )
            return (struct tagQMSG *)i;
          LOBYTE(v13) = 18;
          v26 = HMValidateHandleNoRip(*((_QWORD *)a2 + 5), v13, 1LL);
          if ( !v26 || *(_DWORD *)(v26 + 32) != 1 )
            return (struct tagQMSG *)i;
          v27 = *(_WORD *)(v26 + 58);
          v12 = *(_BYTE *)(v26 + 62);
          v14 = (v27 & 1) == 0;
          LODWORD(v13) = v27 & 6;
          if ( v12 == 16 )
          {
            *(_WORD *)(v26 + 58) = v27 & 0xFFF9;
            goto LABEL_34;
          }
          goto LABEL_25;
        }
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 1;
          if ( v17 )
          {
            v18 = v17 - 3;
            if ( !v18 )
              goto LABEL_24;
            v19 = v18 - 1;
            if ( v19 )
            {
              if ( v19 != 252 )
                return (struct tagQMSG *)i;
              goto LABEL_32;
            }
          }
          v14 = 0;
        }
LABEL_24:
        v12 = *((_BYTE *)a2 + 32);
        LODWORD(v13) = *((_DWORD *)a2 + 10) & 0x1000000;
        if ( v12 == 16 )
        {
          *((_QWORD *)a2 + 5) &= ~0x1000000uLL;
          goto LABEL_34;
        }
LABEL_25:
        if ( (unsigned __int8)(v12 - 17) > 1u )
        {
          if ( !v12 )
            return (struct tagQMSG *)i;
LABEL_27:
          UpdateKeyState(*((struct tagQ **)a1 + 53), v12, v14);
          return (struct tagQMSG *)i;
        }
LABEL_34:
        v21 = 2 * (v12 - 16) - 96 + ((_DWORD)v13 != 0);
        v22 = v21;
        v23 = v21 ^ 1;
        UpdateKeyState(*((struct tagQ **)a1 + 53), v22, v14);
        if ( !v14
          && ((unsigned __int8)(1 << (2 * (v23 & 3))) & *(_BYTE *)(((unsigned __int64)v23 >> 2)
                                                                 + *((_QWORD *)a1 + 53)
                                                                 + 228)) != 0 )
        {
          return (struct tagQMSG *)i;
        }
        goto LABEL_27;
      }
      for ( i = *(__int64 **)(v9 + 24); i; i = (__int64 *)*i )
      {
        if ( (unsigned int)EqualMsg((struct tagQMSG *)i, a2) )
          goto LABEL_8;
      }
    }
  }
  return 0LL;
}
