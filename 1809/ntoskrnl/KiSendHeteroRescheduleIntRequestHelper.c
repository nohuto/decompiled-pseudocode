/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x140298EE0
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x140298E20 (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KiSendSoftwareInterrupt @ 0x140003AE4 (KiSendSoftwareInterrupt.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiAcquireThreadStateLock @ 0x1400CFAD0 (KiAcquireThreadStateLock.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1400D0D34 (KiCheckPreferredHeteroProcessor.c)
 *     KiReleaseThreadStateLock @ 0x1400D80E4 (KiReleaseThreadStateLock.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSendHeteroRescheduleIntRequestHelper(unsigned __int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  __int64 v5; // rsi
  char v6; // r12
  _QWORD *v7; // r15
  unsigned __int64 v8; // r13
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rax
  _DWORD *SchedulerAssist; // rcx
  __int64 v14; // rdi
  int v15; // eax
  _DWORD *v16; // rcx
  int v17; // eax
  _DWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rbx
  struct _KPRCB *v21; // rcx
  __int64 v22; // rdx
  int v23; // eax
  struct _KPRCB *v24; // rdi
  _DWORD *v25; // rcx
  int v26; // eax
  _DWORD *v27; // rcx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rdi
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  int v33; // eax
  int v35; // [rsp+20h] [rbp-28h]
  int v36; // [rsp+24h] [rbp-24h]
  int v37; // [rsp+28h] [rbp-20h] BYREF
  int v38; // [rsp+2Ch] [rbp-1Ch] BYREF
  __int64 v39; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int64 *v40; // [rsp+38h] [rbp-10h] BYREF
  int v41; // [rsp+90h] [rbp+48h]
  __int64 v43; // [rsp+A0h] [rbp+58h]
  __int64 v44; // [rsp+A8h] [rbp+60h]

  v44 = a4;
  v43 = a3;
  v41 = -1;
  v4 = 0;
  v5 = 0LL;
  v36 = 0;
  v6 = 0;
  v7 = a2;
  v8 = a1;
  if ( a1 )
  {
    v9 = 0x140000000uLL;
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v37 = 0;
      _BitScanForward64(&v11, v8);
      v8 ^= 1LL << v11;
      v12 = (unsigned int)v11 + (*(unsigned __int8 *)(a4 + 208) << 6);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v35 = KiProcessorNumberToIndexMappingTable[v12];
      v14 = KiProcessorBlock[v35];
      v39 = v14;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = SchedulerAssist[5];
          SchedulerAssist[5] = v15 + 1;
          if ( v15 == -1 )
LABEL_6:
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 48), 0LL) )
      {
        v16 = CurrentPrcb->SchedulerAssist;
        if ( v16 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v17 = v16[5] - 1;
            v16[5] = v17;
            if ( !v17 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v37, v9, a3);
        while ( *(_QWORD *)(v14 + 48) );
        v18 = CurrentPrcb->SchedulerAssist;
        if ( v18 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v19 = v18[5];
            v18[5] = v19 + 1;
            if ( v19 == -1 )
              goto LABEL_6;
          }
        }
      }
      v7 = a2;
      v20 = *(_QWORD *)(v14 + 8);
      if ( (*(_BYTE *)(v14 + 35) & 1) == 0 || *(_QWORD *)(v14 + 16) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        if ( v32 )
        {
LABEL_51:
          if ( v31->NestingLevel <= 1u )
          {
            v33 = v32[5] - 1;
            v32[5] = v33;
            if ( !v33 )
              KiRemoveSystemWorkPriorityKick((__int64)v31);
          }
        }
      }
      else
      {
        if ( !*(_BYTE *)(v14 + 11881) && (unsigned int)KiCheckPreferredHeteroProcessor(*(_QWORD *)(v14 + 8), v14, 0) )
        {
          if ( !a2 )
          {
            _InterlockedAdd16((volatile signed __int16 *)(v20 + 1420), 1u);
            _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
            v21 = KeGetCurrentPrcb();
            v22 = (__int64)v21->SchedulerAssist;
            if ( v22 )
            {
              if ( v21->NestingLevel <= 1u )
              {
                v23 = *(_DWORD *)(v22 + 20) - 1;
                *(_DWORD *)(v22 + 20) = v23;
                if ( !v23 )
                  KiRemoveSystemWorkPriorityKick((__int64)v21);
              }
            }
            v24 = KeGetCurrentPrcb();
            v38 = 0;
            while ( 1 )
            {
              v25 = v24->SchedulerAssist;
              if ( v25 )
              {
                if ( v24->NestingLevel <= 1u )
                {
                  v26 = v25[5];
                  v25[5] = v26 + 1;
                  if ( v26 == -1 )
                    KiRemoveSystemWorkPriorityKick((__int64)v24);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v20 + 64), 0LL) )
                break;
              v27 = v24->SchedulerAssist;
              if ( v27 )
              {
                if ( v24->NestingLevel <= 1u )
                {
                  v28 = v27[5] - 1;
                  v27[5] = v28;
                  if ( !v28 )
                    KiRemoveSystemWorkPriorityKick((__int64)v24);
                }
              }
              do
                KeYieldProcessorEx(&v38, v22, a3);
              while ( *(_QWORD *)(v20 + 64) );
            }
            KiAcquireThreadStateLock(v20, (__int64)&v39, (volatile signed __int32 **)&v40);
            _InterlockedAdd16((volatile signed __int16 *)(v20 + 1420), 0xFFFFu);
            if ( *(_BYTE *)(v20 + 388) == 2 )
            {
              v30 = v39;
              if ( !*(_BYTE *)(v39 + 11881)
                && (unsigned int)KiCheckPreferredHeteroProcessor(v20, v39, 0)
                && !_interlockedbittestandset((volatile signed __int32 *)(v20 + 120), 0xCu) )
              {
                *(_BYTE *)(v30 + 11881) = 1;
                KiSendSoftwareInterrupt();
                v6 = 1;
              }
            }
            KiReleaseThreadStateLock(v29, v39, v40);
            KiReleaseThreadLockSafe(v20);
            goto LABEL_54;
          }
          if ( (*(_DWORD *)(v20 + 120) & 0x1000) == 0 )
          {
            a3 = (unsigned int)v41;
            v5 |= 1LL << v35;
            if ( v41 == -1 || *(char *)(v20 + 195) > v41 )
            {
              v6 = 1;
              v41 = *(char *)(v20 + 195);
              v36 = v35;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 48), 0LL);
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        if ( v32 )
          goto LABEL_51;
      }
LABEL_54:
      a4 = v44;
      v9 = 0x140000000uLL;
      if ( !v8 )
      {
        a3 = v43;
        v4 = v36;
        break;
      }
    }
  }
  if ( v7 )
    *v7 = v5;
  if ( a3 )
    *(_DWORD *)a3 = v4;
  return v6;
}
