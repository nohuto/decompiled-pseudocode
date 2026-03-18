/*
 * XREFs of PspEnforceLimitsJobPostCallback @ 0x140611540
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     PspSendJobNotification @ 0x1400E6DA4 (PspSendJobNotification.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PspUnlockJob @ 0x140611910 (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x140611950 (PspLockJobExclusive.c)
 *     PspLockJobShared @ 0x140611978 (PspLockJobShared.c)
 *     PspGetEffectiveNoWakeCharge @ 0x1406119A0 (PspGetEffectiveNoWakeCharge.c)
 *     PspAddAccountingValues @ 0x140611AB4 (PspAddAccountingValues.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140611B04 (PspUnlockJobMemoryLimitsShared.c)
 *     PspGetJobMemoryUsageNotificationViolations @ 0x140611B60 (PspGetJobMemoryUsageNotificationViolations.c)
 *     PspLockJobMemoryLimitsShared @ 0x140611BB0 (PspLockJobMemoryLimitsShared.c)
 *     PspRateControlLimitFlag @ 0x140613370 (PspRateControlLimitFlag.c)
 *     PspRemoveProcessFromJobChain @ 0x140613394 (PspRemoveProcessFromJobChain.c)
 *     PspSendReliableJobNotification @ 0x1406B1218 (PspSendReliableJobNotification.c)
 *     PspTerminateAllProcessesInJobHierarchy @ 0x1406E0F14 (PspTerminateAllProcessesInJobHierarchy.c)
 *     PspSendNoWakeChargeLimitNotification @ 0x1408C8058 (PspSendNoWakeChargeLimitNotification.c)
 */

__int64 __fastcall PspEnforceLimitsJobPostCallback(PRKEVENT Event, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v5; // rax
  struct _LIST_ENTRY *Blink; // rax
  LIST_ENTRY WaitListHead; // xmm1
  struct _LIST_ENTRY *Flink; // rdi
  struct _LIST_ENTRY *v9; // rsi
  struct _LIST_ENTRY *v10; // r14
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rcx
  int v14; // r12d
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // edi
  int v18; // r14d
  int v19; // esi
  int v20; // r12d
  unsigned int v21; // ecx
  volatile signed __int32 *v22; // rcx
  unsigned __int64 v23; // rdx
  bool v24; // zf
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rcx
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rax
  _QWORD *v32; // rdx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // r8
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  int v39; // eax
  __int64 v40; // rdx
  int v41; // r8d
  int v42; // eax
  struct _KPROCESS *v43; // rcx
  __int64 v44; // [rsp+20h] [rbp-E0h]
  unsigned int v45; // [rsp+20h] [rbp-E0h]
  struct _LIST_ENTRY *v46; // [rsp+28h] [rbp-D8h]
  struct _LIST_ENTRY *v47; // [rsp+30h] [rbp-D0h]
  __int64 v48; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v49[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v50; // [rsp+60h] [rbp-A0h]
  LIST_ENTRY v51; // [rsp+70h] [rbp-90h]
  __int128 v52; // [rsp+80h] [rbp-80h]
  __int128 v53; // [rsp+90h] [rbp-70h]
  LIST_ENTRY v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+B0h] [rbp-50h]
  _OWORD v56[4]; // [rsp+C0h] [rbp-40h] BYREF

  CurrentThread = KeGetCurrentThread();
  PspLockJobShared(Event, CurrentThread);
  v5 = *(_QWORD *)&Event[41].Header.Lock;
  if ( v5 )
  {
    v28 = *(_OWORD *)(v5 + 24);
    v56[0] = *(_OWORD *)(v5 + 8);
    v29 = *(_OWORD *)(v5 + 40);
    v56[1] = v28;
    v30 = *(_OWORD *)(v5 + 56);
    v56[2] = v29;
    v56[3] = v30;
  }
  else
  {
    memset(v56, 0, sizeof(v56));
  }
  Blink = Event[7].Header.WaitListHead.Blink;
  WaitListHead = Event[47].Header.WaitListHead;
  Flink = Event[21].Header.WaitListHead.Flink;
  v9 = Event[21].Header.WaitListHead.Blink;
  v10 = Event[6].Header.WaitListHead.Blink;
  v50 = *(_OWORD *)&Event[46].Header.WaitListHead.Blink;
  v11 = *(_OWORD *)&Event[48].Header.Lock;
  v47 = Blink;
  LODWORD(Blink) = HIDWORD(Event[18].Header.WaitListHead.Blink);
  v51 = WaitListHead;
  v12 = *(_OWORD *)&Event[48].Header.WaitListHead.Blink;
  HIDWORD(v44) = (_DWORD)Blink;
  LODWORD(Blink) = Event[10].Header.WaitListHead.Blink;
  v52 = v11;
  v53 = v12;
  v55 = *(_QWORD *)&Event[50].Header.Lock;
  v54 = Event[49].Header.WaitListHead;
  if ( ((unsigned __int8)Blink & 4) != 0 )
    v46 = Event[9].Header.WaitListHead.Blink;
  else
    v46 = 0LL;
  PspGetEffectiveNoWakeCharge(Event, v49, &v48);
  PspUnlockJob(v13, CurrentThread);
  v14 = 0;
  LODWORD(v44) = 0;
  v15 = 0x10000LL;
  if ( *(_QWORD *)&v56[0] )
  {
    if ( (unsigned __int64)Flink + (unsigned __int64)v54.Flink > *(_QWORD *)&v56[0] )
      v14 = 0x10000;
    LODWORD(v44) = v14;
  }
  if ( *((_QWORD *)&v56[0] + 1) && (unsigned __int64)v9 + (unsigned __int64)v54.Blink > *((_QWORD *)&v56[0] + 1) )
  {
    v14 |= 0x20000u;
    LODWORD(v44) = v14;
  }
  v16 = *(_QWORD *)&v56[1];
  if ( *(_QWORD *)&v56[1] && (unsigned __int64)v10 + *((_QWORD *)&v50 + 1) > *(_QWORD *)&v56[1] )
  {
    v14 |= 4u;
    LODWORD(v44) = v14;
  }
  if ( *(_OWORD *)((char *)&v56[1] + 8) != 0LL )
  {
    PspLockJobMemoryLimitsShared(Event, CurrentThread, 0x10000LL);
    v14 |= PspGetJobMemoryUsageNotificationViolations(
             Event,
             Event[40].Header.WaitListHead.Blink,
             (char *)Event[40].Header.WaitListHead.Blink + *(_QWORD *)&Event[55].Header.Lock,
             33280LL,
             v44);
    PspUnlockJobMemoryLimitsShared(Event, CurrentThread);
  }
  v17 = DWORD2(v56[2]);
  v45 = v14;
  if ( DWORD2(v56[2]) && *(_DWORD *)(a2 + 32) == DWORD1(v56[3]) && *(_DWORD *)(a2 + 44) >= DWORD2(v56[2]) )
  {
    v14 |= PspRateControlLimitFlag(0LL, v16, v15);
    v45 = v14;
  }
  v18 = HIDWORD(v56[2]);
  if ( HIDWORD(v56[2]) && *(_DWORD *)(a2 + 36) == DWORD2(v56[3]) && *(_DWORD *)(a2 + 48) >= HIDWORD(v56[2]) )
    v45 = PspRateControlLimitFlag(1LL, v16, v15) | v14;
  v19 = v56[3];
  v20 = HIDWORD(v56[3]);
  if ( LODWORD(v56[3]) && *(_DWORD *)(a2 + 40) == HIDWORD(v56[3]) && *(_DWORD *)(a2 + 52) >= LODWORD(v56[3]) )
  {
    v21 = PspRateControlLimitFlag(2LL, v16, v15) | v45;
    v45 = v21;
  }
  else
  {
    v21 = v45;
  }
  if ( v21 )
  {
    PspLockJobExclusive(Event, CurrentThread);
    v31 = *(_QWORD *)&Event[41].Header.Lock;
    if ( v31 )
    {
      *(_DWORD *)(v31 + 4) |= v45;
      v32 = *(_QWORD **)&Event[41].Header.Lock;
      if ( (v45 & 0x10000) != 0 )
        v32[9] = *(_QWORD *)&v56[0];
      if ( (v45 & 0x20000) != 0 )
        v32[10] = *((_QWORD *)&v56[0] + 1);
      if ( (v45 & 4) != 0 )
        v32[11] = *(_QWORD *)&v56[1];
      if ( (v45 & 0x200) != 0 )
        v32[13] = *(_QWORD *)&v56[2];
      if ( (v45 & 0x8000) != 0 )
        v32[12] = *((_QWORD *)&v56[1] + 1);
      v33 = PspRateControlLimitFlag(0LL, v32, v45);
      if ( (v33 & (unsigned int)v35) != 0 )
      {
        *(_DWORD *)(v34 + 124) = DWORD1(v56[3]);
        *(_DWORD *)(v34 + 112) = v17;
      }
      v36 = PspRateControlLimitFlag(1LL, v34, v35);
      if ( (v36 & (unsigned int)v38) != 0 )
      {
        v42 = DWORD2(v56[3]);
        *(_DWORD *)(v37 + 116) = v18;
        *(_DWORD *)(v37 + 128) = v42;
      }
      v39 = PspRateControlLimitFlag(2LL, v37, v38);
      if ( (v39 & v41) != 0 )
      {
        *(_DWORD *)(v40 + 120) = v19;
        *(_DWORD *)(v40 + 132) = v20;
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
  v22 = *(volatile signed __int32 **)(a2 + 16);
  if ( v22 )
  {
    if ( (v22[194] & 1) == 0 )
    {
      _InterlockedAnd(v22 + 194, 0xFFFFFFDF);
      v43 = *(struct _KPROCESS **)(a2 + 16);
      v49[1] = *(_QWORD *)(a2 + 8);
      v49[2] = 2LL;
      v49[3] = v43[1].Header.WaitListHead.Flink;
      PspRemoveProcessFromJobChain(v43);
      v22 = *(volatile signed __int32 **)(a2 + 16);
    }
    ObfDereferenceObject((PVOID)v22);
  }
  if ( v46 && (struct _LIST_ENTRY *)((char *)v47 + *((_QWORD *)&v50 + 1)) > v46 )
  {
    if ( HIDWORD(v44) )
    {
      if ( HIDWORD(v44) != 1 )
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
  v23 = *(_QWORD *)(a2 + 24) + v48;
  v24 = *(_BYTE *)(a2 + 56) == 0;
  *(_QWORD *)(a2 + 24) = v23;
  if ( v24 )
  {
    if ( v23 >= (unsigned int)PspSystemNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(0LL, v23, v15);
      *(_BYTE *)(a2 + 56) = 1;
    }
    else if ( v49[0] >= (unsigned __int64)(unsigned int)PspJobNoWakeChargeLimit )
    {
      PspSendNoWakeChargeLimitNotification(Event, v23, v15);
    }
  }
  v25 = Event[44].Header.WaitListHead.Blink;
  if ( v25 )
  {
    PspLockJobExclusive(v25, CurrentThread);
    PspLockJobExclusive(Event, CurrentThread);
    PspAddAccountingValues(&Event[44].Header.WaitListHead.Blink[70], &Event[46].Header.WaitListHead.Blink);
    memset(&Event[46].Header.WaitListHead.Blink, 0, 0x58uLL);
    PspUnlockJob(Event, CurrentThread);
    v26 = Event[44].Header.WaitListHead.Blink;
  }
  else
  {
    PspLockJobExclusive(Event, CurrentThread);
    memset(&Event[46].Header.WaitListHead.Blink, 0, 0x58uLL);
    v26 = (struct _LIST_ENTRY *)Event;
  }
  PspUnlockJob(v26, CurrentThread);
  return 0LL;
}
