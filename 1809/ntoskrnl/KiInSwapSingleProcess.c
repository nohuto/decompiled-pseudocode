/*
 * XREFs of KiInSwapSingleProcess @ 0x14010CA40
 * Callers:
 *     KiAttachProcess @ 0x140016BD0 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KeReadyThread @ 0x1400A2760 (KeReadyThread.c)
 * Callees:
 *     KiSwapThread @ 0x140056210 (KiSwapThread.c)
 *     KeYieldProcessorEx @ 0x14006C9E0 (KeYieldProcessorEx.c)
 *     KiRequestProcessInSwap @ 0x14010CB00 (KiRequestProcessInSwap.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall KiInSwapSingleProcess(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v3; // si
  char v6; // bp
  struct _KPRCB *CurrentPrcb; // rdx
  struct _KPRCB *v9; // rcx
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v3 = a3;
  v6 = 1;
  while ( _interlockedbittestandset((volatile signed __int32 *)a2, 7u) )
  {
    do
      KeYieldProcessorEx(&v10, a2, a3);
    while ( (*(_DWORD *)a2 & 0x80u) != 0 );
  }
  if ( (*(_DWORD *)(a2 + 572) & 7) != 0 )
  {
    KiRequestProcessInSwap(a1, a2);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_KTHREAD *)a1 == CurrentPrcb->CurrentThread )
    {
      *(_BYTE *)(a1 + 643) = 23;
      *(_BYTE *)(a1 + 390) = v3;
      KiSwapThread(a1, (__int64)CurrentPrcb);
      return 1;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
  }
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v3 < 2u )
  {
    v9 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v9->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick(v9);
  }
  __writecr8(v3);
  return v6;
}
