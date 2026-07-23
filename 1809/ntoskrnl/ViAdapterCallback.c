/*
 * XREFs of ViAdapterCallback @ 0x14092D3B0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x140092218 (ExFreeToNPagedLookasideList.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     VfUtilDbgPrint @ 0x140309C3C (VfUtilDbgPrint.c)
 *     ViIsActiveChannelWcb @ 0x14030A4A4 (ViIsActiveChannelWcb.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14092A288 (DECREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14092A580 (SUBTRACT_MAP_REGISTERS.c)
 *     ViFreeMapRegisterFile @ 0x14092E524 (ViFreeMapRegisterFile.c)
 */

__int64 __fastcall ViAdapterCallback(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 (__fastcall *v10)(__int64, __int64, __int64, __int64); // rax
  __int64 v11; // r9
  unsigned int v12; // esi
  char v13; // cl
  _DWORD *v15; // rdx
  KSPIN_LOCK *v16; // rbp
  KIRQL v17; // bl
  __int64 v18; // rax
  _QWORD *v19; // r8
  struct _KPRCB *CurrentPrcb; // rcx

  v4 = *((_QWORD *)a4 + 7);
  v6 = a3;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 192) < 3u )
    {
      v9 = *((_QWORD *)a4 + 12);
      if ( v9 && *(_DWORD *)v9 == -1393569779 )
      {
        *(_QWORD *)(v9 + 48) = a3;
        v6 = *((_QWORD *)a4 + 12);
      }
      else if ( !a3 )
      {
        v6 = -559026163LL;
      }
    }
    if ( *(_BYTE *)(v4 + 196) )
      DECREMENT_ADAPTER_CHANNELS(v4);
  }
  v10 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))*((_QWORD *)a4 + 1);
  v11 = *(_QWORD *)a4;
  *((_QWORD *)a4 + 11) = v6;
  v12 = v10(a1, a2, v6, v11);
  if ( !v4 || !ViIsActiveChannelWcb(v4, (__int64)a4) )
    return v12;
  a4[13] = v12;
  v13 = *(_BYTE *)(v4 + 196);
  if ( v12 != 1 )
  {
    if ( !v13 )
      DECREMENT_ADAPTER_CHANNELS(v4);
    if ( v12 == 3 )
      return 3LL;
    SUBTRACT_MAP_REGISTERS(v4, a4[12]);
    v15 = (_DWORD *)*((_QWORD *)a4 + 12);
    if ( v15 && *v15 == -1393569779 )
    {
      ViFreeMapRegisterFile(v4);
      *((_QWORD *)a4 + 12) = 0LL;
    }
    v16 = (KSPIN_LOCK *)(v4 + 144);
    v17 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v4 + 144));
    v18 = *((_QWORD *)a4 + 9);
    v19 = (_QWORD *)*((_QWORD *)a4 + 10);
    if ( *(_DWORD **)(v18 + 8) != a4 + 18 || (_DWORD *)*v19 != a4 + 18 )
      __fastfail(3u);
    *v19 = v18;
    *(_QWORD *)(v18 + 8) = v19;
    KxReleaseSpinLock(v16);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v17 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(v17);
    ExFreeToNPagedLookasideList(&ViHalWaitBlockLookaside, a4);
    return v12;
  }
  if ( v13 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 184));
    VfUtilDbgPrint("Driver at address %p has a problem\n", *(const void **)(v4 + 40));
    VfUtilDbgPrint("Master devices should return DeallocateObjectKeepRegisters\n");
  }
  *(_DWORD *)(v4 + 256) = a4[12];
  return 1LL;
}
