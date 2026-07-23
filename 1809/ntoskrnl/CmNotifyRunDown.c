/*
 * XREFs of CmNotifyRunDown @ 0x1405FA17C
 * Callers:
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140018980 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400189C0 (ExAcquireFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     DbgPrint @ 0x1401263A0 (DbgPrint.c)
 *     KeRemoveQueueApc @ 0x14012F428 (KeRemoveQueueApc.c)
 *     CmCleanupThreadInfo @ 0x1401B307C (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x1401B30BC (CmpInitializeThreadInfo.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401B4C38 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFreePostBlock @ 0x1406961EC (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x140696240 (CmpFreeSubordinatePost.c)
 *     CmpCancelSubordinatePost @ 0x1406B417C (CmpCancelSubordinatePost.c)
 */

_QWORD *__fastcall CmNotifyRunDown(__int64 a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rcx
  __int64 v5; // r8
  unsigned __int8 CurrentIrql; // si
  _QWORD *v7; // rax
  __int64 *v8; // rbx
  __int64 v9; // rcx
  char *v10; // rbx
  int v11; // ecx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rax
  __int16 v14; // ax
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  void **v18; // rax
  _QWORD *v19; // rbx
  _QWORD *v20; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v22; // rcx
  PVOID v23[7]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (_QWORD *)(a1 + 1544);
  result = *(_QWORD **)(a1 + 1544);
  if ( result && result != v2 )
  {
    CmpInitializeThreadInfo(v23);
    CmpLockRegistry(v4);
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *v2 )
    {
      while ( 1 )
      {
        v7 = (_QWORD *)(a1 + 1544);
        v8 = *(__int64 **)(a1 + 1544);
        if ( v8 == (__int64 *)(a1 + 1544) )
          break;
        v9 = *v8;
        if ( (_QWORD *)v8[1] != v7 || *(__int64 **)(v9 + 8) != v8 )
LABEL_31:
          __fastfail(3u);
        *v7 = v9;
        *(_QWORD *)(v9 + 8) = v7;
        v10 = (char *)(v8 - 2);
        v11 = *((_DWORD *)v10 + 14);
        if ( (v11 & 0x10000) != 0 )
        {
          if ( (_WORD)v11 != 2 )
            goto LABEL_25;
          v12 = (_QWORD *)*((_QWORD *)v10 + 8);
          if ( (_QWORD *)v12[13] == v12 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          v13 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[7];
          if ( v13 && ((v14 = *(_WORD *)(v13 + 8), v14 == 332) || v14 == 452) )
          {
            **(_DWORD **)(*((_QWORD *)v10 + 8) + 104LL) = 267;
            *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 8) + 104LL) + 4LL) = 0;
          }
          else
          {
            **(_DWORD **)(*((_QWORD *)v10 + 8) + 104LL) = 267;
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 8) + 104LL) + 8LL) = 0LL;
          }
          v15 = (_QWORD *)*((_QWORD *)v10 + 8);
          if ( (_QWORD *)v15[13] == v15 + 13 )
          {
            DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v15);
            if ( (_BYTE)KdDebuggerEnabled )
            {
              if ( !(_BYTE)KdDebuggerNotPresent )
                __debugbreak();
            }
          }
          v16 = *((_QWORD *)v10 + 8);
          if ( *(_QWORD *)(v16 + 8) )
          {
            KeSetEvent(*(PRKEVENT *)(v16 + 8), 0, 0);
            ObfDereferenceObject(*(PVOID *)(*((_QWORD *)v10 + 8) + 8LL));
            v16 = *((_QWORD *)v10 + 8);
          }
          if ( !KeRemoveQueueApc(v16 + 16, (__int64)v15, v5) )
          {
LABEL_25:
            v17 = *(_QWORD **)v10;
            v18 = (void **)*((_QWORD *)v10 + 1);
            if ( *(char **)(*(_QWORD *)v10 + 8LL) != v10 || *v18 != v10 )
              goto LABEL_31;
            *v18 = v17;
            v17[1] = v18;
            CmpCancelSubordinatePost(v10, 0LL);
          }
          CmpFreeSubordinatePost(v10);
          CmpFreePostBlock(v10);
        }
        else
        {
          v19 = v10 + 16;
          v20 = *(_QWORD **)(a1 + 1552);
          if ( (_QWORD *)*v20 != v7 )
            goto LABEL_31;
          *v19 = v7;
          v19[1] = v20;
          *v20 = v19;
          *(_QWORD *)(a1 + 1552) = v19;
        }
      }
    }
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    CmpUnlockRegistry(v22);
    return CmCleanupThreadInfo(v23);
  }
  return result;
}
