/*
 * XREFs of MiInsertLargePageInFreeOrZeroList @ 0x140027960
 * Callers:
 *     MiDemoteLocalLargePage @ 0x1400BBBF0 (MiDemoteLocalLargePage.c)
 *     MiDemoteLargeFreePage @ 0x1400F75C4 (MiDemoteLargeFreePage.c)
 *     MiDemoteLargeFreeZeroPage @ 0x14015C000 (MiDemoteLargeFreeZeroPage.c)
 * Callees:
 *     MiInsertPageInFreeOrZeroedList @ 0x14002B2E0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     MiInsertLargePageInNodeList @ 0x14002F220 (MiInsertLargePageInNodeList.c)
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x14003F230 (MmGetSessionIdEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1400C4AC8 (MiSetOriginalPtePfnFromFreeList.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     ExfTryAcquirePushLockShared @ 0x1400C74B0 (ExfTryAcquirePushLockShared.c)
 *     KiCheckForKernelApcDelivery @ 0x1400EF3A0 (KiCheckForKernelApcDelivery.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x1401C0674 (EtwTraceAutoBoostEntryExhaustion.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiArePageContentsZero @ 0x1402D8DBC (MiArePageContentsZero.c)
 *     MiAddColdPagesToHotRanges @ 0x1402EB814 (MiAddColdPagesToHotRanges.c)
 *     MiNotifyPageHeat @ 0x1402EBD14 (MiNotifyPageHeat.c)
 */

_QWORD *__fastcall MiInsertLargePageInFreeOrZeroList(__int64 a1, unsigned int a2, int a3, int a4, int a5)
{
  __int64 v6; // rdi
  __int64 v7; // r13
  unsigned __int64 v9; // r8
  __int64 v10; // r11
  int v11; // r10d
  __int64 v12; // rdx
  int v13; // eax
  int v14; // r9d
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // r12
  _QWORD *v19; // rsi
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // r8
  ULONG_PTR v22; // rdi
  bool v23; // zf
  __int64 v24; // rdx
  __int64 v25; // rbx
  int v26; // ecx
  __int64 CurrentIrql; // r9
  int v28; // r9d
  __int64 v29; // r12
  volatile signed __int32 *v30; // rbx
  ULONG_PTR v31; // r14
  volatile signed __int32 *v32; // r15
  unsigned __int64 v33; // rax
  unsigned __int8 v34; // bl
  ULONG_PTR v36; // r12
  volatile signed __int32 *v37; // r13
  volatile signed __int32 *v38; // r13
  char v39; // al
  _QWORD *v40; // r12
  __int64 v41; // r10
  volatile signed __int64 *v42; // rcx
  volatile signed __int64 *v43; // r13
  volatile signed __int32 *v44; // rcx
  ULONG_PTR v45; // r13
  volatile signed __int32 *v46; // roff
  volatile signed __int32 *v47; // r13
  ULONG_PTR v48; // r15
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v50; // r14
  unsigned __int8 AbEntrySummary; // al
  unsigned __int8 AbOrphanedEntrySummary; // al
  __int64 v53; // rcx
  int SessionId; // eax
  ULONG_PTR *v55; // rbx
  unsigned int i; // r14d
  __int64 v57; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v59[8]; // [rsp+0h] [rbp-100h] BYREF
  int v60; // [rsp+20h] [rbp-E0h]
  int v61; // [rsp+24h] [rbp-DCh]
  unsigned int v62; // [rsp+28h] [rbp-D8h]
  unsigned __int64 v63; // [rsp+30h] [rbp-D0h]
  int v64; // [rsp+38h] [rbp-C8h]
  volatile signed __int32 *v65; // [rsp+40h] [rbp-C0h]
  __int64 v66; // [rsp+48h] [rbp-B8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp-B0h]
  __int64 v68; // [rsp+58h] [rbp-A8h]
  __int64 v69; // [rsp+60h] [rbp-A0h]
  int v70; // [rsp+68h] [rbp-98h] BYREF
  int v71; // [rsp+6Ch] [rbp-94h] BYREF
  int v72; // [rsp+70h] [rbp-90h] BYREF
  int v73; // [rsp+74h] [rbp-8Ch] BYREF
  int v74; // [rsp+78h] [rbp-88h] BYREF
  int v75; // [rsp+7Ch] [rbp-84h] BYREF
  unsigned __int64 v76; // [rsp+80h] [rbp-80h]
  ULONG_PTR v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  _QWORD *v79; // [rsp+98h] [rbp-68h]
  __int64 v80; // [rsp+A0h] [rbp-60h]
  int v81; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v82; // [rsp+B0h] [rbp-50h]
  volatile signed __int32 *v83; // [rsp+B8h] [rbp-48h]
  __int64 v84; // [rsp+C0h] [rbp-40h]
  __int64 v85; // [rsp+D0h] [rbp-30h] BYREF
  int v86; // [rsp+D8h] [rbp-28h]
  _BYTE v87[132]; // [rsp+DCh] [rbp-24h] BYREF
  ULONG_PTR v88; // [rsp+160h] [rbp+60h] BYREF
  ULONG_PTR v89; // [rsp+168h] [rbp+68h]
  unsigned __int64 v90; // [rsp+198h] [rbp+98h]
  ULONG_PTR v91; // [rsp+1A0h] [rbp+A0h]

  v6 = a2;
  v7 = a1;
  v78 = a1;
  memset(v87, 0, sizeof(v87));
  v66 = 0LL;
  v9 = MiLargePageSizes[v6];
  v10 = 0LL;
  v79 = 0LL;
  v11 = 0;
  v60 = 0;
  v90 = 0LL;
  v91 = 0LL;
  v12 = (v7 + 0x58000000000LL) / 48;
  v88 = v12;
  v89 = v12 + 16;
  v13 = a5;
  if ( a3 == 1 )
  {
    v60 = 1;
    v14 = 512;
    if ( !a5 )
    {
      a4 = 0;
      v13 = 16;
    }
  }
  else
  {
    v14 = 64;
    if ( !a5 )
      goto LABEL_9;
  }
  v15 = (v13 + 15) & 0xFFFFFFF0;
  v16 = v9;
  if ( v15 <= v9 )
    v16 = v15;
  if ( (unsigned int)v6 > 1 || v16 >= v9 )
  {
    v17 = a4 & 0xF;
  }
  else
  {
    v17 = dword_1404657B0 & a4;
    v41 = v12 + (v17 & 0xFFFFFFF0);
    v88 = v41;
    v89 = v41 + v16;
    if ( v41 + v16 > v12 + v9 )
    {
      v89 = v12 + v9;
      v90 = (v7 + 0x58000000000LL) / 48;
      v91 = v16 + v41 - v9;
    }
  }
  v11 = v60;
  v10 = 48 * (v12 + v17) - 0x58000000000LL;
  v66 = v10;
LABEL_9:
  if ( v9 > 0x10 )
  {
    v18 = MiLargePageContainingFrames[(unsigned int)(v6 + 1)];
    v76 = MiLargePageSizes[(unsigned int)(v6 + 1)];
  }
  else
  {
    v76 = 0LL;
    v18 = 0LL;
    if ( !a3 )
    {
      v11 = 1;
      v60 = 1;
    }
  }
  v19 = (_QWORD *)(v7 + 48 * v9);
  v85 = 1LL;
  v86 = 16;
  v63 = 0LL;
  v20 = *(_QWORD *)(v7 + 40);
  v21 = 0LL;
  v22 = (__int64)(v19 + 0xB000000000LL) / 48;
  v23 = (*(_BYTE *)(v7 + 34) & 7) == 0;
  v64 = *(_BYTE *)(v7 + 34) & 7;
  v24 = v14 | ((unsigned int)!v23 + 1);
  v62 = v14 | (!v23 + 1);
  v25 = *(_QWORD *)(qword_140465E88 + 8 * ((v20 >> 40) & 0x3FF));
  v26 = 0;
  v61 = 0;
  v80 = v25;
  CurrentIrql = KeGetCurrentIrql();
  v68 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
  {
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v26 = 0;
  }
  if ( (HvlEnlightenments & 0x200000) == 0 || a3 != 1 )
    goto LABEL_14;
  v48 = v25 + 184;
  v70 = 0;
  CurrentThread = KeGetCurrentThread();
  v61 = 1;
  --CurrentThread->SpecialApcDisable;
  if ( ++CurrentThread->AbAllocationRegionCount != 1 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
    v50 = 0LL;
    goto LABEL_84;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( !AbEntrySummary )
  {
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      v50 = 0LL;
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, v48, 0LL);
      goto LABEL_75;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    AbEntrySummary = CurrentThread->AbEntrySummary | AbOrphanedEntrySummary;
  }
  _BitScanForward((unsigned int *)&v53, AbEntrySummary);
  v81 = v53;
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v53);
  v50 = (__int64)&CurrentThread->LockEntries[v53];
LABEL_75:
  if ( v50 )
  {
    if ( v48 >= 0xFFFF800000000000uLL && byte_140467140[((v48 >> 39) & 0x1FF) - 256] == 1 )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v50 + 40) = SessionId;
    *(_QWORD *)(v50 + 32) = v48 & 0x7FFFFFFFFFFFFFFCLL;
  }
  else
  {
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0x10u);
  }
LABEL_84:
  --CurrentThread->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(CurrentThread, v48, &v70);
  v23 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v23 && ($C6908ADE9723D0A04AF8EE82D8D15C40 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)v48, 17LL, 0LL)
    || (unsigned __int8)ExfTryAcquirePushLockShared(v48) )
  {
    v11 = v60;
    v21 = v63;
    v10 = v66;
    v24 = v62;
    v26 = v61;
    if ( v50 )
      *(_BYTE *)(v50 + 26) |= 1u;
LABEL_14:
    v28 = 0;
    goto LABEL_15;
  }
  if ( v50 )
    KeAbPostReleaseEx(v48);
  v55 = &v88;
  for ( i = 0; i < 2; ++i )
  {
    if ( !v55[1] )
      break;
    MiAddColdPagesToHotRanges(&v85, *v55);
    v55 += 7;
  }
  if ( HIDWORD(v85) )
    MiNotifyPageHeat(&v85);
  v11 = v60;
  v28 = 0;
  v10 = v66;
  v26 = 0;
  v24 = v62;
  v21 = 0LL;
  v61 = 0;
LABEL_15:
  v29 = v18 & 0xFFFFFFFFFLL;
  v84 = v29;
  v30 = (volatile signed __int32 *)(v19 + 3);
  v31 = v22 + 1;
  v32 = (volatile signed __int32 *)(48 * v22 - 0x57FFFFFFFB8LL);
  v82 = 0xFFFFFFF000000000uLL;
  while ( 1 )
  {
    --v31;
    v71 = 0;
    v32 -= 12;
    v77 = v31;
    v30 -= 12;
    v83 = v32;
    v19 -= 6;
    --v22;
    if ( _interlockedbittestandset64(v30, 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v71);
        while ( *(__int64 *)v30 < 0 );
      }
      while ( _interlockedbittestandset64(v30, 0x3FuLL) );
      v11 = v60;
      v28 = 0;
      v21 = v63;
      v10 = v66;
      v24 = v62;
      v26 = v61;
    }
    *(_QWORD *)v30 &= 0xC000000000000000uLL;
    v33 = v29 | v82 & *((_QWORD *)v30 + 2);
    *((_QWORD *)v30 + 2) = v33;
    if ( v11 == 1 && (v22 < v89 && v22 >= v88 || v22 < v91 && v22 >= v90) )
    {
      if ( v26 )
      {
        MiAddColdPagesToHotRanges(&v85, v22);
        v33 = *((_QWORD *)v30 + 2);
        v28 = 0;
        v21 = v63;
        v10 = v66;
        v24 = v62;
      }
      *((_QWORD *)v30 + 2) = v33 & 0xFFFFFFF000000000uLL;
      if ( v19 == (_QWORD *)v10 )
      {
        *v19 = 0LL;
        *((_QWORD *)v30 - 2) |= 0x8000000000000000uLL;
        *(_QWORD *)v30 &= 0xFFFFFFF000000000uLL;
        _InterlockedOr(v59, 0);
        v39 = *((_BYTE *)v30 + 10);
        *(_QWORD *)v30 ^= (*(_QWORD *)v30 ^ ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 56)) & 0xF00000000000000LL;
        v23 = v64 == 0;
        *((_BYTE *)v30 + 10) = v39 & 0xF8 | 5;
        *((_QWORD *)v30 - 1) = ZeroPte;
        if ( v23 )
        {
          if ( (MiFlags & 0x80u) != 0 && (++dword_14046600C & MmPageValidationFrequency) == 0 )
          {
            MiArePageContentsZero(v22);
            v21 = v63;
            v28 = 0;
          }
        }
        else
        {
          MiSetOriginalPtePfnFromFreeList(v30 - 2, v24, v21, 0LL);
        }
        v79 = v19;
      }
      else
      {
        MiInsertPageInFreeOrZeroedList(v22);
        v21 = v63;
        v28 = 0;
      }
      _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
      v36 = v31;
      if ( v21 )
      {
        v37 = v32;
        v65 = v32;
        do
        {
          BugCheckParameter2 = 16LL;
          do
          {
            v72 = v28;
            if ( _interlockedbittestandset64(v37, 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v72);
                while ( *(__int64 *)v37 < 0 );
              }
              while ( _interlockedbittestandset64(v37, 0x3FuLL) );
              v28 = 0;
            }
            *((_QWORD *)v37 + 2) = *((_QWORD *)v37 + 2) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
            _InterlockedAnd64((volatile signed __int64 *)v37, 0x7FFFFFFFFFFFFFFFuLL);
            v37 += 12;
            --BugCheckParameter2;
          }
          while ( BugCheckParameter2 );
          v38 = v65;
          v73 = v28;
          while ( _interlockedbittestandset64(v38, 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v73);
            while ( *(__int64 *)v38 < 0 );
          }
          MiInsertLargePageInNodeList(v36);
          _InterlockedAnd64((volatile signed __int64 *)v38, 0x7FFFFFFFFFFFFFFFuLL);
          v37 = v38 + 192;
          v21 = v63 - 16;
          v65 = v37;
          v36 += 16LL;
          v63 = v21;
          v28 = 0;
        }
        while ( v21 );
        v31 = v77;
        v7 = v78;
      }
    }
    else
    {
      v63 = ++v21;
      if ( ((v76 - 1) & v22) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        BugCheckParameter2 = v22;
        v40 = v19;
        if ( v21 % v76 )
        {
          v42 = (volatile signed __int64 *)v30;
          v65 = v30;
          do
          {
            if ( v40 == v19 )
              _InterlockedAnd64(v42, 0x7FFFFFFFFFFFFFFFuLL);
            v43 = v42;
            v69 = 16LL;
            do
            {
              v74 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)v43, 0x3FuLL) )
              {
                do
                  KeYieldProcessorEx(&v74);
                while ( *(__int64 *)v43 < 0 );
              }
              *((_QWORD *)v43 + 2) = v43[2] & 0xFFFFFFF000000000uLL | 0xFFFFFFFFCLL;
              _InterlockedAnd64(v43, 0x7FFFFFFFFFFFFFFFuLL);
              v43 += 6;
              --v69;
            }
            while ( v69 );
            v44 = v65;
            v45 = BugCheckParameter2;
            v75 = 0;
            if ( _interlockedbittestandset64(v65, 0x3FuLL) )
            {
              v47 = v44;
              do
              {
                do
                  KeYieldProcessorEx(&v75);
                while ( *(__int64 *)v47 < 0 );
              }
              while ( _interlockedbittestandset64(v47, 0x3FuLL) );
              v45 = BugCheckParameter2;
            }
            MiInsertLargePageInNodeList(v45);
            v46 = v65;
            _InterlockedAnd64((volatile signed __int64 *)v65, 0x7FFFFFFFFFFFFFFFuLL);
            v63 -= 16LL;
            v21 = v63;
            v42 = (volatile signed __int64 *)(v46 + 192);
            BugCheckParameter2 = v45 + 16;
            v40 += 96;
            v65 = v46 + 192;
          }
          while ( v63 % v76 );
          v31 = v77;
          v32 = v83;
          v7 = v78;
        }
        if ( v21 )
        {
          MiInsertLargePageInNodeList(v22);
          _InterlockedAnd64((volatile signed __int64 *)v30, 0x7FFFFFFFFFFFFFFFuLL);
          v21 = 0LL;
          v63 = 0LL;
        }
      }
    }
    v29 = v84;
    v11 = v60;
    v10 = v66;
    v24 = v62;
    v26 = v61;
    if ( v19 == (_QWORD *)v7 )
      break;
    v28 = 0;
  }
  if ( v61 )
  {
    if ( HIDWORD(v85) )
      MiNotifyPageHeat(&v85);
    v57 = v80;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v80 + 184), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v57 + 184);
    KeAbPostRelease(v57 + 184);
  }
  v34 = v68;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v68 < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(v34);
  return v79;
}
