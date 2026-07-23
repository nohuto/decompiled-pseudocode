/*
 * XREFs of MiZeroPageFile @ 0x1402A6150
 * Callers:
 *     MiZeroAllPageFiles @ 0x14057CD54 (MiZeroAllPageFiles.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x14007DE80 (KeAcquireInStackQueuedSpinLock.c)
 *     KxReleaseQueuedSpinLock @ 0x1400BC6A0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     MmZeroPageWrite @ 0x140128488 (MmZeroPageWrite.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

LONG __fastcall MiZeroPageFile(_QWORD *a1)
{
  _QWORD *v1; // r14
  struct _KEVENT *v2; // r15
  unsigned int v3; // edi
  int v4; // ebx
  unsigned int v5; // ebp
  __int64 v6; // r8
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned int v9; // r9d
  unsigned __int8 OldIrql; // bl
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v12; // rcx
  unsigned __int8 v13; // bl
  struct _KPRCB *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+88h] [rbp+10h] BYREF

  v1 = (_QWORD *)a1[4];
  v2 = (struct _KEVENT *)a1[5];
  ExFreePoolWithTag(a1, 0);
  v3 = 0;
  v4 = 0;
  v5 = 0;
  KeAcquireInStackQueuedSpinLock(v1 + 29, &LockHandle);
  v6 = *v1;
  v7 = 1;
  if ( *v1 > 1uLL )
  {
    v8 = 1LL;
    do
    {
      v9 = v5;
      if ( _bittest64(*(const signed __int64 **)(v1[14] + 16LL), v8) )
      {
        if ( v3 )
          v4 = 1;
      }
      else
      {
        v5 = v7;
        if ( v3 )
          v5 = v9;
        if ( ++v3 == 16 || v8 == v6 - 1 )
          v4 = 1;
      }
      if ( v4 )
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        OldIrql = LockHandle.OldIrql;
        if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
        __writecr8(OldIrql);
        v12 = v1[7];
        v18 = (unsigned __int64)v5 << 12;
        v17 = (unsigned __int64)v3 << 12;
        MmZeroPageWrite(v12, (__int64)&v18, (__int64 *)&v17, 0);
        v4 = 0;
        KeAcquireInStackQueuedSpinLock(v1 + 29, &LockHandle);
        v3 = 0;
      }
      v6 = *v1;
      v8 = ++v7;
    }
    while ( (unsigned __int64)v7 < *v1 );
  }
  KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  v13 = LockHandle.OldIrql;
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
  {
    v14 = KeGetCurrentPrcb();
    _InterlockedAnd((volatile signed __int32 *)v14->SchedulerAssist, 0xFFFEFFFF);
    KiRemoveSystemWorkPriorityKick((__int64)v14);
  }
  __writecr8(v13);
  return KeSetEvent(v2, 0, 0);
}
