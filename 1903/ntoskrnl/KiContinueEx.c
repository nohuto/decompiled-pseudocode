/*
 * XREFs of KiContinueEx @ 0x14001BA10
 * Callers:
 *     NtContinue @ 0x1401C4250 (NtContinue.c)
 * Callees:
 *     KiContinuePreviousModeUser @ 0x14001B824 (KiContinuePreviousModeUser.c)
 *     KeTestAlertThread @ 0x14001BBA0 (KeTestAlertThread.c)
 *     KiDeliverApc @ 0x140043310 (KiDeliverApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     KeContextToKframes @ 0x1401C3C50 (KeContextToKframes.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall KiContinueEx(unsigned __int64 a1, char a2, __int64 a3, __int64 a4)
{
  unsigned __int8 CurrentIrql; // si
  struct _KTHREAD *CurrentThread; // r15
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v15; // [rsp+34h] [rbp-24h]

  CurrentIrql = KeGetCurrentIrql();
  if ( !CurrentIrql )
  {
    KeGetCurrentIrql();
    __writecr8(1uLL);
  }
  v15 = 1;
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
        *(_QWORD *)(a4 + 208) = a1;
        *(_QWORD *)(a4 + 352) = a3;
        LOBYTE(v11) = 1;
        KiDeliverApc(v11, 0LL, a4);
        v15 = 0;
        goto LABEL_18;
      }
    }
    else if ( (a1 & 0xF) != 0 )
    {
      ExRaiseDatatypeMisalignment();
    }
    v12 = KiContinuePreviousModeUser(a1, a3, a4, (__int64)CurrentThread);
    if ( v12 >= 0 )
      v12 = 1;
    v15 = v12;
  }
  else
  {
    KeContextToKframes(a4, a3, a1, *(_DWORD *)(a1 + 48), 0LL);
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
  return v15;
}
