/*
 * XREFs of KeFlushTb @ 0x1400755A0
 * Callers:
 *     MiInsertCachedPte @ 0x1400344D0 (MiInsertCachedPte.c)
 *     MiGetUltraMapping @ 0x14003A740 (MiGetUltraMapping.c)
 *     MiFlushTbList @ 0x1400740B0 (MiFlushTbList.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     MiDeleteVaTail @ 0x140075870 (MiDeleteVaTail.c)
 *     MiAgeWorkingSetTail @ 0x140075A40 (MiAgeWorkingSetTail.c)
 *     MiFlushEntireTbDueToAttributeChange @ 0x1400EF400 (MiFlushEntireTbDueToAttributeChange.c)
 *     MiAttachSession @ 0x140125BE4 (MiAttachSession.c)
 *     MiGetWsAndMakePageTablesNx @ 0x140191CE0 (MiGetWsAndMakePageTablesNx.c)
 *     MiInitializeTbFlush @ 0x1409BAC04 (MiInitializeTbFlush.c)
 *     MiSwitchToPfns @ 0x1409BB954 (MiSwitchToPfns.c)
 * Callees:
 *     KiIpiSendRequestEx @ 0x1400ED1E0 (KiIpiSendRequestEx.c)
 *     KxFlushNonGlobalTb @ 0x1400ED2A0 (KxFlushNonGlobalTb.c)
 *     KiIpiSendRequest @ 0x1400ED3F0 (KiIpiSendRequest.c)
 *     KiAffinityContainsProcessorsOtherThanSelf @ 0x1400EDC44 (KiAffinityContainsProcessorsOtherThanSelf.c)
 *     KiFlushCurrentTbWorker @ 0x140113AA0 (KiFlushCurrentTbWorker.c)
 *     KxSetTimeStampBusy @ 0x140117CC0 (KxSetTimeStampBusy.c)
 *     KiFlushCurrentTbOnly @ 0x140173F54 (KiFlushCurrentTbOnly.c)
 *     KxFlushEntireTb @ 0x140187998 (KxFlushEntireTb.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     HvlNotifyLongSpinWait @ 0x1402715C0 (HvlNotifyLongSpinWait.c)
 *     VslFlushSecureAddressSpace @ 0x14027B318 (VslFlushSecureAddressSpace.c)
 *     KiFlushAddressSpaceTb @ 0x140293EEC (KiFlushAddressSpaceTb.c)
 *     KiFlushAffinity @ 0x140293FC8 (KiFlushAffinity.c)
 *     KiIsFlushEntire @ 0x140293FF0 (KiIsFlushEntire.c)
 *     KiPrepareFlushParameters @ 0x140294098 (KiPrepareFlushParameters.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140298520 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     VmFlushTb @ 0x14030B8E0 (VmFlushTb.c)
 *     ExFlushTb @ 0x14031D4E8 (ExFlushTb.c)
 */

__int64 __fastcall KeFlushTb(unsigned int a1, unsigned int a2)
{
  bool v4; // dl
  __int64 v5; // r14
  unsigned __int8 v6; // bp
  struct _KPRCB *v7; // rbx
  unsigned int v8; // edi
  _KPROCESS *Process; // rdx
  unsigned __int16 Count; // r8
  unsigned __int16 Size; // ax
  __int64 v12; // rcx
  __int64 *v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 v15; // ax
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v23; // rcx
  __int64 v24; // rax
  unsigned __int8 v25; // r10
  struct _KPRCB *v26; // rcx
  struct _KPRCB *v27; // rcx
  unsigned __int8 v28; // bl
  struct _KPRCB *v29; // rcx
  signed __int32 v30[8]; // [rsp+0h] [rbp-128h] BYREF
  char v31[8]; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-E0h] BYREF
  _WORD v33[2]; // [rsp+50h] [rbp-D8h] BYREF
  int v34; // [rsp+54h] [rbp-D4h]
  _QWORD v35[21]; // [rsp+58h] [rbp-D0h] BYREF

  if ( (HvlEnlightenments & 4) == 0 )
    goto LABEL_2;
  if ( (HvlEnlightenments & 2) != 0 || (HvlEnlightenments & 0x800000) != 0 && (unsigned __int8)KiIsFlushEntire() )
  {
LABEL_54:
    KiPrepareFlushParameters(a1, &v32, v31);
    v24 = KiFlushAffinity(a2);
    result = KiFlushAddressSpaceTb(v32, v24, (unsigned __int8)v31[0], v25);
    goto LABEL_18;
  }
  if ( (_DWORD)KeNumberProcessors_0 != 1 )
  {
    if ( !a2 )
    {
      _InterlockedOr(v30, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(0xCuLL);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
        _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
      CurrentPrcb = KeGetCurrentPrcb();
      if ( !(unsigned int)KiAffinityContainsProcessorsOtherThanSelf(
                            CurrentPrcb,
                            &CurrentPrcb->CurrentThread->ApcState.Process->ActiveProcessors) )
      {
        KiFlushCurrentTbOnly(a1);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          v26 = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)v26->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(v26);
        }
        result = CurrentIrql;
        __writecr8(CurrentIrql);
        goto LABEL_18;
      }
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
      {
        v23 = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)v23->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick(v23);
      }
      __writecr8(CurrentIrql);
    }
    goto LABEL_54;
  }
LABEL_2:
  if ( !KiKvaShadow )
  {
    if ( !a1 || (int)a1 > 2 )
    {
      result = KxFlushEntireTb(a2);
      goto LABEL_18;
    }
    goto LABEL_74;
  }
  if ( a1 != 1 && (!a1 || a1 == 2) )
  {
LABEL_74:
    result = KxFlushNonGlobalTb(a2);
    goto LABEL_18;
  }
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
      KiIpiSendRequestEx((unsigned int)KeGetCurrentPrcb(), 1, 0, 0, 0LL, v5, (__int64)KiFlushCurrentTbWorker, 0LL);
      _InterlockedIncrement(&KiTbFlushTimeStamp);
    }
  }
  else
  {
    _InterlockedOr(v30, 0);
    v7 = KeGetCurrentPrcb();
    v8 = 0;
    v34 = 0;
    Process = v7->CurrentThread->ApcState.Process;
    Count = Process->ActiveProcessors.Count;
    Size = Process->ActiveProcessors.Size;
    v33[0] = Count;
    v33[1] = Size;
    if ( Count )
    {
      memmove(v35, Process->ActiveProcessors.Bitmap, 8LL * Count);
      Count = v33[0];
    }
    v12 = (unsigned int)KiProcessorIndexToNumberMappingTable[v7->Number] >> 6;
    if ( Count > (unsigned int)v12 )
    {
      v13 = &v35[v12];
      v14 = *v13;
      _bittestandreset64(&v14, KiProcessorIndexToNumberMappingTable[v7->Number] & 0x3F);
      *v13 = v14;
      Count = v33[0];
    }
    v15 = 0;
    if ( Count )
    {
      while ( 1 )
      {
        v16 = v35[v15];
        if ( v16 )
        {
          if ( v15 != v7->Group || v16 != v7->GroupSetMember )
            break;
        }
        if ( ++v15 >= v33[0] )
          goto LABEL_15;
      }
      KiIpiSendRequest((_DWORD)v7, 0, (unsigned int)v33, 0, 0, v5);
      KiFlushCurrentTbWorker(0LL);
      while ( v7->PacketBarrier )
      {
        if ( (++v8 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19, v18, v20) )
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
    v27 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v27->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v27);
  }
  result = v6;
  __writecr8(v6);
LABEL_18:
  if ( a1 == 1 )
  {
    result = (__int64)KeGetCurrentThread();
    if ( *(_QWORD *)(*(_QWORD *)(result + 184) + 720LL) )
      result = VslFlushSecureAddressSpace();
  }
  if ( VmTbFlushEnabled )
    result = VmFlushTb(0LL, 0LL, a1);
  if ( ExTbFlushActive )
  {
    v28 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v28 < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    ExFlushTb(0LL, 0LL, a1);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v28 < 2u )
    {
      v29 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v29->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v29);
    }
    result = v28;
    __writecr8(v28);
  }
  return result;
}
