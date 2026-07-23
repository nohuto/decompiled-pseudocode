/*
 * XREFs of IopKeepAliveWorker @ 0x140284D30
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x14004DA20 (KeDelayExecutionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     KxReleaseSpinLock @ 0x1400630D0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14008CE80 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfReferenceObjectWithTag @ 0x1400ACD30 (ObfReferenceObjectWithTag.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PspAdjustKeepAliveCountProcess @ 0x140889C84 (PspAdjustKeepAliveCountProcess.c)
 */

__int64 IopKeepAliveWorker()
{
  KIRQL v0; // al
  KIRQL v1; // si
  PVOID v2; // rbx
  int v3; // edi
  _QWORD *v4; // rcx
  PVOID *v5; // rax
  bool v6; // zf
  __int64 v7; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rcx
  int v12; // eax
  KIRQL v13; // di
  struct _KPRCB *v14; // rcx
  struct _KPRCB *v15; // rcx
  struct _KPRCB *v16; // rcx
  __int64 result; // rax

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140437010);
  qword_140437040 = (__int64)KeGetCurrentThread();
LABEL_2:
  v1 = v0;
  while ( 1 )
  {
    v2 = qword_140437000;
    if ( qword_140437000 == &qword_140437000 )
      break;
    v3 = *((_DWORD *)qword_140437000 + 8);
    *((_DWORD *)qword_140437000 + 8) = 0;
    if ( v3 )
    {
      KxReleaseSpinLock(&qword_140437010);
      if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      __writecr8(v1);
      if ( v3 <= 0 )
      {
        if ( v3 != -1 )
        {
          v10 = (unsigned int)(-1 - v3);
          do
          {
            LOBYTE(v7) = *((_BYTE *)v2 + 18);
            PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
            ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
            --v10;
          }
          while ( v10 );
        }
        LOBYTE(v7) = *((_BYTE *)v2 + 18);
        v11 = *((_QWORD *)v2 + 3);
        if ( (_BYTE)v7 )
          v12 = *(_DWORD *)(v11 + 2044);
        else
          v12 = *(_DWORD *)(v11 + 2076);
        if ( (v12 & 0x7FFFFFFF) == 1 )
        {
          v13 = KeAcquireSpinLockRaiseToDpc(&qword_140437010);
          if ( MEMORY[0xFFFFF78000000014] < *((_QWORD *)v2 + 6) )
          {
            --*((_DWORD *)v2 + 8);
            KxReleaseSpinLock(&qword_140437010);
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
            {
              v15 = KeGetCurrentPrcb();
              _InterlockedAnd((volatile signed __int32 *)v15->SchedulerAssist, 0xFFFEFFFF);
              KiRemoveSystemWorkPriorityKick((__int64)v15);
            }
            __writecr8(v13);
            KeDelayExecutionThread(0, 1u, (PLARGE_INTEGER)v2 + 6);
            goto LABEL_38;
          }
          KxReleaseSpinLock(&qword_140437010);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v13 < 2u )
          {
            v14 = KeGetCurrentPrcb();
            _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
            KiRemoveSystemWorkPriorityKick((__int64)v14);
          }
          __writecr8(v13);
          LOBYTE(v7) = *((_BYTE *)v2 + 18);
          v11 = *((_QWORD *)v2 + 3);
        }
        PspAdjustKeepAliveCountProcess(v11, 0xFFFFFFFFLL, *((_QWORD *)v2 + 5), v7);
        ObfDereferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
      }
      else
      {
        do
        {
          ObfReferenceObjectWithTag(*((PVOID *)v2 + 3), 0x746C6644u);
          LOBYTE(v9) = *((_BYTE *)v2 + 18);
          PspAdjustKeepAliveCountProcess(*((_QWORD *)v2 + 3), 1LL, *((_QWORD *)v2 + 5), v9);
          --v3;
        }
        while ( v3 );
      }
LABEL_38:
      v0 = KeAcquireSpinLockRaiseToDpc(&qword_140437010);
      goto LABEL_2;
    }
    v4 = *(_QWORD **)v2;
    v5 = (PVOID *)*((_QWORD *)v2 + 1);
    if ( *(PVOID *)(*(_QWORD *)v2 + 8LL) != v2 || *v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v6 = *((_BYTE *)v2 + 17) == 1;
    *((_BYTE *)v2 + 16) = 0;
    if ( v6 )
      ExFreePoolWithTag(v2, 0);
  }
  qword_140437040 = 0LL;
  byte_140437038 = 0;
  KxReleaseSpinLock(&qword_140437010);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && v1 < 2u )
  {
    v16 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v16->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v16);
  }
  result = v1;
  __writecr8(v1);
  return result;
}
