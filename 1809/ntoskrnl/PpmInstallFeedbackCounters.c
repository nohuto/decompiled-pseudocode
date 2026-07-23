/*
 * XREFs of PpmInstallFeedbackCounters @ 0x140189628
 * Callers:
 *     PpmRegisterPerfStates @ 0x14074F6AC (PpmRegisterPerfStates.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140062A90 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     PpmContinueActiveTimeAccumulation @ 0x1400A5F8C (PpmContinueActiveTimeAccumulation.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D6F10 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D8290 (KeRevertToUserGroupAffinityThread.c)
 *     PpmPerfFeedbackCounterRead @ 0x140189798 (PpmPerfFeedbackCounterRead.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall PpmInstallFeedbackCounters(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r15
  __int64 v7; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // r8
  __int16 v10; // bp
  bool v11; // bp
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  struct _GROUP_AFFINITY v16; // [rsp+20h] [rbp-58h] BYREF
  char v17[8]; // [rsp+30h] [rbp-48h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+38h] [rbp-40h] BYREF
  int v19; // [rsp+70h] [rbp-8h]

  v3 = *(unsigned int *)(a1 + 36);
  *(_DWORD *)v16.Reserved = 0;
  v16.Reserved[2] = 0;
  LODWORD(v3) = KiProcessorIndexToNumberMappingTable[v3];
  *(_DWORD *)&v16.Group = (unsigned __int16)((unsigned int)v3 >> 6);
  v16.Mask = 1LL << (v3 & 0x3F);
  KeSetSystemGroupAffinityThread(&v16, &PreviousAffinity);
  CurrentIrql = KeGetCurrentIrql();
  v6 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
    _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
  v7 = a1 + 23880;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  PpmContinueActiveTimeAccumulation(a1, PerformanceCounter.QuadPart, v9);
  v10 = v19;
  _disable();
  v11 = (v10 & 0x200) != 0;
  KxAcquireSpinLock((PKSPIN_LOCK)v7);
  v13 = v7 - (_QWORD)a2;
  do
  {
    v14 = *a2;
    if ( *a2 )
    {
      if ( *(_BYTE *)(v14 + 34) )
      {
        *(_BYTE *)(v7 + 137) = 1;
        v14 = *a2;
      }
      *(_QWORD *)((char *)a2 + v13 + 24) = v14;
      LOBYTE(v12) = 1;
      *(_QWORD *)((char *)a2 + v13 + 64) = 100LL * *(_QWORD *)(v7 + 48);
      PpmPerfFeedbackCounterRead(*a2, v12, v17);
    }
    ++a2;
    --v6;
  }
  while ( v6 );
  if ( *(_QWORD *)(v7 + 32) )
  {
    *(_BYTE *)(v7 + 136) = 1;
  }
  else if ( *(_QWORD *)(v7 + 24) )
  {
    *(_BYTE *)(v7 + 136) = 0;
  }
  KxReleaseSpinLock((PKSPIN_LOCK)v7);
  if ( v11 )
    _enable();
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(CurrentPrcb);
  }
  __writecr8(CurrentIrql);
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
}
