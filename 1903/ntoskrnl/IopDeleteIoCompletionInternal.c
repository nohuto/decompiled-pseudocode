/*
 * XREFs of IopDeleteIoCompletionInternal @ 0x1400AA358
 * Callers:
 *     IopCloseIoCompletion @ 0x140670250 (IopCloseIoCompletion.c)
 *     IopDeleteIoCompletion @ 0x140670280 (IopDeleteIoCompletion.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14003DF00 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140044720 (KeAcquireInStackQueuedSpinLock.c)
 *     KeRundownQueueEx @ 0x1400AA4CC (KeRundownQueueEx.c)
 *     IopFreeWaitCompletionPacket @ 0x14013AA94 (IopFreeWaitCompletionPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BE818 (KiRemoveSystemWorkPriorityKick.c)
 *     IopFreeCompletionListPackets @ 0x1406AF620 (IopFreeCompletionListPackets.c)
 */

__int64 __fastcall IopDeleteIoCompletionInternal(KSPIN_LOCK *a1, __int64 a2)
{
  char v2; // si
  __int64 result; // rax
  PVOID *v5; // rbx
  unsigned __int8 OldIrql; // di
  _QWORD *v7; // rax
  PVOID *v8; // rcx
  PVOID *v9; // rax
  PVOID **v10; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  PVOID Object; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_Object; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v2 = a2;
  Object = 0LL;
  p_Object = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (_BYTE)a2 )
  {
    KeAcquireInStackQueuedSpinLock(a1 + 8, &LockHandle);
    LOBYTE(a2) = 0;
    *((_BYTE *)a1 + 72) = 1;
  }
  else
  {
    LOBYTE(a2) = 1;
  }
  result = KeRundownQueueEx(a1, a2);
  v5 = (PVOID *)result;
  if ( result )
  {
    v7 = *(_QWORD **)result;
    if ( (PVOID *)v7[1] == v5 )
    {
      Object = v7;
      p_Object = v5;
      v7[1] = &Object;
      *v5 = &Object;
      v5 = (PVOID *)Object;
      if ( Object != &Object )
      {
        do
        {
          v8 = v5;
          v5 = (PVOID *)*v5;
          if ( *((_BYTE *)v8 + 16) == 2 )
          {
            v10 = (PVOID **)v8[1];
            if ( v5[1] != v8 || *v10 != v8 )
              goto LABEL_24;
            *v10 = v5;
            v5[1] = v10;
            IopFreeWaitCompletionPacket(v8, a1);
          }
        }
        while ( v5 != &Object );
        v5 = (PVOID *)Object;
      }
      result = (__int64)&Object;
      if ( v5 == &Object )
      {
        v5 = 0LL;
        goto LABEL_4;
      }
      v9 = p_Object;
      if ( v5[1] == &Object && *p_Object == &Object )
      {
        *p_Object = v5;
        v5[1] = v9;
        p_Object = &Object;
        result = (__int64)&Object;
        Object = &Object;
        goto LABEL_4;
      }
    }
LABEL_24:
    __fastfail(3u);
  }
LABEL_4:
  if ( v2 )
  {
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && LockHandle.OldIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    result = OldIrql;
    __writecr8(OldIrql);
  }
  if ( v5 )
  {
    *(_QWORD *)v5[1] = 0LL;
    return IopFreeCompletionListPackets(v5);
  }
  return result;
}
