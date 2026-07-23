/*
 * XREFs of VfFreeAdapterObject @ 0x14092BE10
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14092A288 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14092A580 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x14092E524 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x14092E868 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaOperation @ 0x14092EB34 (ViGetRealDmaOperation.c)
 */

__int64 __fastcall VfFreeAdapterObject(__int64 a1, unsigned int a2)
{
  __int64 (__fastcall *RealDmaOperation)(__int64, _QWORD); // rbx
  __int64 AdapterInformationInternal; // rsi
  __int64 result; // rax
  KIRQL v7; // di
  __int64 i; // rbx
  __int64 v9; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  RealDmaOperation = (__int64 (__fastcall *)(__int64, _QWORD))ViGetRealDmaOperation(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  result = RealDmaOperation(a1, a2);
  if ( AdapterInformationInternal && a2 - 2 <= 1 )
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 144));
    for ( i = *(_QWORD *)(AdapterInformationInternal + 128); ; i = *(_QWORD *)(v9 + 72) )
    {
      v9 = i - 72;
      if ( AdapterInformationInternal + 128 == v9 + 72 )
        break;
      if ( *(_DWORD *)(v9 + 52) == 1 )
      {
        DECREMENT_ADAPTER_CHANNELS(AdapterInformationInternal);
        if ( a2 == 3 )
        {
          *(_DWORD *)(v9 + 52) = 3;
        }
        else
        {
          v11 = *(_QWORD *)(v9 + 72);
          v12 = *(_QWORD **)(v9 + 80);
          if ( *(_QWORD *)(v11 + 8) != v9 + 72 || *v12 != v9 + 72 )
            __fastfail(3u);
          *v12 = v11;
          *(_QWORD *)(v11 + 8) = v12;
          SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, *(_DWORD *)(v9 + 48));
          if ( *(_QWORD *)(v9 + 96) )
            ViFreeMapRegisterFile(AdapterInformationInternal);
          ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, (PVOID)v9);
        }
        break;
      }
    }
    KxReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 144));
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v7 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    result = v7;
    __writecr8(v7);
  }
  return result;
}
