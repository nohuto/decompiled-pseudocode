/*
 * XREFs of KiSuspendThread @ 0x1400F2428
 * Callers:
 *     KiFreezeSingleThread @ 0x140002A34 (KiFreezeSingleThread.c)
 *     KeSuspendThread @ 0x1400F26E8 (KeSuspendThread.c)
 *     KiAdjustThreadTimer @ 0x140298350 (KiAdjustThreadTimer.c)
 * Callees:
 *     KiDecrementProcessStackCount @ 0x1400174F0 (KiDecrementProcessStackCount.c)
 *     KiCancelTimer @ 0x14001E100 (KiCancelTimer.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiSignalThread @ 0x1400CE880 (KiSignalThread.c)
 *     KiSignalThreadForApc @ 0x1400F2004 (KiSignalThreadForApc.c)
 *     KiInsertQueueApc @ 0x1400F21A0 (KiInsertQueueApc.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSuspendThread(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rsi
  char v4; // di
  _DWORD *SchedulerAssist; // rcx
  __int64 v8; // r11
  char v9; // si
  char v11; // al
  int v12; // eax
  _DWORD *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // r14
  volatile signed __int32 *v18; // rbp
  _QWORD *v19; // rax
  __int64 v20; // rcx
  struct _KPRCB *v21; // rsi
  _DWORD *v22; // rcx
  char v23; // al
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // rcx
  _DWORD *v26; // rcx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  _DWORD *v30; // rcx
  int v31; // eax
  int v32; // [rsp+50h] [rbp+8h] BYREF
  int v33; // [rsp+60h] [rbp+18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0;
  v32 = 0;
  while ( 1 )
  {
    SchedulerAssist = CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v27 = SchedulerAssist[5];
        SchedulerAssist[5] = v27 + 1;
        if ( v27 == -1 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v26 = CurrentPrcb->SchedulerAssist;
    if ( v26 )
    {
      if ( CurrentPrcb->NestingLevel <= 1u )
      {
        v28 = v26[5] - 1;
        v26[5] = v28;
        if ( !v28 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    do
      KeYieldProcessorEx(&v32, a2, a3);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) != 0 )
  {
    if ( *(_DWORD *)(a1 + 740) )
    {
      *(_DWORD *)(a1 + 740) = 0;
      v8 = a1 + 648;
      v9 = 0;
      if ( !*(_BYTE *)(a1 + 730) )
      {
        *(_BYTE *)(a1 + 730) = 1;
        v9 = 1;
        KiInsertQueueApc(a1 + 648);
      }
      if ( KiDisableLightWeightSuspend
        || *(_BYTE *)(a1 + 388) != 5
        || (*(_BYTE *)(a1 + 112) & 7) != 1
        || (v11 = *(_BYTE *)(a1 + 3), (v11 & 0x40) != 0)
        || v11 < 0
        || *(_DWORD *)(a1 + 484)
        || *(_BYTE *)(a1 + 390)
        || *(_BYTE *)(a1 + 192)
        || *(_BYTE *)(a1 + 586)
        || *(_BYTE *)(*(_QWORD *)(a1 + 208) + 17LL) != 5 && *(_BYTE *)(*(_QWORD *)(a1 + 208) + 16LL) != 1 )
      {
        if ( v9 )
          KiSignalThreadForApc(a2, v8, 2);
      }
      else
      {
        v12 = (*(_DWORD *)(a1 + 116) ^ (*(char *)(a1 + 391) << 18)) & 0x40000;
        *(_BYTE *)(a1 + 112) = 3;
        *(_DWORD *)(a1 + 116) ^= v12;
        *(_BYTE *)(a1 + 193) = 1;
        KiReleaseThreadLockSafe(a1);
        v15 = *(_QWORD *)(a1 + 208);
        v16 = v15 + 17;
        v17 = v15 + 48LL * *(unsigned __int8 *)(a1 + 587);
        do
        {
          if ( *(_BYTE *)v16 < 5u )
          {
            v18 = *(volatile signed __int32 **)(v16 + 15);
            KiAcquireKobjectLockSafe(v18);
            if ( *(_BYTE *)v16 == 4 )
            {
              v19 = *(_QWORD **)(v16 - 9);
              v13 = (_DWORD *)(v16 - 17);
              v20 = *(_QWORD *)(v16 - 17);
              if ( *(_QWORD *)(v20 + 8) != v16 - 17 || (_DWORD *)*v19 != v13 )
                __fastfail(3u);
              *v19 = v20;
              *(_QWORD *)(v20 + 8) = v19;
            }
            _InterlockedAnd(v18, 0xFFFFFF7F);
            *(_BYTE *)v16 = 6;
          }
          v16 += 48LL;
        }
        while ( v16 - 17 != v17 );
        if ( (*(_DWORD *)(a1 + 116) & 0x200) != 0 )
        {
          LOBYTE(v13) = 1;
          v24 = MEMORY[0xFFFFF78000000008];
          if ( (unsigned __int8)KiCancelTimer(a1 + 256, v13) )
          {
            v25 = *(_QWORD *)(a1 + 280);
            if ( v25 <= v24 )
            {
              *(_QWORD *)(a1 + 280) = 0LL;
            }
            else if ( (*(_BYTE *)(a1 + 257) & 1) != 0 )
            {
              *(_QWORD *)(a1 + 280) += MEMORY[0xFFFFF78000000014] - v24;
            }
            else
            {
              *(_QWORD *)(a1 + 280) = v24 - v25;
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
        v21 = KeGetCurrentPrcb();
        v33 = 0;
        while ( 1 )
        {
          v22 = v21->SchedulerAssist;
          if ( v22 )
          {
            if ( v21->NestingLevel <= 1u )
            {
              v29 = v22[5];
              v22[5] = v29 + 1;
              if ( v29 == -1 )
                KiRemoveSystemWorkPriorityKick(v21);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
            break;
          v30 = v21->SchedulerAssist;
          if ( v30 )
          {
            if ( v21->NestingLevel <= 1u )
            {
              v31 = v30[5] - 1;
              v30[5] = v31;
              if ( !v31 )
                KiRemoveSystemWorkPriorityKick(v21);
            }
          }
          do
            KeYieldProcessorEx(&v33, (__int64)v13, v14);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v23 = *(_BYTE *)(a1 + 112) & 0xFC;
        *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 116) & 0xFFFDFDFF | ((*(_DWORD *)(a1 + 116) & 0x200) << 8);
        v23 |= 4u;
        *(_BYTE *)(a1 + 112) = v23;
        if ( (v23 & 0x20) != 0 )
          KiSignalThread(a2, a1, 256LL, 0LL);
      }
    }
    v4 = 1;
  }
  KiReleaseThreadLockSafe(a1);
  return v4;
}
