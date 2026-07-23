/*
 * XREFs of KiInitializeMutant @ 0x1400DD3F8
 * Callers:
 *     KeInitializeMutex @ 0x1400DD3C0 (KeInitializeMutex.c)
 *     KeInitializeMutant @ 0x1400DD3E0 (KeInitializeMutant.c)
 *     LdrpInitMuiCrits @ 0x1400F44B8 (LdrpInitMuiCrits.c)
 *     PoInitSystem @ 0x1409B3C10 (PoInitSystem.c)
 *     sub_1409C56A8 @ 0x1409C56A8 (sub_1409C56A8.c)
 *     PnpInitializeDeviceEvents @ 0x1409C8260 (PnpInitializeDeviceEvents.c)
 *     EtwpInitializeRegistration @ 0x1409D13BC (EtwpInitializeRegistration.c)
 *     EtwpInitialize @ 0x1409D1620 (EtwpInitialize.c)
 *     PopDiagInitialize @ 0x1409D1B90 (PopDiagInitialize.c)
 *     ViInitSystemPhase0 @ 0x1409DBF34 (ViInitSystemPhase0.c)
 *     MiInitializeBootDefaults @ 0x1409DCEF0 (MiInitializeBootDefaults.c)
 *     ExpProfileInitialization @ 0x1409DF2E0 (ExpProfileInitialization.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x14010C490 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KiInitializeMutant(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // r15
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v11; // rcx
  int v12; // eax
  _DWORD *v13; // rcx
  int v14; // eax
  struct _KPRCB *v15; // rcx
  int v16; // [rsp+48h] [rbp+10h] BYREF

  *(_BYTE *)(a1 + 2) = 0;
  *(_BYTE *)a1 = 2;
  v3 = a3;
  if ( (_BYTE)a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(a1 + 4) = 0;
    *(_QWORD *)(a1 + 40) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v16 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v12 = SchedulerAssist[5];
          SchedulerAssist[5] = v12 + 1;
          if ( v12 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      v13 = CurrentPrcb->SchedulerAssist;
      if ( v13 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v14 = v13[5] - 1;
          v13[5] = v14;
          if ( !v14 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v16, a2, a3);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v11 = (struct _LIST_ENTRY *)(a1 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v11->Flink = &CurrentThread->MutantListHead;
    *(_QWORD *)(a1 + 32) = Blink;
    Blink->Flink = v11;
    CurrentThread->MutantListHead.Blink = v11;
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v15 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v15);
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 4) = 1;
  }
  result = a1 + 8;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_BYTE *)(a1 + 48) = 0;
  *(_BYTE *)(a1 + 49) = v3;
  return result;
}
