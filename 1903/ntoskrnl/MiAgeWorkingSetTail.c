/*
 * XREFs of MiAgeWorkingSetTail @ 0x1400B94E0
 * Callers:
 *     MiAgePte @ 0x14004CAB0 (MiAgePte.c)
 * Callees:
 *     MiFreeWsleList @ 0x140024C50 (MiFreeWsleList.c)
 *     KeFlushTb @ 0x1400B9940 (KeFlushTb.c)
 *     KiIpiSendRequest @ 0x1400B9DD0 (KiIpiSendRequest.c)
 *     KiFlushRangeWorker @ 0x1400FE570 (KiFlushRangeWorker.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1401251F8 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KeFlushCurrentTbOnly @ 0x14017A1B0 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x14017A27C (KeFlushMultipleRangeCurrentTb.c)
 *     KiFlushRangeTb @ 0x14017A358 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x140285170 (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x14028D990 (HvlFlushRangeListTb.c)
 *     KiFlushAffinity @ 0x1402AA7B8 (KiFlushAffinity.c)
 *     KiPrepareFlushParameters @ 0x1402AA888 (KiPrepareFlushParameters.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AF1E0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiProcessVmAccessedInfo @ 0x1402C8A9C (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x1402C8B60 (MiQueryEPTAccessedState.c)
 *     VmFlushTb @ 0x1403293DC (VmFlushTb.c)
 *     ExFlushTb @ 0x14033C588 (ExFlushTb.c)
 */

__int64 __fastcall MiAgeWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // ebp
  __int64 v4; // r14
  int *v5; // rdi
  __int64 v6; // rbp
  _DWORD *v7; // rdx
  char v9; // cl
  unsigned __int64 v10; // rdx
  unsigned int v11; // r13d
  _KPROCESS *Process; // rax
  unsigned __int64 SecureHandle; // rax
  unsigned int v14; // r11d
  bool v15; // zf
  char v16; // r12
  char v17; // r15
  int *v18; // rdx
  unsigned __int8 v19; // r12
  unsigned int v20; // r15d
  struct _KPRCB *v21; // r13
  _KPROCESS *v22; // rdx
  unsigned __int16 v23; // r8
  _QWORD *v24; // r11
  __int64 v25; // rcx
  __int64 *v26; // rdx
  __int64 v27; // rcx
  int v28; // r10d
  unsigned __int16 v29; // cx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  unsigned int v33; // r15d
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v36; // rcx
  unsigned int v37; // r14d
  _QWORD *v38; // r12
  __int64 v39; // r13
  struct _KPRCB *v40; // rcx
  unsigned __int64 v41; // rax
  unsigned int v42; // r11d
  int v43; // eax
  unsigned __int8 v44; // r10
  struct _KPRCB *v45; // rcx
  unsigned __int8 v46; // r15
  struct _KPRCB *v47; // rcx
  signed __int32 v48[8]; // [rsp+0h] [rbp-158h] BYREF
  char v49[4]; // [rsp+40h] [rbp-118h] BYREF
  unsigned int v50; // [rsp+44h] [rbp-114h]
  unsigned int v51; // [rsp+48h] [rbp-110h]
  int v52; // [rsp+4Ch] [rbp-10Ch]
  int *v53; // [rsp+50h] [rbp-108h] BYREF
  int v54; // [rsp+58h] [rbp-100h]
  unsigned int v55; // [rsp+5Ch] [rbp-FCh]
  __int64 v56; // [rsp+60h] [rbp-F8h]
  __int64 v57; // [rsp+68h] [rbp-F0h] BYREF
  _QWORD v58[22]; // [rsp+70h] [rbp-E8h] BYREF

  v1 = *(_QWORD *)(a1 + 160);
  v52 = 0;
  v3 = 0;
  v4 = v1 + 64;
  while ( 1 )
  {
    v5 = *(int **)(v1 + 56);
    if ( !v5 )
      goto LABEL_5;
    v6 = (unsigned int)v5[3];
    if ( !(_DWORD)v6 )
    {
      v3 = v52;
      goto LABEL_5;
    }
    v9 = *((_BYTE *)v5 + 4);
    v10 = qword_140465B50;
    if ( (v9 & 2) == 0 )
    {
      v11 = *v5;
      v50 = v11;
      if ( v11 != 1 )
        goto LABEL_51;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].ActiveProcessors.Bitmap[19] )
        goto LABEL_65;
      SecureHandle = Process->SecureState.SecureHandle;
      if ( SecureHandle )
        LOBYTE(SecureHandle) = 1;
      if ( (_BYTE)SecureHandle )
LABEL_65:
        v10 = -1LL;
    }
    v11 = *v5;
    v50 = v11;
    if ( v11 == 1 )
    {
      v14 = 0;
      goto LABEL_19;
    }
LABEL_51:
    v14 = 1;
    if ( (v9 & 8) != 0 )
      v14 = 2;
LABEL_19:
    v15 = *((_BYTE *)v5 + 5) == 0;
    v51 = v14;
    if ( v15 && *((_QWORD *)v5 + 2) <= v10 )
    {
      if ( (v9 & 1) == 0 )
      {
        v16 = 0;
        if ( (HvlEnlightenments & 4) != 0 )
        {
          if ( (HvlEnlightenments & 2) != 0 )
          {
            v17 = 1;
          }
          else if ( (KiFlushPcid & 3) == 1 )
          {
            v17 = 1;
          }
          else if ( (_DWORD)KeNumberProcessors_0 == 1 )
          {
            v17 = 0;
          }
          else if ( v14 )
          {
            v17 = 1;
          }
          else
          {
            _InterlockedOr(v48, 0);
            CurrentIrql = KeGetCurrentIrql();
            v56 = CurrentIrql;
            __writecr8(0xCuLL);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)CurrentIrql < 2u )
              _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
            CurrentPrcb = KeGetCurrentPrcb();
            if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                                 CurrentPrcb,
                                 &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors) )
            {
              if ( KiIrqlFlags
                && (KiIrqlFlags & 1) != 0
                && KeGetCurrentIrql() >= 2u
                && (unsigned __int8)CurrentIrql < 2u )
              {
                v36 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v36);
              }
              v17 = 1;
            }
            else
            {
              v17 = 0;
              v37 = v50;
              v38 = v5 + 6;
              v39 = v6;
              do
              {
                KiFlushRangeTb(*v38++, v37);
                --v39;
              }
              while ( v39 );
              LOBYTE(CurrentIrql) = v56;
              v4 = v1 + 64;
              if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && (unsigned __int8)v56 < 2u )
              {
                v40 = KeGetCurrentPrcb();
                _InterlockedAnd((volatile signed __int32 *)v40->SchedulerAssist, 0xFFFEFFFF);
                KiRemoveSystemWorkPriorityKick(v40);
              }
              v16 = 1;
            }
            v41 = (unsigned __int8)CurrentIrql;
            v11 = v50;
            __writecr8(v41);
          }
        }
        else
        {
          v17 = 0;
        }
        v18 = v5 + 6;
        if ( v11 == 1
          && *((_QWORD *)v5 + 3) <= 0x7FFFFFFEFFFFuLL
          && KeGetCurrentThread()->ApcState.Process->SecureState.SecureHandle
          || v17 )
        {
          KiPrepareFlushParameters(v11, &v57, v49);
          v43 = KiFlushAffinity(v42);
          v16 |= HvlFlushRangeListTb(v57, v43, (unsigned __int8)v49[0], v44, v17, v6, (__int64)(v5 + 6));
          v18 = v5 + 6;
        }
        if ( v16 )
          goto LABEL_41;
        memset(v58, 0, 0xA8uLL);
        v54 = v6;
        v53 = v5 + 6;
        v55 = v11;
        v19 = KeGetCurrentIrql();
        __writecr8(0xCuLL);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v19 < 2u )
          _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
        v20 = v51;
        v21 = KeGetCurrentPrcb();
        if ( v51 )
        {
          LODWORD(v24) = 0;
          v28 = 1;
          if ( (unsigned int)KeNumberProcessors_0 > 1 )
          {
LABEL_55:
            v31 = 2147483652LL;
            if ( v20 != 1 )
              v31 = 4LL;
            KiIpiSendRequest((_DWORD)v21, v28, (_DWORD)v24, (unsigned int)&v53, v31);
            KiFlushRangeWorker(&v53);
            v33 = 0;
            while ( v21->PacketBarrier )
            {
              if ( (++v33 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v32) )
              {
                HvlNotifyLongSpinWait(v33);
              }
              else
              {
                _mm_pause();
              }
            }
            goto LABEL_39;
          }
        }
        else
        {
          _InterlockedOr(v48, 0);
          v22 = v21->CurrentThread->ApcState.Process;
          v58[0] = *(unsigned int *)&v22->ActiveProcessors.Count;
          v23 = v58[0];
          if ( LOWORD(v58[0]) )
          {
            memmove(&v58[1], v22->ActiveProcessors.Bitmap, 8LL * LOWORD(v58[0]));
            v23 = v58[0];
          }
          v24 = v58;
          v25 = (unsigned int)KiProcessorIndexToNumberMappingTable[v21->Number] >> 6;
          if ( v23 > (unsigned int)v25 )
          {
            v26 = &v58[v25 + 1];
            v27 = *v26;
            _bittestandreset64(&v27, KiProcessorIndexToNumberMappingTable[v21->Number] & 0x3F);
            *v26 = v27;
            v23 = v58[0];
          }
          v28 = 0;
          v29 = 0;
          if ( v23 )
          {
            do
            {
              v30 = v58[v29 + 1];
              if ( v30 )
              {
                if ( v29 != v21->Group || v30 != v21->GroupSetMember )
                  goto LABEL_55;
              }
            }
            while ( ++v29 < LOWORD(v58[0]) );
          }
        }
        KiFlushRangeWorker(&v53);
LABEL_39:
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v19 < 2u )
        {
          v45 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v45->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v45);
        }
        __writecr8(v19);
        v11 = v50;
        v18 = v5 + 6;
LABEL_41:
        if ( VmTbFlushEnabled )
        {
          VmFlushTb((unsigned int)v6, v18, v11);
          v18 = v5 + 6;
        }
        if ( ExTbFlushActive )
        {
          v46 = KeGetCurrentIrql();
          __writecr8(0xFuLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v46 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          ExFlushTb((unsigned int)v6, v18, v11);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v46 < 2u )
          {
            v47 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v47->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick(v47);
          }
          __writecr8(v46);
        }
        goto LABEL_44;
      }
      KeFlushMultipleRangeCurrentTb((unsigned int)v6, v5 + 6, v11, 12LL);
    }
    else
    {
      if ( (v9 & 1) != 0 )
        KeFlushCurrentTbOnly(v11, v10, 0x7FFFFFFEFFFFLL, 12LL);
      else
        KeFlushTb(v11, v14);
      *((_BYTE *)v5 + 5) = 0;
    }
LABEL_44:
    v3 = v52;
    *((_BYTE *)v5 + 4) &= ~8u;
    v5[3] = 0;
    *((_QWORD *)v5 + 2) = 0LL;
LABEL_5:
    if ( *(_DWORD *)(v4 + 12) )
      MiFreeWsleList(*(_QWORD *)(a1 + 16), v4, 0);
    v7 = *(_DWORD **)(v1 + 248);
    if ( !v7 || !*v7 || !(unsigned int)MiQueryEPTAccessedState(a1, v7, (*(_DWORD *)v1 & 3) != 0) )
      break;
    MiProcessVmAccessedInfo(a1, *(_QWORD *)(v1 + 248), MiAgeWorkingSetEPTCallback, v1);
    v3 = 1;
    v52 = 1;
  }
  if ( (*(_BYTE *)(a1 + 2) & 2) != 0 || v3 )
    *(_BYTE *)(v1 + 6) = 1;
  return 0LL;
}
