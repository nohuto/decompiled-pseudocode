/*
 * XREFs of KiContinueEx @ 0x1400A2480
 * Callers:
 *     NtContinue @ 0x1401BC450 (NtContinue.c)
 * Callees:
 *     KiDeliverApc @ 0x140058490 (KiDeliverApc.c)
 *     KiContinuePreviousModeUser @ 0x1400A234C (KiContinuePreviousModeUser.c)
 *     KeTestAlertThread @ 0x1400A2610 (KeTestAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     KeContextToKframes @ 0x1401BBE50 (KeContextToKframes.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, char a2, unsigned __int64 a3, _KTRAP_FRAME *a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // rcx
  int v11; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v14; // [rsp+34h] [rbp-24h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v14 = 1;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    if ( a2 )
    {
      if ( (a1 & 0xF) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v10 = a1;
      *(_BYTE *)v10 = *(_BYTE *)v10;
      *(_BYTE *)(v10 + 1231) = *(_BYTE *)(v10 + 1231);
      LOBYTE(v10) = 1;
      KeTestAlertThread(v10);
      if ( ((*(_QWORD *)(a1 + 152) - 40LL) & 0xFFFFFFFFFFFFFFF0uLL) - 1232 == a1
        && (CurrentThread->ApcState.UserApcPendingAll & 2) != 0 )
      {
        a4->FaultAddress = a1;
        a4->ErrorCode = a3;
        KiDeliverApc(1, 0, a4);
        v14 = 0;
        goto LABEL_18;
      }
    }
    else if ( (a1 & 0xF) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v11 = KiContinuePreviousModeUser(a1, a3, (int)a4, (__int64)CurrentThread);
    if ( v11 >= 0 )
      v11 = 1;
    v14 = v11;
  }
  else
  {
    KeContextToKframes((_DWORD)a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
    if ( a2 )
      KeTestAlertThread(0LL);
  }
LABEL_18:
  if ( !CurrentIrql )
  {
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(0LL);
  }
  return v14;
}
