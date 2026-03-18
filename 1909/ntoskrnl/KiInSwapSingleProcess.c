/*
 * XREFs of KiInSwapSingleProcess @ 0x140109250
 * Callers:
 *     KeReadyThread @ 0x14001C58C (KeReadyThread.c)
 *     KiAttachProcess @ 0x140043560 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002D7C0 (KeYieldProcessorEx.c)
 *     KiSwapThread @ 0x140040B40 (KiSwapThread.c)
 *     KiRequestProcessInSwap @ 0x140109310 (KiRequestProcessInSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiInSwapSingleProcess(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  char v6; // bp
  struct _KPRCB *CurrentPrcb; // rdx
  struct _KPRCB *v9; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v6 = 1;
  while ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( (*(_DWORD *)a2 & 0x80u) != 0 );
  }
  if ( (*(_DWORD *)(a2 + 576) & 7) != 0 )
  {
    KiRequestProcessInSwap(a1, a2);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_KTHREAD *)a1 == CurrentPrcb->CurrentThread )
    {
      *(_BYTE *)(a1 + 643) = 23;
      *(_BYTE *)(a1 + 390) = a3;
      KiSwapThread(a1, (__int64)CurrentPrcb);
      return 1;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && a3 < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  __writecr8(a3);
  return v6;
}
