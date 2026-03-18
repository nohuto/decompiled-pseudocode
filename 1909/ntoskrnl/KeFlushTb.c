/*
 * XREFs of KeFlushTb @ 0x1400997B0
 * Callers:
 *     MiGetUltraMapping @ 0x14002AC80 (MiGetUltraMapping.c)
 *     MiDeleteVaTail @ 0x14004DEC0 (MiDeleteVaTail.c)
 *     MiFlushTbList @ 0x140050080 (MiFlushTbList.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052C00 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertCachedPte @ 0x14006B510 (MiInsertCachedPte.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x140098A00 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAgeWorkingSetTail @ 0x140099350 (MiAgeWorkingSetTail.c)
 *     MiAttachSession @ 0x140127350 (MiAttachSession.c)
 *     MiGetWsAndMakePageTablesNx @ 0x14019C2A4 (MiGetWsAndMakePageTablesNx.c)
 *     MiSwitchToPfns @ 0x1409F25FC (MiSwitchToPfns.c)
 *     MiInitializeTbFlush @ 0x140A0F8D0 (MiInitializeTbFlush.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x140098A58 (KiIpiSendRequestEx.c)
 *     KxFlushNonGlobalTb @ 0x140099AC0 (KxFlushNonGlobalTb.c)
 *     KiIpiSendRequest @ 0x140099C40 (KiIpiSendRequest.c)
 *     KxSetTimeStampBusy @ 0x140101CB0 (KxSetTimeStampBusy.c)
 *     KiFlushCurrentTbWorker @ 0x140117590 (KiFlushCurrentTbWorker.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x140125868 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiFlushCurrentTbOnly @ 0x14017A908 (KiFlushCurrentTbOnly.c)
 *     KxFlushEntireTb @ 0x140188418 (KxFlushEntireTb.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     HvlNotifyLongSpinWait @ 0x140284ED0 (HvlNotifyLongSpinWait.c)
 *     VslFlushSecureAddressSpace @ 0x14028F398 (VslFlushSecureAddressSpace.c)
 *     KiFlushAddressSpaceTb @ 0x1402AA43C (KiFlushAddressSpaceTb.c)
 *     KiFlushAffinity @ 0x1402AA518 (KiFlushAffinity.c)
 *     KiIsFlushEntire @ 0x1402AA540 (KiIsFlushEntire.c)
 *     KiPrepareFlushParameters @ 0x1402AA5E8 (KiPrepareFlushParameters.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402AEF40 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     VmFlushTb @ 0x140328E2C (VmFlushTb.c)
 *     ExFlushTb @ 0x14033BFE8 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(__int64 a1, unsigned int a2)
{
  unsigned int v2; // esi
  bool v4; // dl
  __int64 v5; // r14
  unsigned __int8 v6; // bp
  struct _KPRCB *v7; // rdi
  unsigned int v8; // ebx
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // r8
  unsigned __int16 Size; // ax
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rcx
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v21; // rcx
  __int64 v22; // rax
  unsigned __int8 v23; // r10
  struct _KPRCB *v24; // rcx
  struct _KPRCB *v25; // rcx
  unsigned __int8 v26; // bl
  struct _KPRCB *v27; // rcx
  signed __int32 v28[8]; // [rsp+0h] [rbp-128h] BYREF
  char v29[8]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+48h] [rbp-E0h] BYREF
  _WORD v31[2]; // [rsp+50h] [rbp-D8h] BYREF
  int v32; // [rsp+54h] [rbp-D4h]
  _QWORD v33[21]; // [rsp+58h] [rbp-D0h] BYREF

  v2 = a1;
  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_2;
  if ( (HvlEnlightenments & 2) != 0 || (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire(a1) )
  {
LABEL_57:
    KiPrepareFlushParameters(v2, &v30, v29);
    v22 = KiFlushAffinity(a2);
    result = KiFlushAddressSpaceTb(v30, v22, (unsigned __int8)v29[0], v23);
    goto LABEL_18;
  }
  if ( (_DWORD)KeNumberProcessors_0 != 1 )
  {
    if ( !a2 )
    {
      _InterlockedOr(v28, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                            CurrentPrcb,
                            &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors) )
      {
        KiFlushCurrentTbOnly(v2);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v24 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v24->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v24);
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        goto LABEL_18;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v21 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v21->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v21);
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_57;
  }
LABEL_2:
  if ( !KiKvaShadow )
  {
    if ( !v2 || (int)v2 > 2 )
    {
      result = KxFlushEntireTb(a2);
      goto LABEL_18;
    }
    goto LABEL_74;
  }
  if ( v2 != 1 && (!v2 || v2 == 2) )
  {
LABEL_74:
    result = KxFlushNonGlobalTb(a2);
    goto LABEL_18;
  }
  memset(v33, 0, 0xA0uLL);
  v4 = 1;
  v5 = 3LL;
  if ( a2 == 1 )
    v5 = 2147483651LL;
  else
    v4 = a2 != 0;
  v6 = KeGetCurrentIrql();
  __writecr8(0xCuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v6 < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  if ( v4 )
  {
    if ( (unsigned __int8)KxSetTimeStampBusy(&KiTbFlushTimeStamp) )
    {
      KiIpiSendRequestEx(
        (__int64)KeGetCurrentPrcb(),
        1,
        0LL,
        0,
        v5,
        (void (__fastcall *)(__int64))KiFlushCurrentTbWorker,
        0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v28, 0);
    v7 = KeGetCurrentPrcb();
    v8 = 0;
    v32 = 0;
    Process = v7->CurrentThread->ApcState.Process;
    Count = Process->ActiveProcessors.Count;
    Size = Process->ActiveProcessors.Size;
    v31[0] = Count;
    v31[1] = Size;
    if ( Count )
    {
      memmove(v33, Process->ActiveProcessors.Bitmap, 8LL * Count);
      Count = v31[0];
    }
    v12 = (unsigned int)KiProcessorIndexToNumberMappingTable[v7->Number] >> 6;
    if ( Count > (unsigned int)v12 )
    {
      v13 = &v33[v12];
      v14 = *v13;
      _bittestandreset64(&v14, KiProcessorIndexToNumberMappingTable[v7->Number] & 0x3F);
      *v13 = v14;
      Count = v31[0];
    }
    v15 = 0;
    if ( Count )
    {
      while ( 1 )
      {
        v16 = v33[v15];
        if ( v16 )
        {
          if ( v15 != v7->Group || v16 != v7->GroupSetMember )
            break;
        }
        if ( ++v15 >= v31[0] )
          goto LABEL_15;
      }
      KiIpiSendRequest((_DWORD)v7, 0, (unsigned int)v31, 0, v5);
      KiFlushCurrentTbWorker(0LL);
      while ( v7->PacketBarrier )
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v18) )
        {
          HvlNotifyLongSpinWait(v8);
        }
        else
        {
          _mm_pause();
        }
      }
    }
    else
    {
LABEL_15:
      KiFlushCurrentTbWorker(0LL);
    }
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v6 < 2u )
  {
    v25 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v25->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v25);
  }
  result = v6;
  __writecr8(v6);
LABEL_18:
  if ( v2 == 1 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( *(_QWORD *)(*(_QWORD *)(result + 184) + 728LL) )
      result = VslFlushSecureAddressSpace();
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL, v2);
  if ( ExTbFlushActive )
  {
    v26 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v26 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb(0LL, 0LL, v2);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v26 < 2u )
    {
      v27 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v27);
    }
    result = v26;
    __writecr8(v26);
  }
  return result;
}
