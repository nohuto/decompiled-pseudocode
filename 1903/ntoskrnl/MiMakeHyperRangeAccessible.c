/*
 * XREFs of MiMakeHyperRangeAccessible @ 0x1400524E0
 * Callers:
 *     MiCommitPageTablesForVad @ 0x140603C50 (MiCommitPageTablesForVad.c)
 *     MiExpandVadBitMap @ 0x140692584 (MiExpandVadBitMap.c)
 *     MiExpandVadBitMapDown @ 0x140892678 (MiExpandVadBitMapDown.c)
 * Callees:
 *     MiFillHyperPtes @ 0x14001F650 (MiFillHyperPtes.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiWalkPageTables @ 0x140048F60 (MiWalkPageTables.c)
 *     MiLockWorkingSetShared @ 0x14005D630 (MiLockWorkingSetShared.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140060A60 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiGetAnyMultiplexedVm @ 0x14008D9C0 (MiGetAnyMultiplexedVm.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x1400B8020 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiFastLockLeafPageTable @ 0x1400CB770 (MiFastLockLeafPageTable.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlockPageTableInternal @ 0x1400FDF40 (MiUnlockPageTableInternal.c)
 *     MiGetPageTableLockBuffer @ 0x1400FE0EC (MiGetPageTableLockBuffer.c)
 *     MiMakeHyperPteDemandZero @ 0x1401238A0 (MiMakeHyperPteDemandZero.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x14033B104 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     MiReturnFullProcessCommitment @ 0x1405EC7B0 (MiReturnFullProcessCommitment.c)
 *     MiChargeFullProcessCommitment @ 0x140603B80 (MiChargeFullProcessCommitment.c)
 */

__int64 __fastcall MiMakeHyperRangeAccessible(unsigned __int64 a1, unsigned __int64 a2, __int64 *a3)
{
  __int64 v3; // rsi
  _KPROCESS *Process; // rax
  unsigned __int16 *v7; // r13
  unsigned __int8 v8; // al
  LONG *v9; // rbx
  unsigned __int8 v10; // r12
  struct _KPRCB *CurrentPrcb; // r15
  _DWORD *SchedulerAssist; // rcx
  signed __int32 v13; // ett
  __int64 v14; // rdx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r12
  unsigned __int64 v17; // rbx
  __int64 v18; // rdi
  unsigned __int64 v19; // r14
  __int64 v20; // rdi
  __int64 v21; // r15
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // rcx
  unsigned __int16 *v24; // rdi
  int v25; // eax
  _KPROCESS *v26; // rdx
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // rdi
  unsigned __int64 v29; // rbx
  __int64 v30; // rcx
  char v31; // dl
  signed __int64 v32; // rdx
  bool v33; // zf
  signed __int64 v34; // rax
  __int64 v35; // rax
  __int64 result; // rax
  unsigned __int64 v37; // rbx
  _DWORD *v38; // rcx
  unsigned __int8 CurrentIrql; // cl
  int v40; // eax
  int v41; // eax
  unsigned __int64 DeepFreezeStartTime; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  struct _KLOCK_QUEUE_HANDLE *SelfmapLockHandle; // rcx
  struct _KPRCB *v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rdi
  int v49; // eax
  volatile signed __int32 *PageTableLockBuffer; // r8
  signed __int32 v51; // eax
  int v52; // edx
  signed __int32 v53; // ett
  unsigned __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // r8
  unsigned int v57; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v58; // [rsp+38h] [rbp-C8h]
  int v59; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v60; // [rsp+48h] [rbp-B8h]
  _DWORD v61[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v63; // [rsp+60h] [rbp-A0h]
  __int64 *v64; // [rsp+68h] [rbp-98h]
  unsigned __int64 v65; // [rsp+70h] [rbp-90h]
  _KPROCESS *v66; // [rsp+78h] [rbp-88h]
  __int64 v67; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v68; // [rsp+88h] [rbp-78h]
  __int64 v69; // [rsp+90h] [rbp-70h]
  unsigned __int64 v70; // [rsp+98h] [rbp-68h]
  _QWORD v71[22]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = 0LL;
  v64 = a3;
  v61[1] = 0;
  v65 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v66 = Process;
  *a3 = 0LL;
  v61[0] = 0;
  v7 = &Process[1].IdealNode[6];
  v8 = Process[1].SecureState.SecureHandle & 7;
  if ( v8 >= 6u )
  {
    CurrentIrql = KeGetCurrentIrql();
    v58 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  }
  else
  {
    if ( v8 == 2 )
      v9 = &dword_140467200;
    else
      v9 = (LONG *)(v7 + 96);
    v10 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v10 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(v9, v10);
    }
    else
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v40 = SchedulerAssist[5];
          SchedulerAssist[5] = v40 + 1;
          if ( v40 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      _m_prefetchw(v9);
      v13 = *v9 & 0x7FFFFFFF;
      if ( v13 != _InterlockedCompareExchange(v9, v13 + 1, v13) )
      {
        v38 = CurrentPrcb->SchedulerAssist;
        if ( v38 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v41 = v38[5] - 1;
            v38[5] = v41;
            if ( !v41 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        ExpWaitForSpinLockSharedAndAcquire(v9, v10);
      }
    }
    if ( v9[1] )
      _InterlockedExchange(v9 + 1, 0);
    v58 = v10;
  }
  v14 = 0LL;
  v57 = 0;
  v15 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v70 = v15;
  v16 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v62 = 0LL;
    v17 = 0LL;
    v63 = 0LL;
    v18 = 0LL;
    v19 = v15;
    if ( v15 <= v16 )
    {
      v20 = 0LL;
      v69 = 0LL;
      v21 = (__int64)(v16 << 25) >> 16;
      v60 = v21;
      while ( 1 )
      {
        v67 = 0LL;
        v68 = 0LL;
        memset((char *)v71 + 2, 0, 0xA6uLL);
        LOWORD(v71[0]) = 2145;
        v22 = (__int64)((v19 << 25) - v20) >> 16;
        v23 = v22;
        if ( v22 >= 0xFFFFF68000000000uLL )
        {
          do
          {
            if ( v23 > 0xFFFFF6FFFFFFFFFFuLL )
              break;
            v23 = (__int64)((v23 << 25) - v20) >> 16;
          }
          while ( v23 >= 0xFFFFF68000000000uLL );
          v21 = v60;
        }
        v24 = v23 >= 0xFFFF800000000000uLL && (v23 < qword_1404675B0 || v23 > qword_140465EE0)
            ? (unsigned __int16 *)MiGetAnyMultiplexedVm(1LL)
            : &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
        v25 = MiFastLockLeafPageTable(v24, v22, 0LL);
        if ( v25 )
        {
          LODWORD(v67) = v25 - 1;
          v27 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v68 = v27;
        }
        else
        {
          LOWORD(v71[0]) |= 4u;
          v71[20] = &v67;
          v71[1] = 0LL;
          v71[2] = v24;
          BYTE2(v71[0]) = BYTE2(v71[0]) & 0xE3 | 4;
          v71[19] = MiGetNextPageTableTail;
          BYTE6(v71[0]) = v58;
          v71[3] = v22;
          v71[4] = v21;
          MiWalkPageTables((__int16 *)v71);
          v27 = v68;
        }
        if ( !v27 )
          break;
        v28 = ((v27 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        if ( v27 != v19 )
        {
          MiUnlockPageTableInternal(v7);
          v37 = v27 - 8;
          goto LABEL_62;
        }
        v29 = v16;
        if ( (v19 & 0xFFFFFFFFFFFFF000uLL) + 4088 <= v16 )
          v29 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4088;
        if ( v19 <= v29 )
        {
          do
          {
            v30 = *(_QWORD *)v19;
            if ( v19 >= 0xFFFFF6FB7DBED000uLL && v19 <= 0xFFFFF6FB7DBED7F8uLL && (MiFlags & 0xC00000) != 0 )
            {
              v26 = KeGetCurrentThread()->ApcState.Process;
              if ( v26->AddressPolicy != 1 && (v30 & 1) != 0 && ((v30 & 0x20) == 0 || (v30 & 0x42) == 0) )
              {
                v26 = KeGetCurrentThread()->ApcState.Process;
                DeepFreezeStartTime = v26[2].DeepFreezeStartTime;
                if ( DeepFreezeStartTime )
                {
                  v43 = *(_QWORD *)(DeepFreezeStartTime + 8 * ((v19 >> 3) & 0x1FF));
                  v44 = v30 | 0x20;
                  v26 = (_KPROCESS *)(unsigned __int8)v43;
                  LOBYTE(v26) = v43 & 0x20;
                  if ( (v43 & 0x20) == 0 )
                    v44 = *(_QWORD *)v19;
                  v30 = v44;
                  if ( (v43 & 0x42) != 0 )
                    v30 = v44 | 0x42;
                }
              }
            }
            if ( !v30 )
              MiMakeHyperPteDemandZero(v19, v26, v61);
            v19 += 8LL;
          }
          while ( (v19 & 0xFFF) != 0 && v19 <= v29 );
          v21 = v60;
          v3 = 0LL;
        }
        v31 = v7[92] & 7;
        if ( v28 == 0xFFFFF6FB7DBEDF68uLL )
        {
          if ( v31 )
          {
            if ( v31 == 7 )
            {
              SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[1];
            }
            else
            {
              v46 = KeGetCurrentPrcb();
              if ( v31 == 5 )
                SelfmapLockHandle = v46->SelfmapLockHandle;
              else
                SelfmapLockHandle = &v46->SelfmapLockHandle[3];
            }
          }
          else
          {
            SelfmapLockHandle = &KeGetCurrentPrcb()->SelfmapLockHandle[2];
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(SelfmapLockHandle);
        }
        else if ( v31 )
        {
          if ( v28 < 0xFFFFF6FB7DBED000uLL || v28 > 0xFFFFF6FB7DBEDFFFuLL )
          {
LABEL_35:
            v32 = *(_QWORD *)v28;
            if ( v28 >= 0xFFFFF6FB7DBED000uLL
              && v28 <= 0xFFFFF6FB7DBED7F8uLL
              && (MiFlags & 0xC00000) != 0
              && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
              && (v32 & 1) != 0
              && ((v32 & 0x20) == 0 || (v32 & 0x42) == 0) )
            {
              v54 = KeGetCurrentThread()->ApcState.Process[2].DeepFreezeStartTime;
              if ( v54 )
              {
                v55 = *(_QWORD *)(v54 + 8 * ((v28 >> 3) & 0x1FF));
                v56 = v32 | 0x20;
                if ( (v55 & 0x20) == 0 )
                  v56 = *(_QWORD *)v28;
                v32 = v56;
                if ( (v55 & 0x42) != 0 )
                  v32 = v56 | 0x42;
              }
            }
            do
            {
              v34 = _InterlockedCompareExchange64((volatile signed __int64 *)v28, v32 & 0xCFFFFFFFFFFFFFFFuLL, v32);
              v33 = v32 == v34;
              v32 = v34;
            }
            while ( !v33 );
            v21 = v60;
            goto LABEL_38;
          }
          PageTableLockBuffer = (volatile signed __int32 *)MiGetPageTableLockBuffer(v7, v28, &v59);
          v51 = *PageTableLockBuffer;
          v52 = ~(3 << v59);
          do
          {
            v53 = v51;
            v51 = _InterlockedCompareExchange(PageTableLockBuffer, v51 & v52, v51);
          }
          while ( v53 != v51 );
        }
        else
        {
          if ( v28 < 0xFFFFF6FB7DBED000uLL )
            goto LABEL_35;
          if ( v28 > 0xFFFFF6FB7DBEDFFFuLL )
            goto LABEL_35;
          v47 = *(_QWORD *)(*(_QWORD *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[14] + 608LL);
          if ( !v47 )
            goto LABEL_35;
          v48 = (v28 >> 3) & 0x1FF;
          v49 = *(_DWORD *)(v47 + 4 * v48);
          if ( (v49 & 0x3FFFFFFF) != 0 )
          {
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(v47 + 4 * v48));
          }
          else
          {
            if ( v49 >= 0 )
              KeBugCheckEx(0x10u, v47 + 4 * v48, 0x100uLL, 0LL, 0LL);
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v47 + 4 * v48));
          }
        }
LABEL_38:
        v20 = v69;
        if ( v19 > v16 )
        {
          v17 = v63;
          v18 = v62;
          v14 = v57;
          goto LABEL_40;
        }
      }
      v37 = v16;
LABEL_62:
      MiFillHyperPtes(v19, v37, v58, (__int64)v61);
      v19 = v37 + 8;
      goto LABEL_38;
    }
LABEL_40:
    if ( (_DWORD)v14 || !v18 )
      break;
    MiUnlockWorkingSetShared(v7, v58);
    v65 = v17;
    result = MiChargeFullProcessCommitment(v66, v18 + v17);
    if ( (int)result < 0 )
      return result;
    v61[0] = 1;
    *v64 = v18;
    MiLockWorkingSetShared(v7);
    v15 = v70;
    v14 = 1LL;
    v57 = 1;
  }
  if ( v17 )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)(MiGetSharedVm(v7, v14) + 48), v17);
    v17 = v63;
    v18 = v62;
  }
  MiUnlockWorkingSetShared(v7, v58);
  v35 = *v64;
  if ( v18 != *v64 )
  {
    *v64 = v18;
    v3 = v35 - v18;
  }
  if ( v17 != v65 )
    v3 += v65 - v17;
  if ( v3 )
    MiReturnFullProcessCommitment(v66, v3);
  return 0LL;
}
