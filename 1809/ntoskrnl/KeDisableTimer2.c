/*
 * XREFs of KeDisableTimer2 @ 0x1400FB1D4
 * Callers:
 *     ExDeleteTimer @ 0x1400F9910 (ExDeleteTimer.c)
 *     PopPowerButtonWorkCallback @ 0x1402E4990 (PopPowerButtonWorkCallback.c)
 *     ExpDeleteTimer2 @ 0x1406869E0 (ExpDeleteTimer2.c)
 *     PopThermalZoneRemove @ 0x14086D8A0 (PopThermalZoneRemove.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140063A30 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1400D8710 (KeGenericProcessorCallback.c)
 *     KiUpdateTimer2Flags @ 0x1400FB3AC (KiUpdateTimer2Flags.c)
 *     KiRemoveTimer2 @ 0x1400FB7B0 (KiRemoveTimer2.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x1400FC4BC (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x1400FC508 (KiAcquireTimer2LockUnlessDisabled.c)
 *     EtwGetKernelTraceTimestamp @ 0x14010E9A0 (EtwGetKernelTraceTimestamp.c)
 *     EtwTraceTimedEvent @ 0x14011BCDC (EtwTraceTimedEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KiTraceCancelTimer2 @ 0x14029BAC0 (KiTraceCancelTimer2.c)
 */

char __fastcall KeDisableTimer2(__int64 a1, char a2, char a3, __int64 *a4)
{
  __int64 v4; // r15
  __int64 v6; // r14
  char updated; // r13
  char v9; // r12
  unsigned __int8 CurrentIrql; // bl
  char v11; // r15
  unsigned int v12; // esi
  char v13; // r14
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  struct _KPRCB *v18; // rcx
  unsigned __int64 v19; // rbx
  char v20; // al
  char v21; // [rsp+30h] [rbp-D0h]
  char v24; // [rsp+33h] [rbp-CDh]
  unsigned int v25; // [rsp+34h] [rbp-CCh]
  __int64 v26; // [rsp+38h] [rbp-C8h]
  _QWORD v27[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v28[32]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v29[44]; // [rsp+80h] [rbp-80h] BYREF

  v26 = 0LL;
  v4 = 0LL;
  v6 = 0LL;
  updated = 0;
  v21 = 0;
  v25 = 32;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v26 = *(_QWORD *)(a1 + 96);
    v9 = 1;
    memset(v27, 0, sizeof(v27));
  }
  else
  {
    v9 = 0;
  }
  if ( a4 )
  {
    v15 = *a4;
    v16 = a4[1];
    if ( v9 && v15 )
    {
      LOBYTE(v27[3]) |= 8u;
      v27[1] = v15;
      v27[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever));
    }
    v4 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v15 ^ KiWaitAlways), KiWaitNever);
    v6 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v16 ^ KiWaitAlways), KiWaitNever);
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v24 = KiAcquireTimer2LockUnlessDisabled(a1);
  if ( !v24 )
  {
    if ( a4 )
    {
      *(_QWORD *)(a1 + 112) = v4;
      *(_QWORD *)(a1 + 120) = v6;
    }
    v11 = a2;
    if ( !a2 )
      goto LABEL_11;
    if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
    {
      KiRemoveTimer2(a1);
      KxReleaseSpinLock(&KiTimer2CollectionLock);
    }
    else
    {
      if ( (*(_BYTE *)(a1 + 1) & 0xA) == 0 )
      {
LABEL_11:
        v12 = 6;
LABEL_12:
        if ( v9 )
          EtwGetKernelTraceTimestamp(v28, 1073872896LL);
        updated = KiUpdateTimer2Flags(a1, v25, v12);
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
        __writecr8(CurrentIrql);
        v13 = a3;
        if ( a3 && !updated )
        {
          v29[0] = 1310721;
          memset(&v29[1], 0, 0xA4uLL);
          KeAddProcessorAffinityEx(v29, KiClockTimerOwner);
          KeGenericProcessorCallback(
            (unsigned __int16 *)v29,
            (void (__fastcall *)(struct _KPRCB *, _SINGLE_LIST_ENTRY *))xHalTimerWatchdogStop,
            0LL,
            2uLL);
        }
        goto LABEL_18;
      }
      v25 = 36;
    }
    v12 = 4;
    v21 = 1;
    goto LABEL_12;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    v18 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v18->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v18);
  }
  __writecr8(CurrentIrql);
  v13 = a3;
  v11 = a2;
LABEL_18:
  if ( v9 && !v24 )
  {
    v19 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v26 ^ KiWaitNever, KiWaitNever));
    if ( v21 )
      KiTraceCancelTimer2(a1, v19);
    v20 = v27[3];
    v27[0] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(v19 ^ _byteswap_uint64(a1 ^ KiWaitAlways), KiWaitNever));
    if ( v11 )
    {
      v20 = LOBYTE(v27[3]) | 1;
      LOBYTE(v27[3]) |= 1u;
    }
    if ( v13 )
    {
      v20 |= 2u;
      LOBYTE(v27[3]) = v20;
    }
    if ( updated )
    {
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)v27, 32, 4197890, (__int64)v28);
    }
    else
    {
      LOBYTE(v27[3]) = v20 | 4;
      EtwTraceTimedEvent(3947, 1073872896, (unsigned int)v27, 32, 1538, (__int64)v28);
    }
  }
  return v21;
}
