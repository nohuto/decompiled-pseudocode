/*
 * XREFs of MiSetVaAgeList @ 0x14003E2D0
 * Callers:
 *     MiUnlockWsle @ 0x14001A18C (MiUnlockWsle.c)
 *     NtLockVirtualMemory @ 0x14001A570 (NtLockVirtualMemory.c)
 *     MiAgePteWorker @ 0x14006B2B0 (MiAgePteWorker.c)
 *     MiClearPteAccessed @ 0x14006B770 (MiClearPteAccessed.c)
 *     MiActOnPte @ 0x14009404C (MiActOnPte.c)
 *     MiUpdateWsleAge @ 0x1400947F4 (MiUpdateWsleAge.c)
 *     MiTrimWorkingSetBuildup @ 0x14011C788 (MiTrimWorkingSetBuildup.c)
 *     MiResetAccessBitPte @ 0x14016E930 (MiResetAccessBitPte.c)
 *     MiResetAccessBitPteWorker @ 0x1402B3970 (MiResetAccessBitPteWorker.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x1400230C0 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14003EA80 (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1400BC5A0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiCountWslesInPageTable @ 0x1400F82B0 (MiCountWslesInPageTable.c)
 *     MiVolunteerForTrimFirst @ 0x14012C8C8 (MiVolunteerForTrimFirst.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14031C2A4 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14031C468 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiSetVaAgeList(__int64 a1, unsigned __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r11
  unsigned __int64 v7; // r12
  char v8; // al
  int v9; // r15d
  LONG *v10; // r13
  volatile signed __int32 *v11; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v14; // edx
  unsigned __int64 v15; // r10
  unsigned __int8 v16; // bl
  unsigned __int64 v17; // rcx
  _BYTE *v18; // rsi
  unsigned __int8 v19; // r8
  BOOL v20; // r9d
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r9
  __int64 *v23; // rdx
  __int64 v24; // r9
  unsigned __int8 v25; // al
  unsigned __int8 v26; // r9
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  unsigned __int64 v29; // rdx
  unsigned __int64 v30; // r8
  unsigned __int64 *v31; // rdx
  unsigned __int64 v32; // r8
  unsigned __int8 v33; // al
  bool v34; // zf
  struct _KPRCB *v35; // rcx
  _DWORD *v36; // rdx
  unsigned __int64 v37; // r8
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int64 *v40; // rbx
  char v42; // cl
  int v43; // r8d
  unsigned __int64 v44; // rdx
  _DWORD *v45; // rcx
  int v46; // eax
  int v47; // eax
  int v48; // eax
  signed __int32 v49; // eax
  __int64 SharedVm; // rax
  unsigned __int64 v51; // r8
  __int64 v52; // rax
  __int64 v53; // r8
  unsigned __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rdx
  unsigned __int64 v63; // rdx
  __int64 v64; // rax
  __int64 v65; // rdx
  int v66; // eax
  unsigned __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // r8
  unsigned __int64 v70; // r8
  __int64 v71; // rax
  __int64 v72; // r8
  unsigned int v74; // [rsp+28h] [rbp-80h]
  int v75; // [rsp+2Ch] [rbp-7Ch] BYREF
  unsigned __int64 v76; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v77; // [rsp+38h] [rbp-70h] BYREF
  unsigned __int64 v78; // [rsp+40h] [rbp-68h] BYREF
  _DWORD v79[8]; // [rsp+48h] [rbp-60h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+0h]

  v74 = a3;
  v4 = a2;
  v5 = 0xFFFFF68000000000uLL;
  v7 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL )
  {
    v8 = *(_BYTE *)(a1 + 184);
    v9 = 1;
  }
  else
  {
    v8 = *(_BYTE *)(a1 + 184);
    v9 = 0;
  }
  v10 = &dword_14043C7E8;
  if ( (v8 & 7) == 2 )
    v11 = &dword_14043C7E8;
  else
    v11 = (volatile signed __int32 *)(a1 + 232);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    LOBYTE(a2) = -1;
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11, a2);
LABEL_109:
    a3 = v74;
    v5 = 0xFFFFF68000000000uLL;
    goto LABEL_9;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v75 = 0;
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v47 = SchedulerAssist[5];
      SchedulerAssist[5] = v47 + 1;
      if ( v47 == -1 )
      {
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        a3 = v74;
        v5 = 0xFFFFF68000000000uLL;
      }
    }
  }
  if ( _interlockedbittestandset(v11, 0x1Fu) )
  {
    v45 = CurrentPrcb->SchedulerAssist;
    if ( v45 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v48 = v45[5] - 1;
        v45[5] = v48;
        if ( !v48 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    v46 = ExpWaitForSpinLockExclusiveAndAcquire(v11, 0xFFu);
    a3 = v74;
    v75 = v46;
    v5 = 0xFFFFF68000000000uLL;
  }
  v14 = *v11;
  if ( (*v11 & 0xBFFFFFFF) != 0x80000000 )
  {
    do
    {
      if ( (v14 & 0x40000000) == 0 )
      {
        v49 = _InterlockedCompareExchange(v11, v14 | 0x40000000, v14);
        v34 = v14 == v49;
        v14 = v49;
        if ( !v34 )
          continue;
      }
      KeYieldProcessorEx(&v75);
      v14 = *v11;
    }
    while ( (v14 & 0xBFFFFFFF) != 0x80000000 );
    goto LABEL_109;
  }
LABEL_9:
  if ( a4 == 8 && (v44 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL) + 6LL + a3, *(_QWORD *)(a1 + 112) < v44) )
  {
    SharedVm = MiGetSharedVm(a1, v44);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(SharedVm + 40));
    return 0LL;
  }
  else
  {
    v15 = 0xFFFFF6FB7DBED000uLL;
    if ( a3 )
    {
      v16 = a4;
      do
      {
        if ( v9 )
        {
          v17 = *(_QWORD *)v7;
          v18 = 0LL;
          if ( v7 >= 0xFFFFF6FB7DBED000uLL
            && v7 <= 0xFFFFF6FB7DBED7F8uLL
            && (MiFlags & 0xC00000) != 0
            && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
            && (v17 & 1) != 0
            && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
          {
            v51 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
            if ( v51 )
            {
              v52 = *(_QWORD *)(v51 + 8 * ((v7 >> 3) & 0x1FF));
              v53 = v17 | 0x20;
              if ( (v52 & 0x20) == 0 )
                v53 = *(_QWORD *)v7;
              v17 = v53;
              if ( (v52 & 0x42) != 0 )
                v17 = v53 | 0x42;
            }
          }
          v16 = HIBYTE(v17) & 0xF | (16 * ((v17 >> 60) & 7));
          v19 = HIBYTE(v17) & 0xF;
          v20 = (HIBYTE(v17) & 0xF) == 8;
        }
        else
        {
          v18 = (_BYTE *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(v7) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          v19 = (*v18 >> 1) & 7;
        }
        if ( v19 == 8 )
          --*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
        if ( !v20 )
        {
          if ( v4 < v5 || v4 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v21 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v22 = *(_QWORD *)v21;
            if ( v21 >= v15
              && v21 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v22 & 1) != 0
              && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
            {
              v54 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v54 )
              {
                v55 = *(_QWORD *)(v54 + 8 * ((v21 >> 3) & 0x1FF));
                v56 = v22 | 0x20;
                if ( (v55 & 0x20) == 0 )
                  v56 = v22;
                v22 = v56;
                if ( (v55 & 0x42) != 0 )
                  v22 = v56 | 0x42;
              }
            }
            v76 = v22;
            if ( (unsigned __int64)&v76 >= v15
              && (unsigned __int64)&v76 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v22 & 1) != 0
              && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
            {
              v57 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v57 )
              {
                v58 = *(_QWORD *)(v57 + 8 * (((unsigned __int64)&v76 >> 3) & 0x1FF));
                v59 = v22 | 0x20;
                if ( (v58 & 0x20) == 0 )
                  v59 = v22;
                v22 = v59;
                if ( (v58 & 0x42) != 0 )
                  v22 = v59 | 0x42;
              }
            }
            v23 = (__int64 *)(48 * ((v22 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            v24 = *v23;
            v25 = ((unsigned __int64)*v23 >> 14) & 7;
            if ( (((unsigned __int64)*v23 >> 4) & 0x3FF) != 0 )
            {
              if ( v19 == v25 )
              {
                *v23 = v24 ^ ((unsigned __int16)v24 ^ (unsigned __int16)(16
                                                                       * ((((unsigned __int64)*v23 >> 4) & 0x3FF) - 1))) & 0x3FF0;
              }
              else if ( v19 > v25 )
              {
                *v23 = v24 ^ ((unsigned int)v24 ^ (v19 << 14)) & 0x1C000 | 0x3FF0;
              }
            }
          }
          --*(_QWORD *)(a1 + 8LL * v19 + 40);
          if ( v19 == 7 )
            MiVolunteerForTrimFirst(a1, -1LL);
        }
        v26 = a4;
        if ( (unsigned __int8)(a4 - 1) <= 5u
          && (MI_READ_PTE_LOCK_FREE(v7) & 0x20) != 0
          && (v4 > 0x7FFFFFFEFFFFLL || (*(_BYTE *)(a1 + 184) & 7) != 0 || !*(_QWORD *)(a1 + 576)) )
        {
          v26 = 0;
        }
        if ( v18 )
        {
          *(_QWORD *)v18 ^= (*(_DWORD *)v18 ^ (2 * v26)) & 0xE;
        }
        else
        {
          v16 ^= (v16 ^ v26) & 0xF;
          v27 = *(_QWORD *)v7;
          do
          {
            v28 = v27;
            v27 = _InterlockedCompareExchange64(
                    (volatile signed __int64 *)v7,
                    ((unsigned __int64)(v16 & 0x7F) << 56) | v27 & 0x80FFFFFFFFFFFFFFuLL,
                    v27);
          }
          while ( v28 != v27 );
        }
        if ( v26 >= 8u )
        {
          if ( v26 == 8 )
            ++*(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
        }
        else if ( v9 || (*(_BYTE *)(a1 + 184) & 7) == 0 )
        {
          if ( v4 < 0xFFFFF68000000000uLL || v4 > 0xFFFFF6FFFFFFFFFFuLL )
          {
            v29 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
            v30 = *(_QWORD *)v29;
            if ( v29 >= 0xFFFFF6FB7DBED000uLL
              && v29 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v30 & 1) != 0
              && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
            {
              v60 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v60 )
              {
                v61 = *(_QWORD *)(v60 + 8 * ((v29 >> 3) & 0x1FF));
                v62 = v30 | 0x20;
                if ( (v61 & 0x20) == 0 )
                  v62 = v30;
                v30 = v62;
                if ( (v61 & 0x42) != 0 )
                  v30 = v62 | 0x42;
              }
            }
            v77 = v30;
            if ( (unsigned __int64)&v77 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)&v77 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v30 & 1) != 0
              && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
            {
              v63 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
              if ( v63 )
              {
                v64 = *(_QWORD *)(v63 + 8 * (((unsigned __int64)&v77 >> 3) & 0x1FF));
                v65 = v30 | 0x20;
                if ( (v64 & 0x20) == 0 )
                  v65 = v30;
                v30 = v65;
                if ( (v64 & 0x42) != 0 )
                  v30 = v65 | 0x42;
              }
            }
            v31 = (unsigned __int64 *)(48 * ((v30 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
            v32 = *v31;
            v33 = (*v31 >> 14) & 7;
            if ( ((*v31 >> 4) & 0x3FF) != 0 )
            {
              if ( v26 == v33 )
              {
                *v31 = v32 ^ ((unsigned __int16)v32 ^ (unsigned __int16)(16 * (((*v31 >> 4) & 0x3FF) + 1))) & 0x3FF0;
              }
              else if ( v26 > v33 )
              {
                *v31 = v32 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v26 & 7) << 14) | 0x10;
              }
            }
          }
          ++*(_QWORD *)(a1 + 8LL * v26 + 40);
          if ( v26 == 7 )
            MiVolunteerForTrimFirst(a1, 1LL);
        }
        v34 = v74-- == 1;
        v15 = 0xFFFFF6FB7DBED000uLL;
        v5 = 0xFFFFF68000000000uLL;
      }
      while ( !v34 );
      v10 = &dword_14043C7E8;
    }
    if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
      v10 = (LONG *)(a1 + 232);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
    else
      *v10 = 0;
    v35 = KeGetCurrentPrcb();
    v36 = v35->SchedulerAssist;
    if ( v36 )
    {
      if ( v35->NestingLevel <= 1u )
      {
        v66 = v36[5] - 1;
        v36[5] = v66;
        if ( !v66 )
          KiRemoveSystemWorkPriorityKick(v35);
      }
    }
    if ( v9 )
    {
      v37 = ((v4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v38 = *(_QWORD *)v37;
      if ( v37 >= 0xFFFFF6FB7DBED000uLL
        && v37 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v38 & 1) != 0
        && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
      {
        v67 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v67 )
        {
          v68 = *(_QWORD *)(v67 + 8 * ((v37 >> 3) & 0x1FF));
          v69 = v38 | 0x20;
          if ( (v68 & 0x20) == 0 )
            v69 = v38;
          v38 = v69;
          if ( (v68 & 0x42) != 0 )
            v38 = v69 | 0x42;
        }
      }
      v78 = v38;
      if ( (unsigned __int64)&v78 >= 0xFFFFF6FB7DBED000uLL
        && (unsigned __int64)&v78 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v38 & 1) != 0
        && ((v38 & 0x20) == 0 || (v38 & 0x42) == 0) )
      {
        v70 = KeGetCurrentThread()->ApcState.Process[2].Affinity.Bitmap[0];
        if ( v70 )
        {
          v71 = *(_QWORD *)(v70 + 8 * (((unsigned __int64)&v78 >> 3) & 0x1FF));
          v72 = v38 | 0x20;
          if ( (v71 & 0x20) == 0 )
            v72 = v38;
          v38 = v72;
          if ( (v71 & 0x42) != 0 )
            v38 = v72 | 0x42;
        }
      }
      v39 = (v38 >> 12) & 0xFFFFFFFFFLL;
      v40 = (unsigned __int64 *)(48 * v39 - 0x58000000000LL);
      if ( ((*(_DWORD *)v40 >> 4) & 0x3FF) == 0 )
      {
        MiCountWslesInPageTable(v39, v4, v79, 0xFFFFF6FB7DBED7F8uLL);
        v42 = 8;
        while ( 1 )
        {
          v43 = v79[(unsigned __int8)--v42];
          if ( v43 )
            break;
          if ( !v42 )
            return 1LL;
        }
        *v40 = *v40 & 0xFFFFFFFFFFFE000FuLL | (16 * (v43 & 0x3FF | ((unsigned __int64)(v42 & 7) << 10)));
      }
    }
    return 1LL;
  }
}
