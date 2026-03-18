/*
 * XREFs of KeFlushMultipleRangeTb @ 0x1400B91A0
 * Callers:
 *     MiDeleteVaTail @ 0x14004DE20 (MiDeleteVaTail.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 * Callees:
 *     KiPreprocessFlushTb @ 0x1400B94A0 (KiPreprocessFlushTb.c)
 *     KiIpiSendRequest @ 0x1400B9DD0 (KiIpiSendRequest.c)
 *     KiFlushRangeWorker @ 0x1400FE570 (KiFlushRangeWorker.c)
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
 *     VmFlushTb @ 0x1403293DC (VmFlushTb.c)
 *     ExFlushTb @ 0x14033C588 (ExFlushTb.c)
 */

unsigned __int64 __fastcall KeFlushMultipleRangeTb(unsigned int a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v6; // r13
  char v8; // di
  unsigned __int64 result; // rax
  __int64 v10; // r12
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *v12; // rdi
  _KTHREAD *CurrentThread; // rax
  unsigned int v14; // ebx
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // r8
  _QWORD *v17; // r11
  __int64 v18; // rcx
  __int64 *v19; // rdx
  __int64 v20; // rcx
  int v21; // r10d
  unsigned __int16 v22; // ax
  __int64 v23; // rdx
  __int64 v24; // rcx
  _QWORD *v25; // rdi
  __int64 v26; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  int v28; // eax
  unsigned __int8 v29; // r11
  char v30; // r10
  struct _KPRCB *v31; // rcx
  unsigned __int8 v32; // bl
  struct _KPRCB *v33; // rcx
  signed __int32 v34[6]; // [rsp+8h] [rbp-100h] BYREF
  unsigned __int8 v35; // [rsp+48h] [rbp-C0h] BYREF
  char v36; // [rsp+49h] [rbp-BFh] BYREF
  unsigned __int8 v37; // [rsp+4Ah] [rbp-BEh] BYREF
  _QWORD *v38; // [rsp+50h] [rbp-B8h] BYREF
  int v39; // [rsp+58h] [rbp-B0h]
  unsigned int v40; // [rsp+5Ch] [rbp-ACh]
  int v41; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v42[22]; // [rsp+68h] [rbp-A0h] BYREF

  v6 = a1;
  v8 = 0;
  if ( (unsigned __int8)KiPreprocessFlushTb(0, a3, a4, (unsigned int)&v36, (__int64)&v35) )
  {
    if ( (_DWORD)v6 )
    {
      v25 = a2;
      v26 = v6;
      do
      {
        KiFlushRangeTb(*v25++, a3);
        --v26;
      }
      while ( v26 );
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v35 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v35);
    v8 = 1;
  }
  result = *a2;
  if ( a3 == 1
    && result <= 0x7FFFFFFEFFFFLL
    && (result = (unsigned __int64)KeGetCurrentThread(), *(_QWORD *)(*(_QWORD *)(result + 184) + 728LL))
    || v36 )
  {
    KiPrepareFlushParameters(a3, &v41, &v37);
    v28 = KiFlushAffinity(a4);
    result = HvlFlushRangeListTb(v41, v28, v37, v29, v30, v6, (__int64)a2);
    v8 |= result;
  }
  if ( !v8 )
  {
    memset(v42, 0, 0xA8uLL);
    v38 = a2;
    v10 = 4LL;
    v39 = v6;
    v40 = a3;
    if ( a4 == 1 )
      v10 = 2147483652LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    v12 = KeGetCurrentPrcb();
    if ( a4 )
    {
      v14 = 0;
      v21 = 1;
      LODWORD(v17) = 0;
      if ( (unsigned int)KeNumberProcessors_0 > 1 )
      {
LABEL_30:
        KiIpiSendRequest((_DWORD)v12, v21, (_DWORD)v17, (unsigned int)&v38, v10);
        KiFlushRangeWorker(&v38);
        while ( v12->PacketBarrier )
        {
          if ( (++v14 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v24) )
          {
            HvlNotifyLongSpinWait(v14);
          }
          else
          {
            _mm_pause();
          }
        }
        goto LABEL_19;
      }
    }
    else
    {
      _InterlockedOr(v34, 0);
      CurrentThread = v12->CurrentThread;
      v14 = 0;
      HIDWORD(v42[0]) = 0;
      Process = CurrentThread->ApcState.Process;
      Count = Process->ActiveProcessors.Count;
      LOWORD(CurrentThread) = Process->ActiveProcessors.Size;
      LOWORD(v42[0]) = Count;
      WORD1(v42[0]) = (_WORD)CurrentThread;
      if ( Count )
      {
        memmove(&v42[1], Process->ActiveProcessors.Bitmap, 8LL * Count);
        Count = v42[0];
      }
      v17 = v42;
      v18 = (unsigned int)KiProcessorIndexToNumberMappingTable[v12->Number] >> 6;
      if ( Count > (unsigned int)v18 )
      {
        v19 = &v42[v18 + 1];
        v20 = *v19;
        _bittestandreset64(&v20, KiProcessorIndexToNumberMappingTable[v12->Number] & 0x3F);
        *v19 = v20;
        Count = v42[0];
      }
      v21 = 0;
      v22 = 0;
      if ( Count )
      {
        do
        {
          v23 = v42[v22 + 1];
          if ( v23 )
          {
            if ( v22 != v12->Group || v23 != v12->GroupSetMember )
              goto LABEL_30;
          }
        }
        while ( ++v22 < LOWORD(v42[0]) );
      }
    }
    KiFlushRangeWorker(&v38);
LABEL_19:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v31 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v31->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v31);
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb((unsigned int)v6, a2, a3);
  if ( ExTbFlushActive )
  {
    v32 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v32 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb((unsigned int)v6, a2, a3);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v32 < 2u )
    {
      v33 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v33->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v33);
    }
    result = v32;
    __writecr8(v32);
  }
  return result;
}
