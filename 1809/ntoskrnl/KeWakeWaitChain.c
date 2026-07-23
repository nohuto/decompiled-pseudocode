/*
 * XREFs of KeWakeWaitChain @ 0x140125CA8
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x1401210A8 (ExpConvertExclusiveToSharedLite.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14016483C (ExpReleaseDisownedFastResourceExclusive.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x140164B18 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x140164D4C (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x1401650A0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x1401664B8 (ExpReleaseFastResourceExclusive.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14080EE7C (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x1400AC950 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400C2EB0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x1400C4D10 (KiTryUnwaitThread.c)
 *     KiWakeOtherQueueWaiters @ 0x1400CDCE0 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x1400CFE60 (KiRemoveBoostThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400FBE90 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x14028DF98 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14030FF7C (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(__int64 **a1, unsigned int a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 *v5; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r13
  __int64 *v9; // rax
  __int64 *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  char v16; // al
  bool v17; // zf
  char v18; // al
  unsigned int v19; // ecx
  __int64 v20; // rsi
  _QWORD *v21; // r15
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // r12
  _KTHREAD *CurrentThread; // r14
  __int64 v25; // r8
  _QWORD *v26; // [rsp+38h] [rbp-60h]
  volatile signed __int32 *v27; // [rsp+40h] [rbp-58h]
  __int64 *v28; // [rsp+48h] [rbp-50h]
  __int64 *v29; // [rsp+50h] [rbp-48h]
  unsigned __int8 v30; // [rsp+58h] [rbp-40h]
  char v32; // [rsp+B0h] [rbp+18h]
  int v33; // [rsp+B8h] [rbp+20h]

  v32 = a3;
  v3 = 0;
  v5 = *a1;
  v33 = 0;
  v29 = *a1;
  if ( *a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v30 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = v5;
    do
    {
      v10 = v9;
      v28 = (__int64 *)*v9;
      v27 = (volatile signed __int32 *)(v9 + 3);
      KiAcquireKobjectLockSafe((volatile signed __int32 *)v9 + 6, (__int64)v5, a3);
      v11 = v10 + 4;
      *((_DWORD *)v10 + 7) = 1;
      v12 = (_QWORD *)v10[4];
      while ( v12 != v11 )
      {
        v13 = (_QWORD *)*v12;
        v14 = (__int64)v12;
        v12 = v13;
        v26 = v13;
        v15 = *(_QWORD **)(v14 + 8);
        if ( v13[1] != v14 || *v15 != v14 )
LABEL_44:
          __fastfail(3u);
        *v15 = v13;
        v13[1] = v15;
        v16 = *(_BYTE *)(v14 + 16);
        if ( v16 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
          {
            v17 = (*((_DWORD *)v10 + 7))-- == 1;
            if ( v17 )
              break;
          }
        }
        else if ( v16 == 2 )
        {
          *(_BYTE *)(v14 + 17) = 5;
          v20 = *(_QWORD *)(v14 + 24);
          *(_QWORD *)v14 = 0LL;
          v21 = (_QWORD *)(v20 + 8);
          v22 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && v22 < 2u )
            _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
          v23 = KeGetCurrentPrcb();
          CurrentThread = v23->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            LOBYTE(v25) = KeIsThreadRunning(v23->CurrentThread);
            EtwTraceEnqueueWork(CurrentThread, v14, v25);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v20, (__int64)v5, a3);
          if ( (_QWORD *)*v21 == v21
            || *(_DWORD *)(v20 + 40) >= *(_DWORD *)(v20 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v20 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v23, v20, v14) )
          {
            a3 = *(unsigned int *)(v20 + 4);
            *(_DWORD *)(v20 + 4) = a3 + 1;
            v5 = *(__int64 **)(v20 + 32);
            if ( *v5 != v20 + 24 )
              goto LABEL_44;
            *(_QWORD *)v14 = v20 + 24;
            *(_QWORD *)(v14 + 8) = v5;
            *v5 = v14;
            *(_QWORD *)(v20 + 32) = v14;
            if ( !(_DWORD)a3 && (_QWORD *)*v21 != v21 )
              KiWakeOtherQueueWaiters((__int64)v23, v20, a3);
          }
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
          v17 = (*((_DWORD *)v10 + 7))-- == 1;
          if ( v17 )
            break;
          v12 = v26;
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
        }
        v11 = v10 + 4;
      }
      _InterlockedAnd(v27, 0xFFFFFF7F);
      v9 = v28;
      v3 = ++v33;
    }
    while ( v28 != v29 );
    if ( (v32 & 1) != 0
      && (v18 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread, a3), a2) )
    {
      v19 = 2;
      if ( v18 > (char)a2 )
        a2 = v18;
    }
    else
    {
      v19 = 1;
    }
    if ( (v32 & 2) != 0 && v19 == 1 )
      a2 = 1;
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, v19, a2, v30);
    *a1 = 0LL;
  }
  return v3;
}
