/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x140033D20
 * Callers:
 *     PpmContinueActiveTimeAccumulation @ 0x140004648 (PpmContinueActiveTimeAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x140031530 (PpmIdleExecuteTransition.c)
 *     PpmSnapPerformanceAccumulation @ 0x140035500 (PpmSnapPerformanceAccumulation.c)
 *     PpmPerfApplyProcessorState @ 0x140175B70 (PpmPerfApplyProcessorState.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x140008970 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     HvlGetPpmStatsForProcessor @ 0x14028ACB8 (HvlGetPpmStatsForProcessor.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402A7878 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402A7988 (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, __int64 *a5)
{
  bool v6; // zf
  __int64 v9; // r14
  char v10; // si
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  char v13; // r9
  __int64 *v14; // rcx
  int v15; // r10d
  unsigned int i; // eax
  __int64 v17; // rdx
  __int16 v18; // bp
  bool v19; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v22; // r15
  _QWORD *v23; // rdi
  unsigned int j; // esi
  __int64 v25; // r14
  void (__fastcall *v26)(__int64, int *); // rax
  __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // r8
  unsigned __int64 v30; // r9
  __int64 v31; // rcx
  unsigned __int64 v32; // rax
  unsigned int v33; // eax
  __int64 v34; // rcx
  int v35; // edx
  int v36; // r8d
  unsigned int v37; // eax
  unsigned int v38; // r9d
  struct _KPRCB *v39; // rcx
  _DWORD *v40; // rdx
  __int64 *v41; // rbx
  __int64 v43; // r10
  int v44; // eax
  _DWORD *v45; // rcx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  unsigned __int64 v49; // [rsp+30h] [rbp-78h] BYREF
  __int64 v50; // [rsp+38h] [rbp-70h] BYREF
  __int64 v51; // [rsp+40h] [rbp-68h]
  __int64 PpmStatsForProcessor; // [rsp+48h] [rbp-60h]
  __int64 v53; // [rsp+50h] [rbp-58h]
  __int64 v54; // [rsp+58h] [rbp-50h] BYREF
  __int64 v55[8]; // [rsp+60h] [rbp-48h] BYREF
  int v56; // [rsp+A0h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v58; // [rsp+B0h] [rbp+8h] BYREF
  int v59; // [rsp+B8h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a1 + 24024) == 3;
  PpmStatsForProcessor = 0LL;
  v58 = 0LL;
  v9 = 0LL;
  v53 = 0LL;
  if ( v6 )
  {
    v10 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24656) + 8LL * DWORD2(xmmword_14050B170)) >> 1;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  v51 = v11;
  v12 = (volatile signed __int32 *)(a1 + 23880);
  if ( a2
    || *(_QWORD *)(a1 + 23936)
    || *(_QWORD *)(a1 + 23960)
    && (*(_DWORD *)(a1 + 23432) != *(_DWORD *)(a1 + 23976) || *(_DWORD *)(a1 + 23428) != *(_DWORD *)(a1 + 23980))
    || a3 && v11 != *(_QWORD *)(a1 + 23984) )
  {
    v13 = 0;
    v14 = (__int64 *)(a1 + 23904);
    v15 = 2;
    for ( i = 0; i < 2; ++i )
    {
      v17 = *v14;
      if ( *v14 )
      {
        if ( *(_BYTE *)(v17 + 32) )
        {
          if ( a3 )
            return 0;
          v13 = 1;
        }
        if ( v15 == 2 )
          v15 = i;
      }
      ++v14;
    }
    if ( v13 || a2 || !a4 )
    {
      v18 = v56;
      _disable();
      v19 = (v18 & 0x200) != 0;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(a1 + 23880);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        if ( SchedulerAssist )
        {
          if ( CurrentPrcb->NestingLevel <= 1u )
          {
            v44 = SchedulerAssist[5];
            SchedulerAssist[5] = v44 + 1;
            if ( v44 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v12, 0LL) )
        {
          v45 = CurrentPrcb->SchedulerAssist;
          if ( v45 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v46 = v45[5] - 1;
              v45[5] = v46;
              if ( !v46 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 23880), v17);
        }
      }
      v22 = _InterlockedExchange64((volatile __int64 *)(a1 + 23936), 0LL);
      if ( v10 )
      {
        PpmStatsForProcessor = HvlGetPpmStatsForProcessor(a1, &v54, &v58);
        v53 = v54;
        v22 = PpmStatsForProcessor - v54 - *(_QWORD *)(a1 + 23992);
        *(_QWORD *)(a1 + 23992) = PpmStatsForProcessor - v54;
      }
      *(_QWORD *)(a1 + 23928) += v22;
      v23 = (_QWORD *)(a1 + 23944);
      for ( j = 0; j < 2; ++j )
      {
        v25 = *(v23 - 5);
        if ( v25 )
        {
          v26 = *(void (__fastcall **)(__int64, int *))v25;
          v27 = *(_QWORD *)(v25 + 40);
          if ( *(_BYTE *)(v25 + 33) )
          {
            ((void (__fastcall *)(__int64, _QWORD, unsigned __int64 *, __int64 *))v26)(v27, a2, &v49, &v50);
            v28 = *(_QWORD *)(v25 + 16);
            if ( v49 != v28 )
            {
              v29 = *(_QWORD *)(v25 + 8);
              v30 = v49 - v28;
              v32 = (v50 - v29) * *(unsigned __int8 *)(v25 + 35);
              v49 = v30;
              v50 -= v29;
              v31 = v50;
              *(_DWORD *)(v25 + 24) = v32 / v30;
              *(_QWORD *)(v25 + 16) = v30 + v28;
              *(_QWORD *)(v25 + 8) = v29 + v31;
            }
            v33 = *(_DWORD *)(v25 + 24);
            v59 = v33;
          }
          else
          {
            v26(v27, &v59);
            v33 = v59;
          }
          v34 = v22 * v33;
          *v23 += v34;
          if ( j == *(unsigned __int8 *)(a1 + 24016) )
            *(_QWORD *)(a1 + 23960) += v34;
        }
        ++v23;
      }
      if ( *(_BYTE *)(a1 + 24016) == 2 )
        *(_QWORD *)(a1 + 23960) += 100 * v22;
      v35 = *(_DWORD *)(a1 + 23432);
      v36 = *(_DWORD *)(a1 + 23428);
      v37 = v36 - *(_DWORD *)(a1 + 23980);
      v38 = v37 + v35 - *(_DWORD *)(a1 + 23976);
      if ( v38 )
      {
        v43 = *(_QWORD *)(a1 + 23960);
        *(_QWORD *)(a1 + 23960) = 0LL;
        *(_DWORD *)(a1 + 23976) = v35;
        *(_DWORD *)(a1 + 23980) = v36;
        if ( v37 )
        {
          v59 = v37 / v38;
          *(_QWORD *)(a1 + 23968) += v43 * (v37 / v38);
        }
      }
      *(_QWORD *)(a1 + 23984) = v51;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 23880, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      v39 = KeGetCurrentPrcb();
      v40 = v39->SchedulerAssist;
      if ( v40 )
      {
        if ( v39->NestingLevel <= 1u )
        {
          v47 = v40[5] - 1;
          v40[5] = v47;
          if ( !v47 )
            KiRemoveSystemWorkPriorityKick(v39);
        }
      }
      if ( v19 )
        _enable();
      v9 = PpmStatsForProcessor;
    }
  }
  v41 = a5;
  if ( a5 )
  {
    if ( v9 )
    {
      v48 = v53;
    }
    else
    {
      v9 = HvlGetPpmStatsForProcessor(a1, v55, &v58);
      v48 = v55[0];
    }
    v41[1] = v48;
    v41[2] = v58;
    *v41 = v9;
  }
  return 1;
}
