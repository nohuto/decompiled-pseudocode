/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1401365F0
 * Callers:
 *     <none>
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     KxReleaseSpinLock @ 0x1400916D0 (KxReleaseSpinLock.c)
 *     KeAlertThread @ 0x1400E4F50 (KeAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 */

LONG __fastcall IopCancelIrpsInCurrentThreadListSpecialApc(__int64 a1, __int64 a2, __int64 a3, _BYTE **a4)
{
  struct _KTHREAD *CurrentThread; // r15
  _BYTE *v6; // r14
  char v7; // bp
  KIRQL v8; // di
  unsigned int *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  struct _KPRCB *v16; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = *a4;
  v7 = 0;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
  v9 = *(unsigned int **)&CurrentThread[1].SystemCallNumber;
  *v6 = 0;
  *(_DWORD *)(a1 + 132) = 0;
  if ( &CurrentThread[1].SystemCallNumber == v9 )
  {
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    __writecr8(v8);
  }
  else
  {
    do
    {
      if ( *((char *)v9 + 35) < *((char *)v9 + 34) + 2 )
      {
        v10 = *(_QWORD *)(a1 + 96);
        if ( !v10 || *((_QWORD *)v9 + 5) == v10 )
        {
          v13 = *(_QWORD *)(a1 + 88);
          if ( !v13 || *((_QWORD *)v9 + 20) == v13 )
          {
            v14 = *(v9 - 4);
            if ( (v14 & 0x402) == 0 && ((v14 & 0x84) != 0 || (*((_BYTE *)v9 + 39) & 2) != 0) )
            {
              *((_BYTE *)v9 + 36) = 1;
              v7 = 1;
              *v6 = 1;
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
        if ( !*(_BYTE *)(a1 + 128) )
        {
          v11 = *(_QWORD *)(a1 + 96);
          if ( !v11 || *((_QWORD *)v9 + 5) == v11 )
          {
            v15 = *(_QWORD *)(a1 + 88);
            if ( (!v15 || *((_QWORD *)v9 + 20) == v15) && (*(v9 - 4) & 2) == 0 )
            {
              *v6 = 1;
              *(_DWORD *)(a1 + 132) = 1;
            }
          }
        }
      }
      v9 = *(unsigned int **)v9;
    }
    while ( &CurrentThread[1].SystemCallNumber != v9 );
    KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].WaitBlockFill11[16]);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v8 < 2u )
    {
      v16 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v16);
    }
    __writecr8(v8);
    if ( v7 )
      KeAlertThread((__int64)CurrentThread, 0);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
