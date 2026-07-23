/*
 * XREFs of KeFlushMultipleRangeTb @ 0x140075BA0
 * Callers:
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteVaTail @ 0x140075870 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x140075A40 (MiAgeWorkingSetTail.c)
 * Callees:
 *     KiIpiSendRequest @ 0x1400ED3F0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1400EDC44 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiFlushRangeWorker @ 0x140109B40 (KiFlushRangeWorker.c)
 *     KiFlushRangeTb @ 0x140173E64 (KiFlushRangeTb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     HvlFlushRangeListTb @ 0x140279838 (HvlFlushRangeListTb.c)
 *     KiFlushAffinity @ 0x140293FC8 (KiFlushAffinity.c)
 *     KiPrepareFlushParameters @ 0x140294098 (KiPrepareFlushParameters.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     VmFlushTb @ 0x14030B8E0 (VmFlushTb.c)
 *     ExFlushTb @ 0x14031D4E8 (ExFlushTb.c)
 */

unsigned __int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  char v6; // di
  __int64 v8; // r13
  char v9; // bl
  unsigned __int64 result; // rax
  unsigned __int8 v11; // si
  struct _KPRCB *v12; // rdi
  unsigned int v13; // ebx
  _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // r8
  _WORD *v17; // r11
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rcx
  int v21; // r10d
  unsigned __int16 v22; // ax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v30; // rcx
  _QWORD *v31; // rdi
  __int64 v32; // rbp
  struct _KPRCB *v33; // rcx
  int v34; // eax
  unsigned __int8 v35; // r10
  struct _KPRCB *v36; // rcx
  unsigned __int8 v37; // bl
  struct _KPRCB *v38; // rcx
  signed __int32 v39[8]; // [rsp+0h] [rbp-168h] BYREF
  char v40[8]; // [rsp+40h] [rbp-128h] BYREF
  _QWORD *v41; // [rsp+48h] [rbp-120h] BYREF
  int v42; // [rsp+50h] [rbp-118h]
  unsigned int v43; // [rsp+54h] [rbp-114h]
  __int64 v44; // [rsp+58h] [rbp-110h] BYREF
  _WORD v45[2]; // [rsp+60h] [rbp-108h] BYREF
  int v46; // [rsp+64h] [rbp-104h]
  _QWORD v47[21]; // [rsp+68h] [rbp-100h] BYREF

  v6 = 0;
  v8 = a1;
  if ( (HvlEnlightenments & 4) != 0 )
  {
    if ( (HvlEnlightenments & 2) != 0 )
    {
      v9 = 1;
    }
    else if ( (KiFlushPcid & 3) == 1 )
    {
      v9 = 1;
    }
    else if ( (_DWORD)KeNumberProcessors_0 == 1 )
    {
      v9 = 0;
    }
    else if ( a4 )
    {
      v9 = 1;
    }
    else
    {
      _InterlockedOr(v39, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( (unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                           CurrentPrcb,
                           &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors) )
      {
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v30 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v30->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v30);
        }
        v9 = 1;
      }
      else
      {
        v9 = 0;
        if ( (_DWORD)v8 )
        {
          v31 = a2;
          v32 = v8;
          do
          {
            KiFlushRangeTb(*v31++, a3);
            --v32;
          }
          while ( v32 );
        }
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v33 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v33);
        }
        v6 = 1;
      }
      __writecr8(CurrentIrql);
    }
  }
  else
  {
    v9 = 0;
  }
  result = *a2;
  if ( a3 == 1
    && result <= 0x7FFFFFFEFFFFLL
    && (result = (unsigned __int64)KeGetCurrentThread(), *(_QWORD *)(*(_QWORD *)(result + 184) + 720LL))
    || v9 )
  {
    KiPrepareFlushParameters(a3, &v44, v40);
    v34 = KiFlushAffinity(a4);
    result = HvlFlushRangeListTb(v44, v34, (unsigned __int8)v40[0], v35, v9, v8, (__int64)a2);
    v6 |= result;
  }
  if ( !v6 )
  {
    v41 = a2;
    v42 = v8;
    v43 = a3;
    v11 = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v11 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v12 = KeGetCurrentPrcb();
    v13 = 0;
    if ( a4 )
    {
      v21 = 1;
      LODWORD(v17) = 0;
      if ( (unsigned int)KeNumberProcessors_0 > 1 )
      {
LABEL_26:
        v24 = 2147483652LL;
        if ( a4 != 1 )
          v24 = 4LL;
        KiIpiSendRequest((_DWORD)v12, v21, (_DWORD)v17, (unsigned int)&v41, v8, v24);
        KiFlushRangeWorker(&v41);
        while ( v12->PacketBarrier )
        {
          if ( (++v13 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v26, v25, v27) )
          {
            HvlNotifyLongSpinWait(v13);
          }
          else
          {
            _mm_pause();
          }
        }
        goto LABEL_18;
      }
    }
    else
    {
      _InterlockedOr(v39, 0);
      CurrentThread = v12->CurrentThread;
      v46 = 0;
      Process = CurrentThread->ApcState.Process;
      Count = Process->ActiveProcessors.Count;
      LOWORD(CurrentThread) = Process->ActiveProcessors.Size;
      v45[0] = Count;
      v45[1] = (_WORD)CurrentThread;
      if ( Count )
      {
        memmove(v47, Process->ActiveProcessors.Bitmap, 8LL * Count);
        Count = v45[0];
      }
      v17 = v45;
      v18 = (unsigned int)KiProcessorIndexToNumberMappingTable[v12->Number] >> 6;
      if ( Count > (unsigned int)v18 )
      {
        v19 = &v47[v18];
        v20 = *v19;
        _bittestandreset64(&v20, KiProcessorIndexToNumberMappingTable[v12->Number] & 0x3F);
        *v19 = v20;
        Count = v45[0];
      }
      v21 = 0;
      v22 = 0;
      if ( Count )
      {
        do
        {
          v23 = v47[v22];
          if ( v23 )
          {
            if ( v22 != v12->Group || v23 != v12->GroupSetMember )
              goto LABEL_26;
          }
        }
        while ( ++v22 < v45[0] );
      }
    }
    KiFlushRangeWorker(&v41);
LABEL_18:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v11 < 2u )
    {
      v36 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v36->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v36);
    }
    result = v11;
    __writecr8(v11);
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v8, a2, a3);
  if ( ExTbFlushActive )
  {
    v37 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v37 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb((unsigned int)v8, a2, a3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v37 < 2u )
    {
      v38 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v38->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v38);
    }
    result = v37;
    __writecr8(v37);
  }
  return result;
}
