/*
 * XREFs of MiAgeWorkingSet @ 0x1400489B0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     MiForceAgeWorkingSet @ 0x1402C8580 (MiForceAgeWorkingSet.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     _TlgCreateSz @ 0x1400ED314 (_TlgCreateSz.c)
 *     MiIsStoreProcess @ 0x14011F348 (MiIsStoreProcess.c)
 *     MiGenerateRandomPte @ 0x140129F80 (MiGenerateRandomPte.c)
 *     _TlgWriteEx @ 0x14013C9DC (_TlgWriteEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall MiAgeWorkingSet(__int64 a1, char a2, int a3, unsigned int a4)
{
  __int64 v7; // r8
  int v8; // r15d
  unsigned __int64 v9; // r14
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  signed __int32 v12; // r11d
  unsigned __int64 v13; // r14
  unsigned int v14; // ebx
  char v15; // al
  volatile signed __int64 *v16; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v19; // rdx
  __int64 v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  struct _KPRCB *v23; // rcx
  _DWORD *v24; // rdx
  unsigned __int64 v25; // rsi
  unsigned __int128 v26; // rax
  unsigned __int64 v27; // rsi
  __int64 v28; // rcx
  _BYTE *PoolWithTag; // rbx
  _QWORD *v30; // r8
  __int64 v31; // r14
  __int64 v32; // rcx
  int v33; // r15d
  unsigned __int8 v34; // al
  int v35; // eax
  char v36; // al
  unsigned __int8 v37; // al
  int v38; // eax
  unsigned __int8 v39; // dl
  int v40; // r8d
  const CHAR *v41; // rdi
  int v44; // eax
  int v45; // eax
  LPCGUID pActivityId; // r9
  TraceLoggingHProvider v47; // r10
  ULONG v48; // r11d
  char v49; // [rsp+48h] [rbp-C0h]
  unsigned __int8 v50; // [rsp+49h] [rbp-BFh] BYREF
  __int64 v51; // [rsp+50h] [rbp-B8h]
  __int64 v52; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int64 *v53; // [rsp+60h] [rbp-A8h]
  __int64 v54; // [rsp+68h] [rbp-A0h]
  int v55; // [rsp+70h] [rbp-98h]
  int v56; // [rsp+74h] [rbp-94h] BYREF
  __int64 v57; // [rsp+78h] [rbp-90h] BYREF
  __int64 v58; // [rsp+80h] [rbp-88h] BYREF
  __int64 v59; // [rsp+88h] [rbp-80h] BYREF
  __int64 v60; // [rsp+90h] [rbp-78h] BYREF
  __int64 v61; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v62[32]; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v63[22]; // [rsp+1A8h] [rbp+A0h] BYREF
  _BYTE v64[192]; // [rsp+258h] [rbp+150h] BYREF
  _DWORD v65[68]; // [rsp+318h] [rbp+210h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+428h] [rbp+320h] BYREF
  char *v67; // [rsp+448h] [rbp+340h]
  __int64 v68; // [rsp+450h] [rbp+348h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+458h] [rbp+350h] BYREF
  int *v70; // [rsp+468h] [rbp+360h]
  __int64 v71; // [rsp+470h] [rbp+368h]
  __int64 *v72; // [rsp+478h] [rbp+370h]
  __int64 v73; // [rsp+480h] [rbp+378h]
  __int64 *v74; // [rsp+488h] [rbp+380h]
  __int64 v75; // [rsp+490h] [rbp+388h]
  __int64 *v76; // [rsp+498h] [rbp+390h]
  __int64 v77; // [rsp+4A0h] [rbp+398h]
  __int64 *v78; // [rsp+4A8h] [rbp+3A0h]
  __int64 v79; // [rsp+4B0h] [rbp+3A8h]
  __int64 *v80; // [rsp+4B8h] [rbp+3B0h]
  __int64 v81; // [rsp+4C0h] [rbp+3B8h]
  void *retaddr; // [rsp+520h] [rbp+418h]

  v49 = a2;
  memset(v64, 0, 0xB8uLL);
  memset(v62, 0, sizeof(v62));
  memset(v63, 0, 0xA8uLL);
  memset(v65, 0, 0x108uLL);
  v7 = *(_QWORD *)(a1 + 16);
  v8 = 3;
  v9 = *(_QWORD *)(a1 + 136);
  v10 = 0LL;
  v51 = v7;
  v11 = *(_QWORD *)(v7 + 32);
  v12 = 1;
  if ( v9 <= v11 )
    goto LABEL_46;
  v13 = v9 - v11;
  v14 = 10;
  if ( a4 )
    v14 = a4;
  v55 = a3 & 4;
  if ( (a3 & 4) == 0 )
  {
    v15 = *(_BYTE *)(a1 + 184) & 7;
    v54 = 0LL;
    if ( v15 == 2 )
      v16 = (volatile signed __int64 *)&unk_140467240;
    else
      v16 = (volatile signed __int64 *)(a1 + 256);
    v53 = v16;
    v52 = 0LL;
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v44 = SchedulerAssist[5];
        SchedulerAssist[5] = v44 + 1;
        if ( v44 == -1 )
        {
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          v7 = v51;
          v10 = 0LL;
        }
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v52, v16);
    }
    else
    {
      v19 = (_QWORD *)_InterlockedExchange64(v16, (__int64)&v52);
      if ( !v19 )
        goto LABEL_10;
      KxWaitForLockOwnerShip((__int64)&v52, v19);
    }
    v7 = v51;
    v10 = 0LL;
LABEL_10:
    if ( (a3 & 2) != 0 )
    {
      v20 = *(unsigned int *)(v7 + 24);
      v21 = v13 + v20;
      *(_DWORD *)(v7 + 24) = (v13 + v20) % v14;
    }
    else
    {
      v20 = *(unsigned int *)(v7 + 28);
      v21 = v13 + v20;
      *(_DWORD *)(v7 + 28) = (v13 + v20) % v14;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v52, retaddr);
      v10 = 0LL;
      goto LABEL_15;
    }
    _m_prefetchw(&v52);
    v22 = v52;
    if ( !v52 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v53, 0LL, (signed __int64)&v52) == &v52 )
      {
LABEL_15:
        v23 = KeGetCurrentPrcb();
        v24 = v23->SchedulerAssist;
        if ( v24 )
        {
          if ( v23->NestingLevel <= 1u )
          {
            v45 = v24[5] - 1;
            v24[5] = v45;
            if ( !v45 )
            {
              KiRemoveSystemWorkPriorityKick(v23);
              v10 = 0LL;
            }
          }
        }
        v12 = 1;
        if ( v21 >= v13 )
          goto LABEL_17;
        goto LABEL_74;
      }
      v22 = KxWaitForLockChainValid(&v52);
      v10 = 0LL;
    }
    v52 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v22 + 8), 1uLL);
    goto LABEL_15;
  }
LABEL_74:
  v20 = 0LL;
LABEL_17:
  v25 = v14 * (v13 + v20);
  v26 = v25 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
  v27 = v25 / 0x3E8;
  if ( v27 > v13 )
  {
    v26 = v13 * v14 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
    v27 = (*((_QWORD *)&v26 + 1) + ((v13 * v14 - *((_QWORD *)&v26 + 1)) >> 1)) >> 9;
  }
  v28 = *(unsigned __int16 *)(a1 + 174);
  HIDWORD(v62[1]) = v14;
  PoolWithTag = 0LL;
  v30 = *(_QWORD **)(qword_140466188 + 8 * v28);
  v31 = v30[975];
  if ( (a3 & 3) != 0 )
  {
    *(_QWORD *)&v26 = v30 + 296;
    *((_QWORD *)&v26 + 1) = v30[272] + v30[280];
    v32 = 0LL;
    v30 += 321;
    if ( (unsigned __int64)v26 < (unsigned __int64)v30 )
    {
      do
      {
        v32 += *(_QWORD *)v26;
        v10 += *(_QWORD *)(v26 + 40);
        *(_QWORD *)&v26 = v26 + 80;
      }
      while ( (unsigned __int64)v26 < (unsigned __int64)(v30 - 5) );
      if ( (unsigned __int64)v26 < (unsigned __int64)v30 )
        *((_QWORD *)&v26 + 1) += *(_QWORD *)v26;
      *((_QWORD *)&v26 + 1) += v32 + v10;
    }
    if ( *((_QWORD *)&v26 + 1) + *v30 < *(_QWORD *)(v31 + 80) )
    {
      if ( *(_BYTE *)(a1 + 186) != 2 )
      {
        if ( *((_QWORD *)&v26 + 1) >= *(_QWORD *)(v31 + 72) )
          v8 = 5;
        LODWORD(v62[1]) = v8;
      }
      if ( (*(_BYTE *)(a1 + 184) & 7) != 0
        || !(unsigned int)MiIsStoreProcess(a1 - 1280, *((_QWORD *)&v26 + 1), v30, v10) )
      {
        WORD2(v62[0]) = *(_WORD *)(v31 + 2358);
      }
    }
    if ( v27 <= 0x100 )
      goto LABEL_96;
    v33 = 509;
    if ( v27 < 0x1FD )
      v33 = v27;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v33 - 256) + 2072, 0x73576D4Du);
    v12 = 1;
    if ( !PoolWithTag )
    {
LABEL_96:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v31 + 132), v12, 0) )
      {
        PoolWithTag = v64;
        v33 = 20;
      }
      else
      {
        PoolWithTag = (_BYTE *)(v31 + 136);
        v33 = 256;
      }
    }
    v34 = *(_BYTE *)(a1 + 184) & 7;
    if ( v34 )
      v35 = v34 < 2u ? 2 : 0;
    else
      v35 = v12;
    v10 = 0LL;
    *(_DWORD *)PoolWithTag = v35;
    *((_DWORD *)PoolWithTag + 3) = 0;
    *((_WORD *)PoolWithTag + 2) = 0;
    *((_QWORD *)PoolWithTag + 2) = 0LL;
    *((_DWORD *)PoolWithTag + 2) = v33;
    *((_QWORD *)PoolWithTag + 3) = 0LL;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 && *(_QWORD *)(a1 + 624) )
    {
      v65[1] = 32;
      v62[31] = v65;
    }
  }
  BYTE6(v63[0]) = v49;
  v36 = *(_BYTE *)(a1 + 184);
  v63[2] = a1;
  LODWORD(v62[0]) = a3;
  v62[6] = v27;
  v62[7] = PoolWithTag;
  v37 = v36 & 7;
  if ( v37 )
    v38 = v37 < 2u ? 2 : 0;
  else
    v38 = v12;
  LODWORD(v62[8]) = v38;
  v63[20] = v62;
  LOWORD(v63[0]) = 14;
  v63[18] = MiAgePte;
  v63[19] = MiAgeWorkingSetTail;
  v62[9] = 20LL;
  WORD2(v62[8]) = 4;
  v62[10] = 0LL;
  v62[11] = 0LL;
  if ( v55 )
  {
    *(_QWORD *)&v26 = MiGenerateRandomPte(v63, *((_QWORD *)&v26 + 1), v30, 0LL);
  }
  else if ( (a3 & 2) != 0 )
  {
    *(_QWORD *)&v26 = *(_QWORD *)(v51 + 16);
  }
  else
  {
    *(_QWORD *)&v26 = *(_QWORD *)(v51 + 8);
  }
  v63[6] = v26;
  if ( !(_QWORD)v26 )
    v63[4] = -1LL;
  v8 = MiWalkPageTables(v63, *((_QWORD *)&v26 + 1), v30, v10);
  if ( PoolWithTag )
  {
    if ( PoolWithTag == (_BYTE *)(v31 + 136) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v31 + 132), 0);
    }
    else if ( PoolWithTag != v64 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  if ( v8 == 4 )
    ++*(_DWORD *)(v31 + 2580);
LABEL_46:
  if ( hProvider )
  {
    v39 = *(_BYTE *)(a1 + 184) & 7;
    if ( v39 )
    {
      v40 = v39 < 2u ? *(_DWORD *)(a1 - 248) : 0;
      v41 = 0LL;
    }
    else
    {
      v40 = *(_DWORD *)(a1 - 536);
      v41 = (const CHAR *)(a1 - 176);
    }
    if ( hProvider->LevelPlus1 > 5
      && (hProvider->KeywordAny & 1) != 0
      && (hProvider->KeywordAll & 1) == hProvider->KeywordAll )
    {
      v58 = v62[5];
      v59 = v62[2];
      v60 = v62[4];
      v61 = v62[3];
      v50 = v39;
      v67 = (char *)&v50;
      v56 = v40;
      LODWORD(v57) = a3;
      v68 = 1LL;
      TlgCreateSz(&pDesc, v41);
      v71 = 4LL;
      v72 = &v58;
      v70 = &v56;
      v74 = &v59;
      v76 = &v60;
      v78 = &v61;
      v80 = &v57;
      v73 = 8LL;
      v75 = 8LL;
      v77 = 8LL;
      v79 = 8LL;
      v81 = 4LL;
      TlgWriteEx(v47, &unk_14038D785, 0LL, v48, pActivityId, pActivityId, 0xAu, &pData);
    }
  }
  return v8 == 4;
}
