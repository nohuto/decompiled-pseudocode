/*
 * XREFs of KiSendHeteroRescheduleIntRequestHelper @ 0x1402AFA34
 * Callers:
 *     KiSendHeteroRescheduleIntRequest @ 0x1402AF974 (KiSendHeteroRescheduleIntRequest.c)
 * Callees:
 *     KiAcquireThreadStateLock @ 0x14000FCA0 (KiAcquireThreadStateLock.c)
 *     KiReleaseThreadStateLock @ 0x14000FFF0 (KiReleaseThreadStateLock.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140011C08 (KiCheckPreferredHeteroProcessor.c)
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x1400E32E0 (KiReleaseThreadLockSafe.c)
 *     KiSendSoftwareInterrupt @ 0x14012D268 (KiSendSoftwareInterrupt.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiSendHeteroRescheduleIntRequestHelper(unsigned __int64 a1, _QWORD *a2, unsigned int *a3, __int64 a4)
{
  unsigned int v4; // eax
  __int64 v5; // rsi
  char v6; // r12
  _QWORD *v7; // r15
  unsigned __int64 v8; // r13
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  _DWORD *SchedulerAssist; // rcx
  __int64 v13; // rdi
  int v14; // eax
  _DWORD *v15; // rcx
  int v16; // eax
  _DWORD *v17; // rcx
  int v18; // eax
  __int64 v19; // rbx
  struct _KPRCB *v20; // rcx
  _DWORD *v21; // rdx
  int v22; // eax
  struct _KPRCB *v23; // rdi
  _DWORD *v24; // rcx
  int v25; // eax
  _DWORD *v26; // rcx
  int v27; // eax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  struct _KPRCB *v31; // rcx
  _DWORD *v32; // rdx
  int v33; // eax
  unsigned int v35; // [rsp+20h] [rbp-28h]
  unsigned int v36; // [rsp+24h] [rbp-24h]
  int v37; // [rsp+28h] [rbp-20h] BYREF
  int v38; // [rsp+2Ch] [rbp-1Ch] BYREF
  __int64 v39; // [rsp+30h] [rbp-18h] BYREF
  volatile signed __int64 *v40; // [rsp+38h] [rbp-10h] BYREF
  int v41; // [rsp+90h] [rbp+48h]
  unsigned int *v43; // [rsp+A0h] [rbp+58h]
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
    while ( 1 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v37 = 0;
      _BitScanForward64(&v10, v8);
      v8 ^= 1LL << v10;
      v11 = (unsigned int)v10 + (*(unsigned __int8 *)(a4 + 208) << 6);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v35 = KiProcessorNumberToIndexMappingTable[v11];
      v13 = KiProcessorBlock[v35];
      v39 = v13;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = SchedulerAssist[5];
          SchedulerAssist[5] = v14 + 1;
          if ( v14 == -1 )
LABEL_5:
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 48), 0LL) )
      {
        v15 = CurrentPrcb->SchedulerAssist;
        if ( v15 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v16 = v15[5] - 1;
            v15[5] = v16;
            if ( !v16 )
              KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
          }
        }
        do
          KeYieldProcessorEx(&v37);
        while ( *(_QWORD *)(v13 + 48) );
        v17 = CurrentPrcb->SchedulerAssist;
        if ( v17 )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v18 = v17[5];
            v17[5] = v18 + 1;
            if ( v18 == -1 )
              goto LABEL_5;
          }
        }
      }
      v7 = a2;
      v19 = *(_QWORD *)(v13 + 8);
      if ( (*(_BYTE *)(v13 + 35) & 1) == 0 || *(_QWORD *)(v13 + 16) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        if ( v32 )
        {
LABEL_50:
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
        if ( !*(_BYTE *)(v13 + 11881) && (unsigned int)KiCheckPreferredHeteroProcessor(*(_QWORD *)(v13 + 8), v13, 0) )
        {
          if ( !a2 )
          {
            _InterlockedAdd16((volatile signed __int16 *)(v19 + 1420), 1u);
            _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
            v20 = KeGetCurrentPrcb();
            v21 = v20->SchedulerAssist;
            if ( v21 )
            {
              if ( v20->NestingLevel <= 1u )
              {
                v22 = v21[5] - 1;
                v21[5] = v22;
                if ( !v22 )
                  KiRemoveSystemWorkPriorityKick((__int64)v20);
              }
            }
            v23 = KeGetCurrentPrcb();
            v38 = 0;
            while ( 1 )
            {
              v24 = v23->SchedulerAssist;
              if ( v24 )
              {
                if ( v23->NestingLevel <= 1u )
                {
                  v25 = v24[5];
                  v24[5] = v25 + 1;
                  if ( v25 == -1 )
                    KiRemoveSystemWorkPriorityKick((__int64)v23);
                }
              }
              if ( !_interlockedbittestandset64((volatile signed __int32 *)(v19 + 64), 0LL) )
                break;
              v26 = v23->SchedulerAssist;
              if ( v26 )
              {
                if ( v23->NestingLevel <= 1u )
                {
                  v27 = v26[5] - 1;
                  v26[5] = v27;
                  if ( !v27 )
                    KiRemoveSystemWorkPriorityKick((__int64)v23);
                }
              }
              do
                KeYieldProcessorEx(&v38);
              while ( *(_QWORD *)(v19 + 64) );
            }
            KiAcquireThreadStateLock(v19, &v39, (volatile signed __int32 **)&v40);
            _InterlockedAdd16((volatile signed __int16 *)(v19 + 1420), 0xFFFFu);
            if ( *(_BYTE *)(v19 + 388) == 2 )
            {
              v29 = v39;
              if ( !*(_BYTE *)(v39 + 11881)
                && (unsigned int)KiCheckPreferredHeteroProcessor(v19, v39, 0)
                && !_interlockedbittestandset((volatile signed __int32 *)(v19 + 120), 0xCu) )
              {
                LOBYTE(v30) = 2;
                *(_BYTE *)(v29 + 11881) = 1;
                KiSendSoftwareInterrupt(v35, v30);
                v6 = 1;
              }
            }
            KiReleaseThreadStateLock(v28, v39, v40);
            KiReleaseThreadLockSafe(v19);
            goto LABEL_53;
          }
          if ( (*(_DWORD *)(v19 + 120) & 0x1000) == 0 )
          {
            v5 |= 1LL << v35;
            if ( v41 == -1 || *(char *)(v19 + 195) > v41 )
            {
              v6 = 1;
              v41 = *(char *)(v19 + 195);
              v36 = v35;
            }
          }
        }
        _InterlockedAnd64((volatile signed __int64 *)(v13 + 48), 0LL);
        v31 = KeGetCurrentPrcb();
        v32 = v31->SchedulerAssist;
        if ( v32 )
          goto LABEL_50;
      }
LABEL_53:
      a4 = v44;
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
    *a3 = v4;
  return v6;
}
