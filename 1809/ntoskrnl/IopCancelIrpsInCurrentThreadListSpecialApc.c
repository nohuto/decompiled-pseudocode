/*
 * XREFs of IopCancelIrpsInCurrentThreadListSpecialApc @ 0x140139330
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeAlertThread @ 0x1400F22B0 (KeAlertThread.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
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
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  struct _KPRCB *v17; // rcx
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
          v11 = *(_QWORD *)(a1 + 88);
          if ( !v11 || *((_QWORD *)v9 + 20) == v11 )
          {
            v12 = *(v9 - 4);
            if ( (v12 & 0x402) == 0 && ((v12 & 0x84) != 0 || (*((_BYTE *)v9 + 39) & 2) != 0) )
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
          v13 = *(_QWORD *)(a1 + 96);
          if ( !v13 || *((_QWORD *)v9 + 5) == v13 )
          {
            v14 = *(_QWORD *)(a1 + 88);
            if ( (!v14 || *((_QWORD *)v9 + 20) == v14) && (*(v9 - 4) & 2) == 0 )
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
      v17 = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)v17->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(v17);
    }
    __writecr8(v8);
    if ( v7 )
      KeAlertThread((__int64)CurrentThread, 0LL, v15);
  }
  return KeSetEvent((PRKEVENT)(a1 + 104), 0, 0);
}
