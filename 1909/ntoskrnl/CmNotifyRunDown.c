/*
 * XREFs of CmNotifyRunDown @ 0x14060F400
 * Callers:
 *     PspExitThread @ 0x14060EBC8 (PspExitThread.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExAcquireFastMutexUnsafe @ 0x140089BB0 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x140089D40 (ExReleaseFastMutexUnsafe.c)
 *     DbgPrint @ 0x140126B50 (DbgPrint.c)
 *     KeRemoveQueueApc @ 0x140131FF4 (KeRemoveQueueApc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1401BF308 (KiRemoveSystemWorkPriorityKick.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpCancelSubordinatePost @ 0x140632B50 (CmpCancelSubordinatePost.c)
 *     CmpFreePostBlock @ 0x1406D113C (CmpFreePostBlock.c)
 *     CmpFreeSubordinatePost @ 0x1406D1190 (CmpFreeSubordinatePost.c)
 */

__int64 __fastcall CmNotifyRunDown(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  _QWORD *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 *v8; // rbx
  int v9; // ecx
  _QWORD *v10; // rdx
  unsigned __int64 v11; // rcx
  _QWORD *v12; // rdx
  __int16 v13; // ax
  __int64 v14; // rcx
  __int64 *v15; // rcx
  __int64 **v16; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rcx
  struct _KPRCB *CurrentPrcb; // rcx

  v2 = (_QWORD *)(a1 + 1560);
  result = *(_QWORD *)(a1 + 1560);
  if ( result && (_QWORD *)result != v2 )
  {
    CmpLockRegistry();
    ExAcquireFastMutexUnsafe(&CmpPostLock);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *v2 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = (_QWORD *)(a1 + 1560);
          v6 = *(__int64 **)(a1 + 1560);
          if ( v6 == (__int64 *)(a1 + 1560) )
            goto LABEL_31;
          v7 = *v6;
          if ( (_QWORD *)v6[1] != v5 || *(__int64 **)(v7 + 8) != v6 )
            __fastfail(3u);
          *v5 = v7;
          *(_QWORD *)(v7 + 8) = v5;
          v8 = v6 - 2;
          v9 = *((_DWORD *)v8 + 14);
          if ( (v9 & 0x10000) != 0 )
            break;
          v17 = v8 + 2;
          v18 = *(_QWORD **)(a1 + 1568);
          if ( (_QWORD *)*v18 != v5 )
            __fastfail(3u);
          *v17 = v5;
          v17[1] = v18;
          *v18 = v17;
          *(_QWORD *)(a1 + 1568) = v17;
        }
        if ( (_WORD)v9 != 2 )
          break;
        v10 = (_QWORD *)v8[8];
        if ( (_QWORD *)v10[13] == v10 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v10);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v11 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[6];
        if ( v11 && ((v13 = *(_WORD *)(v11 + 8), v13 == 332) || v13 == 452) )
        {
          **(_DWORD **)(v8[8] + 104) = 267;
          *(_DWORD *)(*(_QWORD *)(v8[8] + 104) + 4LL) = 0;
        }
        else
        {
          **(_DWORD **)(v8[8] + 104) = 267;
          *(_QWORD *)(*(_QWORD *)(v8[8] + 104) + 8LL) = 0LL;
        }
        v12 = (_QWORD *)v8[8];
        if ( (_QWORD *)v12[13] == v12 + 13 )
        {
          DbgPrint("IoStatusBlock pointing onto itself AsyncUser = %p\n", v12);
          if ( (_BYTE)KdDebuggerEnabled )
          {
            if ( !(_BYTE)KdDebuggerNotPresent )
              __debugbreak();
          }
        }
        v14 = v8[8];
        if ( *(_QWORD *)(v14 + 8) )
        {
          KeSetEvent(*(PRKEVENT *)(v14 + 8), 0, 0);
          ObfDereferenceObject(*(PVOID *)(v8[8] + 8));
          v14 = v8[8];
        }
        if ( !KeRemoveQueueApc(v14 + 16) )
        {
          v15 = (__int64 *)*v8;
          v16 = (__int64 **)v8[1];
          if ( *(__int64 **)(*v8 + 8) != v8 || *v16 != v8 )
            __fastfail(3u);
LABEL_29:
          *v16 = v15;
          v15[1] = (__int64)v16;
          CmpCancelSubordinatePost(v8, 0LL);
        }
        CmpFreeSubordinatePost(v8);
        CmpFreePostBlock(v8);
      }
      v15 = (__int64 *)*v8;
      v16 = (__int64 **)v8[1];
      if ( *(__int64 **)(*v8 + 8) != v8 || *v16 != v8 )
        __fastfail(3u);
      goto LABEL_29;
    }
LABEL_31:
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && KeGetCurrentIrql() >= 2u && CurrentIrql < 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      _InterlockedAnd((volatile signed __int32 *)CurrentPrcb->SchedulerAssist, 0xFFFEFFFF);
      KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    __writecr8(CurrentIrql);
    ExReleaseFastMutexUnsafe(&CmpPostLock);
    return CmpUnlockRegistry();
  }
  return result;
}
