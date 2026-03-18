/*
 * XREFs of MiAddWorkingSetEntries @ 0x1400CED80
 * Callers:
 *     MiAllocateWsle @ 0x1400CE8B0 (MiAllocateWsle.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400D8290 (MiMakeSystemCacheRangeValid.c)
 *     MiEmptyDeferredWorkingSetEntries @ 0x14012A24C (MiEmptyDeferredWorkingSetEntries.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     KxWaitForLockOwnerShip @ 0x140046420 (KxWaitForLockOwnerShip.c)
 *     MmLockLoadedModuleListShared @ 0x14005F070 (MmLockLoadedModuleListShared.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KxWaitForLockChainValid @ 0x1400B54C0 (KxWaitForLockChainValid.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1400C5EE0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCountWslesInPageTable @ 0x1400EABB0 (MiCountWslesInPageTable.c)
 *     MiGetStandbyRepurposed @ 0x1400F3800 (MiGetStandbyRepurposed.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402A7410 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402A74C8 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiAddWorkingSetEntries(__int64 a1, unsigned __int64 a2, __int64 a3, char a4)
{
  char v4; // al
  unsigned __int64 v7; // rsi
  volatile signed __int64 *v9; // r14
  struct _KPRCB *CurrentPrcb; // rcx
  _DWORD *SchedulerAssist; // rdx
  _QWORD *v12; // rdx
  int v13; // edx
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  _QWORD *v17; // r13
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r12
  char v20; // al
  unsigned __int64 v21; // rcx
  char v22; // r9
  __int64 v23; // rdx
  int v24; // r15d
  unsigned __int64 v25; // rdx
  __int64 v26; // r9
  unsigned __int8 v27; // r9
  unsigned __int64 v28; // r8
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  __int64 v31; // r11
  __int64 v32; // r10
  unsigned __int64 *v33; // r8
  unsigned __int64 v34; // rdx
  unsigned __int8 v35; // al
  __int64 result; // rax
  struct _KPRCB *v37; // rcx
  _DWORD *v38; // rdx
  unsigned __int64 v39; // r8
  __int64 v40; // rcx
  unsigned __int64 *v41; // rbx
  __int64 v42; // r9
  __int64 v43; // rcx
  unsigned __int64 v44; // rdx
  __int64 v45; // r8
  __int64 v46; // r13
  __int64 *v47; // r14
  __int64 *v48; // r12
  unsigned __int64 v49; // rax
  __int64 v50; // r11
  __int64 v51; // r10
  __int64 v52; // r8
  __int64 v53; // rax
  unsigned __int64 v54; // r10
  unsigned __int64 v55; // r14
  _QWORD *v56; // r12
  _QWORD *v57; // rdx
  unsigned __int64 v58; // r9
  unsigned __int8 v59; // cl
  struct _KPRCB *v60; // rcx
  _DWORD *v61; // rdx
  _QWORD *v62; // rdx
  __int64 v63; // rax
  struct _KPRCB *v64; // rcx
  _DWORD *v65; // rdx
  unsigned __int8 v66; // cl
  int v67; // edx
  __int64 v68; // rax
  __int64 **v69; // rcx
  __int64 v70; // rax
  int v71; // eax
  __int64 v72; // rcx
  int StandbyRepurposed; // eax
  __int64 v74; // r11
  int v75; // r10d
  struct _KPRCB *v76; // rcx
  unsigned __int64 DeepFreezeStartTime; // rax
  __int64 v78; // rax
  char v79; // rdx^7
  unsigned __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // r8
  int v83; // eax
  int v84; // eax
  unsigned __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r8
  unsigned __int8 v88[8]; // [rsp+20h] [rbp-79h] BYREF
  __int64 v89; // [rsp+28h] [rbp-71h] BYREF
  volatile signed __int64 *v90; // [rsp+30h] [rbp-69h]
  __int64 v91; // [rsp+38h] [rbp-61h]
  __int64 v92; // [rsp+40h] [rbp-59h] BYREF
  volatile signed __int64 *v93; // [rsp+48h] [rbp-51h]
  __int64 v94; // [rsp+50h] [rbp-49h]
  __int64 v95; // [rsp+58h] [rbp-41h]
  __int64 v96; // [rsp+60h] [rbp-39h] BYREF
  unsigned __int64 v97; // [rsp+68h] [rbp-31h]
  _QWORD v98[4]; // [rsp+70h] [rbp-29h] BYREF
  _DWORD v99[8]; // [rsp+90h] [rbp-9h] BYREF
  void *retaddr; // [rsp+F8h] [rbp+5Fh]

  v4 = *(_BYTE *)(a1 + 184) & 7;
  v94 = 0LL;
  v97 = a2;
  v7 = a2;
  if ( v4 == 2 )
    v9 = (volatile signed __int64 *)&unk_140467240;
  else
    v9 = (volatile signed __int64 *)(a1 + 256);
  v93 = v9;
  v92 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  SchedulerAssist = CurrentPrcb->SchedulerAssist;
  if ( SchedulerAssist )
  {
    if ( CurrentPrcb->NestingLevel <= 1u )
    {
      v71 = SchedulerAssist[5];
      SchedulerAssist[5] = v71 + 1;
      if ( v71 == -1 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v92, v9);
  }
  else
  {
    v12 = (_QWORD *)_InterlockedExchange64(v9, (__int64)&v92);
    if ( v12 )
      KxWaitForLockOwnerShip((__int64)&v92, v12);
  }
  v13 = 1;
  if ( (a4 & 1) == 0 )
    goto LABEL_15;
  v14 = a3 + *(_QWORD *)(a1 + 120);
  if ( v14 <= *(_QWORD *)(a1 + 112) || (*(_BYTE *)(a1 + 187) & 8) != 0 )
    goto LABEL_15;
  v15 = *(_QWORD *)(a1 + 136);
  v16 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v15 <= v16 )
    goto LABEL_14;
  v17 = *(_QWORD **)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v18 = v17[986];
  if ( (v15 & 0x3F) != 0 )
  {
    v19 = -1LL;
  }
  else
  {
    v19 = v17[1008];
    if ( v19 < v18 / 0x14 )
    {
      v13 = 1;
      if ( v15 >= v18 / 0x14 )
        goto LABEL_91;
    }
    else
    {
      v13 = 1;
    }
  }
  if ( v15 - v16 < 3 * (v18 >> 2) )
    goto LABEL_14;
  v72 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 174));
  v95 = v17[975];
  StandbyRepurposed = MiGetStandbyRepurposed(v72);
  if ( StandbyRepurposed == v75 )
  {
    v13 = 1;
    goto LABEL_14;
  }
  if ( v74 )
    v19 = v17[1008];
  v13 = 1;
  if ( v19 >= 10LL * *(_QWORD *)(v95 + 2392) )
  {
LABEL_14:
    if ( (*(_BYTE *)(a1 + 184) & 0x40) == 0 || v14 <= *(_QWORD *)(a1 + 152) )
      goto LABEL_15;
  }
LABEL_91:
  *(_BYTE *)(a1 + 187) = HIBYTE(*(_DWORD *)(a1 + 184)) | 8;
LABEL_15:
  v20 = *(_BYTE *)(a1 + 184);
  *(_DWORD *)(a1 + 4) += a3;
  if ( (v20 & 7) == 2 )
    dword_140467280 += a3;
  __addgsdword(0x2E90u, a3);
  *(_QWORD *)(a1 + 136) += a3;
  if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
    *(_QWORD *)(a1 + 120) += a3;
  else
    v13 = 0;
  v21 = a3 + *(_QWORD *)(a1 + 120);
  if ( v21 > *(_QWORD *)(a1 + 160) )
    *(_QWORD *)(a1 + 160) = v21;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
  {
    qword_140467288 += a3;
    if ( v13 == 1 )
      qword_140467290 += a3;
    if ( qword_140467290 > (unsigned __int64)qword_140467298 )
      qword_140467298 = qword_140467290;
  }
  if ( (a4 & 2) != 0 )
  {
    *(_QWORD *)(a1 + 144) += a3;
    memset(&v98[1], 0, 24);
    if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      *(_QWORD *)(a1 + 128) += a3;
  }
  v22 = *(_BYTE *)(a1 + 184);
  v23 = 0x7FFFFFFFF8LL;
  if ( (v22 & 7u) >= 2 )
  {
    v52 = *(_QWORD *)(qword_140466188 + 8LL * *(unsigned __int16 *)(a1 + 174));
    v53 = (v22 & 7u) - 2;
    v54 = *(_QWORD *)(v52 + 4288) + *(_QWORD *)(a1 + 136);
    if ( v54 > *(_QWORD *)(v52 + 8 * v53 + 4296) )
    {
      *(_QWORD *)(v52 + 8 * v53 + 4296) = v54;
      v22 = *(_BYTE *)(a1 + 184);
    }
    if ( (v22 & 7) == 4 )
    {
      if ( PsNtosImageBase
        && (v7 >= (unsigned __int64)PsNtosImageBase && v7 < PsNtosImageEnd
         || v7 >= (unsigned __int64)PsHalImageBase && v7 < PsHalImageEnd) )
      {
        LODWORD(xmmword_140464940) = a3 + xmmword_140464940;
        goto LABEL_26;
      }
      if ( (unsigned int)MiGetSystemRegionType(v7) == 12 )
      {
        v88[0] = 17;
        v55 = (__int64)(((v23 & (v7 >> 9)) - 0x98000000000LL) << 25) >> 16;
        v56 = 0LL;
        MmLockLoadedModuleListShared(v88, v23);
        v57 = (_QWORD *)BugCheckParameter3;
        if ( !BugCheckParameter3 )
          goto LABEL_73;
        while ( 1 )
        {
          v58 = *(v57 - 23);
          if ( v55 > v58 + (unsigned int)(*((_DWORD *)v57 - 42) - 1) )
          {
            v57 = (_QWORD *)v57[1];
          }
          else
          {
            if ( v55 >= v58 )
            {
              if ( v57 )
                v56 = v57 - 29;
LABEL_73:
              ExReleaseSpinLockSharedFromDpcLevel(&PsLoadedModuleSpinLock);
              v59 = v88[0];
              if ( v88[0] < 0xFu )
              {
                if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v88[0] < 2u )
                {
                  v76 = KeGetCurrentPrcb();
                  _InterlockedAnd((volatile signed __int32 *)v76->SchedulerAssist, 0xFFFEFFFF);
                  KiRemoveSystemWorkPriorityKick(v76);
                  v59 = v88[0];
                }
                __writecr8(v59);
              }
              v23 = 0x7FFFFFFFF8LL;
              if ( v56 )
                DWORD1(xmmword_140464940) += a3;
              break;
            }
            v57 = (_QWORD *)*v57;
          }
          if ( !v57 )
            goto LABEL_73;
        }
      }
    }
  }
LABEL_26:
  v24 = a4 & 4;
  if ( v24 && a3 )
  {
    while ( 1 )
    {
      if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v25 = ((v7 >> 9) & v23) - 0x98000000000LL;
        v26 = *(_QWORD *)v25;
        if ( v25 >= 0xFFFFF6FB7DBED000uLL
          && v25 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v26 & 1) != 0
          && ((v26 & 0x20) == 0 || (v26 & 0x42) == 0) )
        {
          DeepFreezeStartTime = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( DeepFreezeStartTime )
          {
            v78 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v25 >> 3) & 0x1FF));
            v79 = HIBYTE(*(_QWORD *)v25);
            if ( (v78 & 0x20) == 0 )
              v79 = HIBYTE(v26);
            HIBYTE(v26) = v79;
            if ( (v78 & 0x42) != 0 )
              HIBYTE(v26) = v79;
          }
        }
        v27 = HIBYTE(v26) & 0xF;
      }
      else
      {
        v49 = MI_READ_PTE_LOCK_FREE((v23 & (v7 >> 9)) - 0x98000000000LL);
        v27 = (*(_BYTE *)(v51 + 48 * (v50 & (v49 >> 12))) >> 1) & 7;
      }
      if ( v7 < 0xFFFFF68000000000uLL || v7 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        v28 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
        v29 = *(_QWORD *)v28;
        if ( v28 >= 0xFFFFF6FB7DBED000uLL
          && v28 <= 0xFFFFF6FB7DBED7F8uLL
          && (MiFlags & 0xC00000) != 0
          && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
          && (v29 & 1) != 0
          && ((v29 & 0x20) == 0 || (v29 & 0x42) == 0) )
        {
          v80 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
          if ( v80 )
          {
            v81 = *(_QWORD *)(v80 + 8 * ((v28 >> 3) & 0x1FF));
            v82 = v29 | 0x20;
            if ( (v81 & 0x20) == 0 )
              v82 = v29;
            v29 = v82;
            if ( (v81 & 0x42) != 0 )
              v29 = v82 | 0x42;
          }
        }
        v96 = v29;
        v30 = MI_READ_PTE_LOCK_FREE((unsigned __int64)&v96);
        v33 = (unsigned __int64 *)(v32 + 48 * (v31 & (v30 >> 12)));
        v34 = *v33;
        v35 = (*v33 >> 14) & 7;
        if ( ((*v33 >> 4) & 0x3FF) != 0 )
        {
          if ( v27 == v35 )
          {
            *v33 = v34 ^ ((unsigned __int16)v34 ^ (unsigned __int16)(16 * (((*v33 >> 4) & 0x3FF) + 1))) & 0x3FF0;
          }
          else if ( v27 > v35 )
          {
            *v33 = v34 & 0xFFFFFFFFFFFE001FuLL | ((unsigned __int64)(v27 & 7) << 14) | 0x10;
          }
        }
      }
      ++*(_QWORD *)(a1 + 8LL * v27 + 40);
      if ( v27 == 7 )
      {
        v43 = *(unsigned __int16 *)(a1 + 174);
        v44 = *(_QWORD *)(a1 + 96);
        v89 = 0LL;
        v90 = 0LL;
        v91 = 0LL;
        v45 = *(_QWORD *)(qword_140466188 + 8 * v43);
        v46 = *(_QWORD *)(v45 + 7800);
        if ( v44 >= *(_QWORD *)(v46 + 64) )
        {
          v47 = (__int64 *)(a1 + 24);
          if ( *(_QWORD *)(a1 + 24) )
          {
            v48 = (__int64 *)(v45 + 7808);
            if ( *(__int64 **)(v45 + 7808) != v47 )
              break;
          }
        }
      }
LABEL_37:
      v7 += 4096LL;
      if ( !--a3 )
        goto LABEL_38;
      v23 = 0x7FFFFFFFF8LL;
    }
    v90 = (volatile signed __int64 *)&SpinLock;
    v89 = 0LL;
    v60 = KeGetCurrentPrcb();
    v61 = v60->SchedulerAssist;
    if ( v61 )
    {
      if ( v60->NestingLevel <= 1u )
      {
        v83 = v61[5];
        v61[5] = v83 + 1;
        if ( v83 == -1 )
          KiRemoveSystemWorkPriorityKick(v60);
      }
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      KiAcquireQueuedSpinLockInstrumented(&v89, &SpinLock);
    }
    else
    {
      v62 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&SpinLock, (__int64)&v89);
      if ( v62 )
        KxWaitForLockOwnerShip((__int64)&v89, v62);
    }
    if ( *(_BYTE *)(v46 + 53) || (v68 = *v47) == 0 )
    {
      *(_BYTE *)(v46 + 54) = 1;
    }
    else
    {
      v69 = *(__int64 ***)(a1 + 32);
      if ( *(__int64 **)(v68 + 8) != v47
        || *v69 != v47
        || (*v69 = (__int64 *)v68, *(_QWORD *)(v68 + 8) = v69, v70 = *v48, *(__int64 **)(*v48 + 8) != v48) )
      {
        __fastfail(3u);
      }
      *v47 = v70;
      *(_QWORD *)(a1 + 32) = v48;
      *(_QWORD *)(v70 + 8) = v47;
      *v48 = (__int64)v47;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(&v89, retaddr);
      goto LABEL_103;
    }
    _m_prefetchw(&v89);
    v63 = v89;
    if ( !v89 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v90, 0LL, (signed __int64)&v89) == &v89 )
      {
LABEL_103:
        v64 = KeGetCurrentPrcb();
        v65 = v64->SchedulerAssist;
        if ( v65 )
        {
          if ( v64->NestingLevel <= 1u )
          {
            v84 = v65[5] - 1;
            v65[5] = v84;
            if ( !v84 )
              KiRemoveSystemWorkPriorityKick(v64);
          }
        }
        goto LABEL_37;
      }
      v63 = KxWaitForLockChainValid(&v89);
    }
    v89 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v63 + 8), 1uLL);
    goto LABEL_103;
  }
LABEL_38:
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    result = KiReleaseQueuedSpinLockInstrumented(&v92, retaddr);
    goto LABEL_41;
  }
  _m_prefetchw(&v92);
  result = v92;
  if ( v92 )
    goto LABEL_117;
  result = _InterlockedCompareExchange64(v93, 0LL, (signed __int64)&v92);
  if ( (__int64 *)result != &v92 )
  {
    result = KxWaitForLockChainValid(&v92);
LABEL_117:
    v92 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
  }
LABEL_41:
  v37 = KeGetCurrentPrcb();
  v38 = v37->SchedulerAssist;
  if ( v38 )
  {
    if ( v37->NestingLevel <= 1u )
    {
      result = (unsigned int)(v38[5] - 1);
      v38[5] = result;
      if ( !(_DWORD)result )
        result = KiRemoveSystemWorkPriorityKick(v37);
    }
  }
  if ( v24 )
  {
    if ( v97 < 0xFFFFF68000000000uLL || (result = 0xFFFFF6FFFFFFFFFFuLL, v97 > 0xFFFFF6FFFFFFFFFFuLL) )
    {
      v39 = ((v97 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
      v40 = *(_QWORD *)v39;
      if ( v39 >= 0xFFFFF6FB7DBED000uLL
        && v39 <= 0xFFFFF6FB7DBED7F8uLL
        && (MiFlags & 0xC00000) != 0
        && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
        && (v40 & 1) != 0
        && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
      {
        v85 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
        if ( v85 )
        {
          v86 = *(_QWORD *)(v85 + 8 * ((v39 >> 3) & 0x1FF));
          v87 = v40 | 0x20;
          if ( (v86 & 0x20) == 0 )
            v87 = v40;
          v40 = v87;
          if ( (v86 & 0x42) != 0 )
            v40 = v87 | 0x42;
        }
      }
      v98[0] = v40;
      v41 = (unsigned __int64 *)(48
                               * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)v98) >> 12) & 0xFFFFFFFFFLL)
                               - 0x58000000000LL);
      result = (unsigned __int64)*(unsigned int *)v41 >> 4;
      if ( (result & 0x3FF) == 0 )
      {
        MiCountWslesInPageTable(0xFFFFFFFFFLL, v42, v99);
        v66 = 8;
        while ( 1 )
        {
          result = --v66;
          v67 = v99[v66];
          if ( v67 )
            break;
          if ( !v66 )
            return result;
        }
        result = *v41 & 0xFFFFFFFFFFFE000FuLL;
        *v41 = result | (16 * (v67 & 0x3FF | ((unsigned __int64)(v66 & 7) << 10)));
      }
    }
  }
  return result;
}
