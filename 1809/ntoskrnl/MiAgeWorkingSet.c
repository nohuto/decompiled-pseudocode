/*
 * XREFs of MiAgeWorkingSet @ 0x14006DE40
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x1402B3310 (MiForceAgeWorkingSet.c)
 * Callees:
 *     _TlgCreateSz @ 0x140003938 (_TlgCreateSz.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     MiWalkPageTables @ 0x14006E930 (MiWalkPageTables.c)
 *     MiIsStoreProcess @ 0x1400837DC (MiIsStoreProcess.c)
 *     _TlgWriteEx @ 0x140100938 (_TlgWriteEx.c)
 *     MiGenerateRandomPte @ 0x1401311EC (MiGenerateRandomPte.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall MiAgeWorkingSet(__int64 a1, char a2, int a3, unsigned int a4)
{
  int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // r12d
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  signed __int32 v13; // r11d
  unsigned __int64 v14; // rsi
  unsigned int v15; // r15d
  LONG *v16; // r14
  volatile signed __int32 *v17; // rbx
  struct _KPRCB *CurrentPrcb; // r13
  _DWORD *SchedulerAssist; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  struct _KPRCB *v22; // rcx
  _DWORD *v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  unsigned __int128 v26; // rax
  unsigned __int64 v27; // r14
  __int64 v28; // rcx
  _BYTE *PoolWithTag; // rbx
  _QWORD *v30; // r8
  __int64 v31; // rsi
  __int64 v32; // rcx
  __int64 v33; // r9
  int v34; // r15d
  unsigned __int8 v35; // al
  int v36; // eax
  char v37; // al
  unsigned __int8 v38; // al
  int v39; // eax
  __int64 RandomPte; // rax
  unsigned __int8 v41; // dl
  int v42; // r8d
  const CHAR *v43; // rdi
  _DWORD *v46; // rcx
  int v47; // eax
  int v48; // eax
  int v49; // eax
  bool v50; // zf
  unsigned __int32 v51; // eax
  int v52; // eax
  TraceLoggingHProvider v53; // r10
  char v54; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v55; // [rsp+49h] [rbp-BFh] BYREF
  __int64 v56; // [rsp+50h] [rbp-B8h]
  __int64 v57; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v58; // [rsp+60h] [rbp-A8h]
  int v59; // [rsp+68h] [rbp-A0h]
  int v60; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v61; // [rsp+70h] [rbp-98h] BYREF
  __int64 v62; // [rsp+78h] [rbp-90h] BYREF
  __int64 v63; // [rsp+80h] [rbp-88h] BYREF
  __int64 v64; // [rsp+88h] [rbp-80h] BYREF
  __int64 v65; // [rsp+90h] [rbp-78h] BYREF
  _QWORD v66[32]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v67[22]; // [rsp+198h] [rbp+90h] BYREF
  _DWORD v68[68]; // [rsp+248h] [rbp+140h] BYREF
  _BYTE v69[192]; // [rsp+358h] [rbp+250h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+418h] [rbp+310h] BYREF
  char *v71; // [rsp+438h] [rbp+330h]
  __int64 v72; // [rsp+440h] [rbp+338h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+448h] [rbp+340h] BYREF
  int *v74; // [rsp+458h] [rbp+350h]
  __int64 v75; // [rsp+460h] [rbp+358h]
  __int64 *v76; // [rsp+468h] [rbp+360h]
  __int64 v77; // [rsp+470h] [rbp+368h]
  __int64 *v78; // [rsp+478h] [rbp+370h]
  __int64 v79; // [rsp+480h] [rbp+378h]
  __int64 *v80; // [rsp+488h] [rbp+380h]
  __int64 v81; // [rsp+490h] [rbp+388h]
  __int64 *v82; // [rsp+498h] [rbp+390h]
  __int64 v83; // [rsp+4A0h] [rbp+398h]
  __int64 *v84; // [rsp+4A8h] [rbp+3A0h]
  __int64 v85; // [rsp+4B0h] [rbp+3A8h]
  void *retaddr; // [rsp+510h] [rbp+408h]

  v6 = a3;
  LODWORD(v58) = a3;
  v54 = a2;
  memset(v66, 0, sizeof(v66));
  memset(v67, 0, sizeof(v67));
  v9 = *(_QWORD *)(a1 + 16);
  v10 = 3;
  v11 = *(_QWORD *)(a1 + 136);
  v56 = v9;
  v12 = *(_QWORD *)(v9 + 32);
  v13 = 1;
  if ( v11 > v12 )
  {
    v14 = v11 - v12;
    v15 = 10;
    if ( a4 )
      v15 = a4;
    v59 = v6 & 4;
    if ( (v6 & 4) != 0 )
    {
      v24 = 0LL;
    }
    else
    {
      v16 = &dword_14043C7E8;
      if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
        v17 = &dword_14043C7E8;
      else
        v17 = (volatile signed __int32 *)(a1 + 232);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        LOBYTE(v7) = -1;
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v17, v7);
        v9 = v56;
        v13 = 1;
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        LODWORD(v57) = 0;
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v48 = SchedulerAssist[5];
            SchedulerAssist[5] = v48 + 1;
            if ( v48 == -1 )
            {
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
              v9 = v56;
              v13 = 1;
            }
          }
        }
        if ( _interlockedbittestandset(v17, 0x1Fu) )
        {
          v46 = CurrentPrcb->SchedulerAssist;
          if ( v46 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v49 = v46[5] - 1;
              v46[5] = v49;
              if ( !v49 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          v47 = ExpWaitForSpinLockExclusiveAndAcquire(v17, 0xFFu);
          v9 = v56;
          LODWORD(v57) = v47;
          v13 = 1;
        }
        v20 = *(unsigned int *)v17;
        if ( (*v17 & 0xBFFFFFFF) != 0x80000000 )
        {
          do
          {
            if ( (v20 & 0x40000000) == 0 )
            {
              v51 = _InterlockedCompareExchange(v17, v20 | 0x40000000, v20);
              v50 = (_DWORD)v20 == v51;
              v20 = v51;
              if ( !v50 )
                continue;
            }
            KeYieldProcessorEx(&v57, v20, v8);
            v20 = *(unsigned int *)v17;
          }
          while ( (v20 & 0xBFFFFFFF) != 0x80000000 );
          v9 = v56;
          v13 = 1;
        }
        v6 = v58;
      }
      if ( (v6 & 2) != 0 )
      {
        v58 = *(unsigned int *)(v9 + 24);
        v21 = v58 + v14;
        *(_DWORD *)(v9 + 24) = (v58 + v14) % v15;
      }
      else
      {
        v58 = *(unsigned int *)(v9 + 28);
        v21 = v58 + v14;
        *(_DWORD *)(v9 + 28) = (v58 + v14) % v15;
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
        v16 = (LONG *)(a1 + 232);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v16, retaddr);
        v9 = v56;
        v13 = 1;
      }
      else
      {
        *v16 = 0;
      }
      v22 = KeGetCurrentPrcb();
      v23 = v22->SchedulerAssist;
      if ( v23 )
      {
        if ( v22->NestingLevel <= 1u )
        {
          v52 = v23[5] - 1;
          v23[5] = v52;
          if ( !v52 )
          {
            KiRemoveSystemWorkPriorityKick(v22);
            v9 = v56;
            v13 = 1;
          }
        }
      }
      if ( v21 < v14 )
        v24 = 0LL;
      else
        v24 = v58;
    }
    v25 = v15 * (v24 + v14);
    v26 = v25 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v27 = v25 / 0x3E8;
    if ( v27 > v14 )
    {
      v26 = v14 * v15 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
      v27 = (*((_QWORD *)&v26 + 1) + ((v14 * v15 - *((_QWORD *)&v26 + 1)) >> 1)) >> 9;
    }
    v28 = *(unsigned __int16 *)(a1 + 174);
    PoolWithTag = 0LL;
    HIDWORD(v66[1]) = v15;
    v30 = *(_QWORD **)(qword_14043B808 + 8 * v28);
    v31 = v30[878];
    if ( (v6 & 3) != 0 )
    {
      *(_QWORD *)&v26 = v30 + 296;
      *((_QWORD *)&v26 + 1) = v30[272] + v30[280];
      v32 = 0LL;
      v30 += 321;
      v33 = 0LL;
      if ( (unsigned __int64)v26 < (unsigned __int64)v30 )
      {
        do
        {
          v32 += *(_QWORD *)v26;
          v33 += *(_QWORD *)(v26 + 40);
          *(_QWORD *)&v26 = v26 + 80;
        }
        while ( (unsigned __int64)v26 < (unsigned __int64)(v30 - 5) );
        if ( (unsigned __int64)v26 < (unsigned __int64)v30 )
          *((_QWORD *)&v26 + 1) += *(_QWORD *)v26;
        *((_QWORD *)&v26 + 1) += v32 + v33;
      }
      if ( *((_QWORD *)&v26 + 1) + *v30 < *(_QWORD *)(v31 + 80) )
      {
        if ( *(_BYTE *)(a1 + 186) != 2 )
        {
          if ( *((_QWORD *)&v26 + 1) >= *(_QWORD *)(v31 + 72) )
            v10 = 5;
          LODWORD(v66[1]) = v10;
        }
        if ( (*(_BYTE *)(a1 + 184) & 7) != 0
          || !(unsigned int)MiIsStoreProcess(a1 - 1280, *((_QWORD *)&v26 + 1), v30, v33) )
        {
          WORD2(v66[0]) = *(_WORD *)(v31 + 2358);
        }
      }
      if ( v27 <= 0x100 )
        goto LABEL_107;
      v34 = 509;
      if ( v27 < 0x1FD )
        v34 = v27;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v34 - 256) + 2072, 0x73576D4Du);
      v13 = 1;
      if ( !PoolWithTag )
      {
LABEL_107:
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v31 + 132), v13, 0) )
        {
          PoolWithTag = v69;
          v34 = 20;
        }
        else
        {
          PoolWithTag = (_BYTE *)(v31 + 136);
          v34 = 256;
        }
      }
      v35 = *(_BYTE *)(a1 + 184) & 7;
      if ( v35 )
        v36 = v35 < 2u ? 2 : 0;
      else
        v36 = v13;
      v9 = v56;
      *((_DWORD *)PoolWithTag + 3) = 0;
      *((_WORD *)PoolWithTag + 2) = 0;
      *((_QWORD *)PoolWithTag + 2) = 0LL;
      *(_DWORD *)PoolWithTag = v36;
      *((_DWORD *)PoolWithTag + 2) = v34;
      *((_QWORD *)PoolWithTag + 3) = 0LL;
      if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 576) )
      {
        v68[0] = 0;
        v66[31] = v68;
        v68[1] = 32;
      }
    }
    BYTE4(v67[0]) = v54;
    v37 = *(_BYTE *)(a1 + 184);
    v66[6] = v27;
    v67[3] = a1;
    LODWORD(v66[0]) = v6;
    v66[7] = PoolWithTag;
    v38 = v37 & 7;
    if ( v38 )
      v39 = v38 < 2u ? 2 : 0;
    else
      v39 = v13;
    LODWORD(v66[8]) = v39;
    v67[21] = v66;
    v67[19] = MiAgePte;
    v67[20] = MiAgeWorkingSetTail;
    v66[9] = 20LL;
    WORD2(v66[8]) = 4;
    v66[10] = 0LL;
    v66[11] = 0LL;
    LODWORD(v67[0]) = 14;
    if ( v59 )
    {
      RandomPte = MiGenerateRandomPte(v67, *((_QWORD *)&v26 + 1), v30, v9);
    }
    else if ( (v6 & 2) != 0 )
    {
      RandomPte = *(_QWORD *)(v9 + 16);
    }
    else
    {
      RandomPte = *(_QWORD *)(v9 + 8);
    }
    v67[7] = RandomPte;
    if ( !RandomPte )
      v67[5] = -1LL;
    v10 = MiWalkPageTables(v67);
    if ( PoolWithTag )
    {
      if ( PoolWithTag == (_BYTE *)(v31 + 136) )
      {
        _InterlockedAnd((volatile signed __int32 *)(v31 + 132), 0);
      }
      else if ( PoolWithTag != v69 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
    }
    if ( v10 == 4 )
      ++*(_DWORD *)(v31 + 2580);
  }
  if ( hProvider )
  {
    v41 = *(_BYTE *)(a1 + 184) & 7;
    if ( v41 )
    {
      v42 = v41 < 2u ? *(_DWORD *)(a1 - 3000) : 0;
      v43 = 0LL;
    }
    else
    {
      v42 = *(_DWORD *)(a1 - 544);
      v43 = (const CHAR *)(a1 - 176);
    }
    if ( hProvider->LevelPlus1 > 5
      && (hProvider->KeywordAny & 1) != 0
      && (hProvider->KeywordAll & 1) == hProvider->KeywordAll )
    {
      v62 = v66[5];
      v63 = v66[2];
      v64 = v66[4];
      v65 = v66[3];
      v55 = v41;
      v71 = (char *)&v55;
      v60 = v42;
      LODWORD(v61) = v6;
      v72 = 1LL;
      TlgCreateSz(&pDesc, v43);
      v75 = 4LL;
      v76 = &v62;
      v74 = &v60;
      v78 = &v63;
      v80 = &v64;
      v82 = &v65;
      v84 = &v61;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 8LL;
      v83 = 8LL;
      v85 = 4LL;
      TlgWriteEx(v53, &unk_14036EEA5, 0LL, 1u, 0LL, 0LL, 0xAu, &pData);
    }
  }
  return v10 == 4;
}
