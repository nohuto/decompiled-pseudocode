/*
 * XREFs of KiSuspendThread @ 0x1400AF3C4
 * Callers:
 *     KeSuspendThread @ 0x1400AF684 (KeSuspendThread.c)
 *     KiFreezeSingleThread @ 0x1400EE8A0 (KiFreezeSingleThread.c)
 *     KiAdjustThreadTimer @ 0x1402AF010 (KiAdjustThreadTimer.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiCancelTimer @ 0x140042F90 (KiCancelTimer.c)
 *     KiSignalThread @ 0x14005BDF0 (KiSignalThread.c)
 *     KiDecrementProcessStackCount @ 0x1400909F0 (KiDecrementProcessStackCount.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KiSignalThreadForApc @ 0x1400AF130 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400AF2B8 (KiInsertQueueApc.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v3; // di
  _DWORD *SchedulerAssist; // rcx
  __int64 v7; // r11
  char v8; // si
  char v10; // al
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // r14
  volatile signed __int32 *v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rcx
  struct _KPRCB *v18; // rsi
  _DWORD *v19; // rcx
  char v20; // al
  unsigned __int64 v21; // rbp
  unsigned __int64 v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  int v29; // [rsp+50h] [rbp+8h] BYREF
  int v30; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v3 = 0;
  v29 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v24 = SchedulerAssist[5];
        SchedulerAssist[5] = v24 + 1;
        if ( v24 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v23 = CurrentPrcb->SchedulerAssist;
    if ( v23 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v25 = v23[5] - 1;
        v23[5] = v25;
        if ( !v25 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v29);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 740) )
    {
      *(_DWORD *)(a1 + 740) = 0;
      v7 = a1 + 648;
      v8 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        v8 = 1;
        KiInsertQueueApc(a1 + 648);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || (v10 = *(_BYTE *)(a1 + 3), (v10 & 0x40) != 0)
        || v10 < 0
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v8 )
          KiSignalThreadForApc(a2, v7, 2);
      }
      else
      {
        v11 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v11;
        *(_BYTE *)(a1 + 193) = 1;
        KiReleaseThreadLockSafe(a1);
        v12 = *(_QWORD *)(a1 + 208);
        v13 = v12 + 17;
        v14 = v12 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v13 < 5u )
          {
            v15 = *(volatile signed __int32 **)(v13 + 15);
            KiAcquireKobjectLockSafe(v15);
            if ( *(_BYTE *)v13 == 4 )
            {
              v16 = *(_QWORD **)(v13 - 9);
              v17 = *(_QWORD *)(v13 - 17);
              if ( *(_QWORD *)(v17 + 8) != v13 - 17 || *v16 != v13 - 17 )
                __fastfail(3u);
              *v16 = v17;
              *(_QWORD *)(v17 + 8) = v16;
            }
            _InterlockedAnd(v15, 0xFFFFFF7F);
            *(_BYTE *)v13 = 6;
          }
          v13 += 48LL;
        }
        while ( v13 - 17 != v14 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          v21 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, 1) )
          {
            v22 = *(_QWORD *)(a1 + 280);
            if ( v22 <= v21 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v21;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v21 - v22;
            }
          }
          else
          {
            *(_QWORD *)(a1 + 280) = 0LL;
            *(_BYTE *)(a1 + 481) = 4;
            *(_QWORD *)(a1 + 264) = a1 + 464;
            *(_QWORD *)(a1 + 272) = a1 + 464;
          }
        }
        if ( (*(_DWORD *)(a1 + 120) & 0x4000) != 0
          && !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 0x14u) )
        {
          KiDecrementProcessStackCount(*(_QWORD *)(a1 + 184));
        }
        v18 = KeGetCurrentPrcb();
        v30 = 0;
        while ( 1 )
        {
          v19 = v18->SchedulerAssist;
          if ( v19 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v26 = v19[5];
              v19[5] = v26 + 1;
              if ( v26 == -1 )
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v27 = v18->SchedulerAssist;
          if ( v27 )
          {
            if ( v18->NestingLevel <= 1u )
            {
              v28 = v27[5] - 1;
              v27[5] = v28;
              if ( !v28 )
                KiRemoveSystemWorkPriorityKick(v18);
            }
          }
          do
            KeYieldProcessorEx(&v30);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v20 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v20 |= 4u;
        *(_BYTE *)(a1 + 112) = v20;
        if ( (v20 & 0x20) != 0 )
          KiSignalThread(a2, a1, 256LL, 0LL);
      }
    }
    v3 = 1;
  }
  KiReleaseThreadLockSafe(a1);
  return v3;
}
