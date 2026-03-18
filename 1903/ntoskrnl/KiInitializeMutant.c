/*
 * XREFs of KiInitializeMutant @ 0x140108C48
 * Callers:
 *     KeInitializeMutex @ 0x140108C10 (KeInitializeMutex.c)
 *     KeInitializeMutant @ 0x140108C30 (KeInitializeMutant.c)
 *     LdrpInitMuiCrits @ 0x14011DB94 (LdrpInitMuiCrits.c)
 *     PnpInitializeDeviceEvents @ 0x1409F7ED8 (PnpInitializeDeviceEvents.c)
 *     sub_140A0D93C @ 0x140A0D93C (sub_140A0D93C.c)
 *     EtwpInitializeRegistration @ 0x140A15764 (EtwpInitializeRegistration.c)
 *     EtwpInitialize @ 0x140A1590C (EtwpInitialize.c)
 *     WmipDriverEntry @ 0x140A18760 (WmipDriverEntry.c)
 *     ViInitSystemPhase0 @ 0x140A1E0C0 (ViInitSystemPhase0.c)
 *     ExpProfileInitialization @ 0x140A21728 (ExpProfileInitialization.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D3D0 (KeYieldProcessorEx.c)
 *     KiReleaseThreadLockSafe @ 0x140109920 (KiReleaseThreadLockSafe.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

_BYTE *__fastcall KiInitializeMutant(_BYTE *a1, char a2, char a3)
{
  _BYTE *result; // rax
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rsi
  _DWORD *SchedulerAssist; // rcx
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v12; // rcx
  int v13; // eax
  _DWORD *v14; // rcx
  int v15; // eax
  struct _KPRCB *v16; // rcx
  int v17; // [rsp+58h] [rbp+10h] BYREF

  memset(a1, 0, 0x38uLL);
  *a1 = 2;
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    *((_QWORD *)a1 + 5) = CurrentThread;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v17 = 0;
    while ( 1 )
    {
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v13 = SchedulerAssist[5];
          SchedulerAssist[5] = v13 + 1;
          if ( v13 == -1 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        break;
      v14 = CurrentPrcb->SchedulerAssist;
      if ( v14 )
      {
        if ( CurrentPrcb->NestingLevel <= 1u )
        {
          v15 = v14[5] - 1;
          v14[5] = v15;
          if ( !v15 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
      do
        KeYieldProcessorEx(&v17);
      while ( CurrentThread->ThreadLock );
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v12 = (struct _LIST_ENTRY *)(a1 + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v12->Flink = &CurrentThread->MutantListHead;
    *((_QWORD *)a1 + 4) = Blink;
    Blink->Flink = v12;
    CurrentThread->MutantListHead.Blink = v12;
    KiReleaseThreadLockSafe(CurrentThread);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v16);
    }
    __writecr8(CurrentIrql);
  }
  else
  {
    *((_DWORD *)a1 + 1) = 1;
  }
  result = a1 + 8;
  *((_QWORD *)a1 + 2) = a1 + 8;
  *((_QWORD *)a1 + 1) = a1 + 8;
  a1[48] &= ~1u;
  a1[49] = a3;
  return result;
}
