/*
 * XREFs of PpmUpdatePerformanceFeedback @ 0x14005FA00
 * Callers:
 *     PpmSnapPerformanceAccumulation @ 0x14005BDC0 (PpmSnapPerformanceAccumulation.c)
 *     PpmIdleExecuteTransition @ 0x14005DC80 (PpmIdleExecuteTransition.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1400A5F8C (PpmContinueActiveTimeAccumulation.c)
 *     PpmPerfApplyProcessorState @ 0x14017547C (PpmPerfApplyProcessorState.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x14008CF10 (KxWaitForSpinLockAndAcquire.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvlGetPpmStatsForProcessor @ 0x140276C5C (HvlGetPpmStatsForProcessor.c)
 *     KiAcquireSpinLockInstrumented @ 0x140291018 (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x140291128 (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall PpmUpdatePerformanceFeedback(__int64 a1, unsigned __int8 a2, char a3, char a4, __int64 *a5)
{
  bool v6; // zf
  __int64 v9; // r14
  char v10; // si
  __int64 v11; // rcx
  volatile signed __int32 *v12; // rbx
  char v13; // r9
  __int64 v14; // rcx
  int v15; // r10d
  unsigned int i; // eax
  __int16 v17; // bp
  bool v18; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  _DWORD *SchedulerAssist; // rcx
  __int64 v21; // r15
  _QWORD *v22; // rdi
  unsigned int j; // esi
  __int64 v24; // r14
  void (__fastcall *v25)(__int64, int *); // rax
  __int64 v26; // rcx
  __int64 v27; // r10
  __int64 v28; // r8
  unsigned __int64 v29; // r9
  __int64 v30; // rcx
  unsigned __int64 v31; // rax
  unsigned int v32; // eax
  __int64 v33; // rcx
  int v34; // edx
  int v35; // r8d
  unsigned int v36; // eax
  unsigned int v37; // r9d
  struct _KPRCB *v38; // rcx
  _DWORD *v39; // rdx
  __int64 *v40; // rbx
  __int64 v42; // r10
  int v43; // eax
  _DWORD *v44; // rcx
  int v45; // eax
  int v46; // eax
  __int64 v47; // rax
  unsigned __int64 v48; // [rsp+30h] [rbp-78h] BYREF
  __int64 v49; // [rsp+38h] [rbp-70h] BYREF
  __int64 v50; // [rsp+40h] [rbp-68h]
  __int64 PpmStatsForProcessor; // [rsp+48h] [rbp-60h]
  __int64 v52; // [rsp+50h] [rbp-58h]
  __int64 v53; // [rsp+58h] [rbp-50h] BYREF
  __int64 v54[8]; // [rsp+60h] [rbp-48h] BYREF
  int v55; // [rsp+A0h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  __int64 v57; // [rsp+B0h] [rbp+8h] BYREF
  int v58; // [rsp+B8h] [rbp+10h] BYREF

  v6 = *(_DWORD *)(a1 + 24024) == 3;
  PpmStatsForProcessor = 0LL;
  v57 = 0LL;
  v9 = 0LL;
  v52 = 0LL;
  if ( v6 )
  {
    v10 = 1;
    v11 = *(_QWORD *)(*(_QWORD *)(a1 + 24656) + 8LL * DWORD2(xmmword_1404DEB68)) >> 1;
  }
  else
  {
    v10 = 0;
    v11 = 0LL;
  }
  v50 = v11;
  v12 = (volatile signed __int32 *)(a1 + 23880);
  if ( a2
    || *(_QWORD *)(a1 + 23936)
    || *(_QWORD *)(a1 + 23960)
    && (*(_DWORD *)(a1 + 23432) != *(_DWORD *)(a1 + 23976) || *(_DWORD *)(a1 + 23428) != *(_DWORD *)(a1 + 23980))
    || a3 && v11 != *(_QWORD *)(a1 + 23984) )
  {
    v13 = 0;
    v14 = a1 + 23904;
    v15 = 2;
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_QWORD *)v14 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v14 + 32LL) )
        {
          if ( a3 )
            return 0;
          v13 = 1;
        }
        if ( v15 == 2 )
          v15 = i;
      }
      v14 += 8LL;
    }
    if ( v13 || a2 || !a4 )
    {
      v17 = v55;
      _disable();
      v18 = (v17 & 0x200) != 0;
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
            v43 = SchedulerAssist[5];
            SchedulerAssist[5] = v43 + 1;
            if ( v43 == -1 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v12, 0LL) )
        {
          v44 = CurrentPrcb->SchedulerAssist;
          if ( v44 )
          {
            if ( CurrentPrcb->NestingLevel <= 1u )
            {
              v45 = v44[5] - 1;
              v44[5] = v45;
              if ( !v45 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
          KxWaitForSpinLockAndAcquire(a1 + 23880);
        }
      }
      v21 = _InterlockedExchange64((volatile __int64 *)(a1 + 23936), 0LL);
      if ( v10 )
      {
        PpmStatsForProcessor = HvlGetPpmStatsForProcessor(a1, &v53, &v57);
        v52 = v53;
        v21 = PpmStatsForProcessor - v53 - *(_QWORD *)(a1 + 23992);
        *(_QWORD *)(a1 + 23992) = PpmStatsForProcessor - v53;
      }
      *(_QWORD *)(a1 + 23928) += v21;
      v22 = (_QWORD *)(a1 + 23944);
      for ( j = 0; j < 2; ++j )
      {
        v24 = *(v22 - 5);
        if ( v24 )
        {
          v25 = *(void (__fastcall **)(__int64, int *))v24;
          v26 = *(_QWORD *)(v24 + 40);
          if ( *(_BYTE *)(v24 + 33) )
          {
            ((void (__fastcall *)(__int64, _QWORD, unsigned __int64 *, __int64 *))v25)(v26, a2, &v48, &v49);
            v27 = *(_QWORD *)(v24 + 16);
            if ( v48 != v27 )
            {
              v28 = *(_QWORD *)(v24 + 8);
              v29 = v48 - v27;
              v31 = (v49 - v28) * *(unsigned __int8 *)(v24 + 35);
              v48 = v29;
              v49 -= v28;
              v30 = v49;
              *(_DWORD *)(v24 + 24) = v31 / v29;
              *(_QWORD *)(v24 + 16) = v29 + v27;
              *(_QWORD *)(v24 + 8) = v28 + v30;
            }
            v32 = *(_DWORD *)(v24 + 24);
            v58 = v32;
          }
          else
          {
            v25(v26, &v58);
            v32 = v58;
          }
          v33 = v21 * v32;
          *v22 += v33;
          if ( j == *(unsigned __int8 *)(a1 + 24016) )
            *(_QWORD *)(a1 + 23960) += v33;
        }
        ++v22;
      }
      if ( *(_BYTE *)(a1 + 24016) == 2 )
        *(_QWORD *)(a1 + 23960) += 100 * v21;
      v34 = *(_DWORD *)(a1 + 23432);
      v35 = *(_DWORD *)(a1 + 23428);
      v36 = v35 - *(_DWORD *)(a1 + 23980);
      v37 = v36 + v34 - *(_DWORD *)(a1 + 23976);
      if ( v37 )
      {
        v42 = *(_QWORD *)(a1 + 23960);
        *(_QWORD *)(a1 + 23960) = 0LL;
        *(_DWORD *)(a1 + 23976) = v34;
        *(_DWORD *)(a1 + 23980) = v35;
        if ( v36 )
        {
          v58 = v36 / v37;
          *(_QWORD *)(a1 + 23968) += v42 * (v36 / v37);
        }
      }
      *(_QWORD *)(a1 + 23984) = v50;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(a1 + 23880, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
      v38 = KeGetCurrentPrcb();
      v39 = v38->SchedulerAssist;
      if ( v39 )
      {
        if ( v38->NestingLevel <= 1u )
        {
          v46 = v39[5] - 1;
          v39[5] = v46;
          if ( !v46 )
            KiRemoveSystemWorkPriorityKick(v38);
        }
      }
      if ( v18 )
        _enable();
      v9 = PpmStatsForProcessor;
    }
  }
  v40 = a5;
  if ( a5 )
  {
    if ( v9 )
    {
      v47 = v52;
    }
    else
    {
      v9 = HvlGetPpmStatsForProcessor(a1, v54, &v57);
      v47 = v54[0];
    }
    v40[1] = v47;
    v40[2] = v57;
    *v40 = v9;
  }
  return 1;
}
