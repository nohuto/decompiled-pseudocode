/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x1405FED20
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     PspSendJobNotification @ 0x140137EBC (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspUnlockJob @ 0x1405FF0C0 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1405FF100 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x1405FF128 (PspLockJobShared.c)
 *     PspGetEffectiveNoWakeCharge @ 0x1405FF150 (PspGetEffectiveNoWakeCharge.c)
 *     PspAddAccountingValues @ 0x1405FF264 (PspAddAccountingValues.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1405FF2B4 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x1405FF310 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x1405FF360 (PspLockJobMemoryLimitsShared.c)
 *     PspRemoveProcessFromJobChain @ 0x140601410 (PspRemoveProcessFromJobChain.c)
 *     PspRateControlLimitFlag @ 0x140601714 (PspRateControlLimitFlag.c)
 *     PspSendReliableJobNotification @ 0x1406BA958 (PspSendReliableJobNotification.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406C8224 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x14088B364 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(PRKEVENT Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rax
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *Blink; // rsi
  struct _LIST_ENTRY *v8; // r14
  int Blink_high; // eax
  int v10; // eax
  __int64 v11; // rcx
  int v12; // r12d
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // edi
  int v16; // r14d
  int v17; // esi
  int v18; // r12d
  unsigned int v19; // ecx
  volatile signed __int32 *v20; // rcx
  unsigned __int64 v21; // rdx
  bool v22; // zf
  struct _LIST_ENTRY *v23; // rcx
  struct _LIST_ENTRY *v24; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  _QWORD *v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  int v37; // eax
  __int64 v38; // rdx
  int v39; // r8d
  int v40; // eax
  struct _KPROCESS *v41; // rcx
  __int64 v42; // [rsp+20h] [rbp-E0h]
  unsigned int v43; // [rsp+20h] [rbp-E0h]
  struct _LIST_ENTRY *v44; // [rsp+28h] [rbp-D8h]
  struct _LIST_ENTRY *v45; // [rsp+30h] [rbp-D0h]
  __int64 v46; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v47[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v48; // [rsp+60h] [rbp-A0h]
  LIST_ENTRY WaitListHead; // [rsp+A0h] [rbp-60h]
  _OWORD v50[4]; // [rsp+C0h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspLockJobShared(Event, CurrentThread);
  v5 = *(_QWORD *)&Event[41].Header.Lock;
  if ( v5 )
  {
    v26 = *(_OWORD *)(v5 + 24);
    v50[0] = *(_OWORD *)(v5 + 8);
    v27 = *(_OWORD *)(v5 + 40);
    v50[1] = v26;
    v28 = *(_OWORD *)(v5 + 56);
    v50[2] = v27;
    v50[3] = v28;
  }
  else
  {
    memset(v50, 0, sizeof(v50));
  }
  Flink = Event[21].Header.WaitListHead.Flink;
  Blink = Event[21].Header.WaitListHead.Blink;
  v8 = Event[6].Header.WaitListHead.Blink;
  v45 = Event[7].Header.WaitListHead.Blink;
  Blink_high = HIDWORD(Event[18].Header.WaitListHead.Blink);
  v48 = *(_OWORD *)&Event[46].Header.WaitListHead.Blink;
  HIDWORD(v42) = Blink_high;
  v10 = (int)Event[10].Header.WaitListHead.Blink;
  WaitListHead = Event[49].Header.WaitListHead;
  if ( (v10 & 4) != 0 )
    v44 = Event[9].Header.WaitListHead.Blink;
  else
    v44 = 0LL;
  PspGetEffectiveNoWakeCharge(Event, v47, &v46);
  PspUnlockJob(v11, CurrentThread);
  v12 = 0;
  LODWORD(v42) = 0;
  v13 = 0x10000LL;
  if ( *(_QWORD *)&v50[0] )
  {
    if ( (unsigned __int64)Flink + (unsigned __int64)WaitListHead.Flink > *(_QWORD *)&v50[0] )
      v12 = 0x10000;
    LODWORD(v42) = v12;
  }
  v14 = *((_QWORD *)&v50[0] + 1);
  if ( *((_QWORD *)&v50[0] + 1)
    && (unsigned __int64)Blink + (unsigned __int64)WaitListHead.Blink > *((_QWORD *)&v50[0] + 1) )
  {
    v12 |= 0x20000u;
    LODWORD(v42) = v12;
  }
  if ( *(_QWORD *)&v50[1] && (unsigned __int64)v8 + *((_QWORD *)&v48 + 1) > *(_QWORD *)&v50[1] )
  {
    v12 |= 4u;
    LODWORD(v42) = v12;
  }
  if ( *(_OWORD *)((char *)&v50[1] + 8) != 0LL )
  {
    PspLockJobMemoryLimitsShared(Event, CurrentThread, 0x10000LL);
    v12 |= PspGetJobMemoryUsageNotificationViolations(
             Event,
             Event[40].Header.WaitListHead.Blink,
             (char *)Event[40].Header.WaitListHead.Blink + *(_QWORD *)&Event[55].Header.Lock,
             33280LL,
             v42);
    PspUnlockJobMemoryLimitsShared(Event, CurrentThread);
  }
  v15 = DWORD2(v50[2]);
  v43 = v12;
  if ( DWORD2(v50[2]) && *(_DWORD *)(a2 + 32) == DWORD1(v50[3]) && *(_DWORD *)(a2 + 44) >= DWORD2(v50[2]) )
  {
    v12 |= PspRateControlLimitFlag(0LL, v14, v13);
    v43 = v12;
  }
  v16 = HIDWORD(v50[2]);
  if ( HIDWORD(v50[2]) && *(_DWORD *)(a2 + 36) == DWORD2(v50[3]) && *(_DWORD *)(a2 + 48) >= HIDWORD(v50[2]) )
    v43 = PspRateControlLimitFlag(1LL, v14, v13) | v12;
  v17 = v50[3];
  v18 = HIDWORD(v50[3]);
  if ( LODWORD(v50[3]) && *(_DWORD *)(a2 + 40) == HIDWORD(v50[3]) && *(_DWORD *)(a2 + 52) >= LODWORD(v50[3]) )
  {
    v19 = PspRateControlLimitFlag(2LL, v14, v13) | v43;
    v43 = v19;
  }
  else
  {
    v19 = v43;
  }
  if ( v19 )
  {
    PspLockJobExclusive(Event, CurrentThread);
    v29 = *(_QWORD *)&Event[41].Header.Lock;
    if ( v29 )
    {
      *(_DWORD *)(v29 + 4) |= v43;
      v30 = *(_QWORD **)&Event[41].Header.Lock;
      if ( (v43 & 0x10000) != 0 )
        v30[9] = *(_QWORD *)&v50[0];
      if ( (v43 & 0x20000) != 0 )
        v30[10] = *((_QWORD *)&v50[0] + 1);
      if ( (v43 & 4) != 0 )
        v30[11] = *(_QWORD *)&v50[1];
      if ( (v43 & 0x200) != 0 )
        v30[13] = *(_QWORD *)&v50[2];
      if ( (v43 & 0x8000) != 0 )
        v30[12] = *((_QWORD *)&v50[1] + 1);
      v31 = PspRateControlLimitFlag(0LL, v30, v43);
      if ( (v31 & (unsigned int)v33) != 0 )
      {
        *(_DWORD *)(v32 + 124) = DWORD1(v50[3]);
        *(_DWORD *)(v32 + 112) = v15;
      }
      v34 = PspRateControlLimitFlag(1LL, v32, v33);
      if ( (v34 & (unsigned int)v36) != 0 )
      {
        v40 = DWORD2(v50[3]);
        *(_DWORD *)(v35 + 116) = v16;
        *(_DWORD *)(v35 + 128) = v40;
      }
      v37 = PspRateControlLimitFlag(2LL, v35, v36);
      if ( (v37 & v39) != 0 )
      {
        *(_DWORD *)(v38 + 120) = v17;
        *(_DWORD *)(v38 + 132) = v18;
      }
    }
    if ( *(_QWORD *)&Event[19].Header.Lock
      && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 0x800) != 0
      && ((__int64)Event[54].Header.WaitListHead.Flink & 4) == 0 )
    {
      PspSendReliableJobNotification(Event);
    }
    PspUnlockJob(Event, CurrentThread);
  }
  v20 = *(volatile signed __int32 **)(a2 + 16);
  if ( v20 )
  {
    if ( (v20[192] & 1) == 0 )
    {
      _InterlockedAnd(v20 + 192, 0xFFFFFFDF);
      v41 = *(struct _KPROCESS **)(a2 + 16);
      v47[1] = *(_QWORD *)(a2 + 8);
      v47[2] = 2LL;
      v47[3] = v41[1].Header.WaitListHead.Flink;
      PspRemoveProcessFromJobChain(v41);
      v20 = *(volatile signed __int32 **)(a2 + 16);
    }
    ObfDereferenceObject((PVOID)v20);
  }
  if ( v44 && (struct _LIST_ENTRY *)((char *)v45 + *((_QWORD *)&v48 + 1)) > v44 )
  {
    if ( HIDWORD(v42) )
    {
      if ( HIDWORD(v42) != 1 )
        goto LABEL_17;
      PspLockJobShared(Event, CurrentThread);
      if ( !*(_QWORD *)&Event[19].Header.Lock || (HIDWORD(Event[36].Header.WaitListHead.Flink) & 2) == 0 )
      {
        PspUnlockJob(Event, CurrentThread);
        PspTerminateAllProcessesInJobHierarchy(Event);
        goto LABEL_17;
      }
      if ( (int)PspSendJobNotification((__int64)Event, 1LL, 0, 0) >= 0 )
      {
        LODWORD(Event[10].Header.WaitListHead.Blink) &= ~4u;
        Event[9].Header.WaitListHead.Blink = 0LL;
      }
    }
    else
    {
      if ( !(unsigned __int8)PspTerminateAllProcessesInJobHierarchy(Event) )
        goto LABEL_17;
      PspLockJobExclusive(Event, CurrentThread);
      if ( !Event[9].Header.LockNV
        && *(_QWORD *)&Event[19].Header.Lock
        && (HIDWORD(Event[36].Header.WaitListHead.Flink) & 2) != 0 )
      {
        PspSendJobNotification((__int64)Event, 1LL, 0, 0);
      }
    }
    PspUnlockJob(Event, CurrentThread);
  }
LABEL_17:
  v21 = *(_QWORD *)(a2 + 24) + v46;
  v22 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v21;
  if ( v22 )
  {
    if ( v21 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL, v21, v13);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v47[0] >= (unsigned __int64)(unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Event, v21, v13);
    }
  }
  v23 = Event[44].Header.WaitListHead.Blink;
  if ( v23 )
  {
    PspLockJobExclusive(v23, CurrentThread);
    PspLockJobExclusive(Event, CurrentThread);
    PspAddAccountingValues(&Event[44].Header.WaitListHead.Blink[70], &Event[46].Header.WaitListHead.Blink);
    memset(&Event[46].Header.WaitListHead.Blink, 0, 0x58uLL);
    PspUnlockJob(Event, CurrentThread);
    v24 = Event[44].Header.WaitListHead.Blink;
  }
  else
  {
    PspLockJobExclusive(Event, CurrentThread);
    memset(&Event[46].Header.WaitListHead.Blink, 0, 0x58uLL);
    v24 = (struct _LIST_ENTRY *)Event;
  }
  PspUnlockJob(v24, CurrentThread);
  return 0LL;
}
