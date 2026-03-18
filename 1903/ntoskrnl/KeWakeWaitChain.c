/*
 * XREFs of KeWakeWaitChain @ 0x14012567C
 * Callers:
 *     ExpConvertExclusiveToSharedLite @ 0x1400EED48 (ExpConvertExclusiveToSharedLite.c)
 *     ExpConvertFastResourceExclusiveToShared @ 0x14016BBD4 (ExpConvertFastResourceExclusiveToShared.c)
 *     ExpReleaseDisownedFastResourceShared @ 0x14016BDBC (ExpReleaseDisownedFastResourceShared.c)
 *     ExpReleaseFastResourceShared @ 0x14016C1E0 (ExpReleaseFastResourceShared.c)
 *     ExpReleaseFastResourceExclusive @ 0x14016C5EC (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x14033A648 (ExpReleaseDisownedFastResourceExclusive.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1408474E4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x14000D060 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x14000E060 (KiWakeOtherQueueWaiters.c)
 *     KiRemoveBoostThread @ 0x140043940 (KiRemoveBoostThread.c)
 *     KiExitDispatcher @ 0x140067BE0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14006A0B0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400A9C50 (KiAcquireKobjectLockSafe.c)
 *     KeIsThreadRunning @ 0x1402A493C (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14032DA48 (EtwTraceEnqueueWork.c)
 */

__int64 __fastcall KeWakeWaitChain(__int64 **a1, unsigned int a2, char a3)
{
  unsigned int v3; // esi
  __int64 *v5; // rdx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r13
  volatile signed __int32 *v9; // rax
  volatile signed __int32 *v10; // rbp
  _QWORD *v11; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rax
  __int64 v14; // rdi
  _QWORD *v15; // rcx
  char v16; // al
  bool v17; // zf
  char v18; // al
  int v19; // ecx
  __int64 v20; // rsi
  _QWORD *v21; // r15
  unsigned __int8 v22; // cl
  struct _KPRCB *v23; // r12
  _KTHREAD *CurrentThread; // r14
  __int64 v25; // r8
  int v26; // r8d
  __int64 *v27; // rdx
  _QWORD *v28; // [rsp+38h] [rbp-60h]
  volatile signed __int32 *v29; // [rsp+40h] [rbp-58h]
  volatile signed __int32 *v30; // [rsp+48h] [rbp-50h]
  __int64 *v31; // [rsp+50h] [rbp-48h]
  unsigned __int8 v32; // [rsp+58h] [rbp-40h]
  int v35; // [rsp+B8h] [rbp+20h]

  v3 = 0;
  v5 = *a1;
  v35 = 0;
  v31 = *a1;
  if ( *a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v32 = CurrentIrql;
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql < 2u )
      _InterlockedOr((volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist, 0x10000u);
    CurrentPrcb = KeGetCurrentPrcb();
    v9 = (volatile signed __int32 *)v5;
    do
    {
      v10 = v9;
      v30 = *(volatile signed __int32 **)v9;
      v29 = v9 + 6;
      KiAcquireKobjectLockSafe(v9 + 6);
      v11 = v10 + 8;
      *((_DWORD *)v10 + 7) = 1;
      v12 = (_QWORD *)*((_QWORD *)v10 + 4);
      while ( v12 != v11 )
      {
        v13 = (_QWORD *)*v12;
        v14 = (__int64)v12;
        v12 = v13;
        v28 = v13;
        v15 = *(_QWORD **)(v14 + 8);
        if ( v13[1] != v14 || *v15 != v14 )
LABEL_8:
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
          KiAcquireKobjectLockSafe((volatile signed __int32 *)v20);
          if ( (_QWORD *)*v21 == v21
            || *(_DWORD *)(v20 + 40) >= *(_DWORD *)(v20 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v20 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v23, (_QWORD *)v20, v14) )
          {
            v26 = *(_DWORD *)(v20 + 4);
            *(_DWORD *)(v20 + 4) = v26 + 1;
            v27 = *(__int64 **)(v20 + 32);
            if ( *v27 != v20 + 24 )
              goto LABEL_8;
            *(_QWORD *)v14 = v20 + 24;
            *(_QWORD *)(v14 + 8) = v27;
            *v27 = v14;
            *(_QWORD *)(v20 + 32) = v14;
            if ( !v26 && (_QWORD *)*v21 != v21 )
              KiWakeOtherQueueWaiters((__int64)v23, v20);
          }
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
          v17 = (*((_DWORD *)v10 + 7))-- == 1;
          if ( v17 )
            break;
          v12 = v28;
        }
        else
        {
          KiTryUnwaitThread((__int64)CurrentPrcb, v14, 256LL, 0LL);
        }
        v11 = v10 + 8;
      }
      _InterlockedAnd(v29, 0xFFFFFF7F);
      v9 = v30;
      v3 = ++v35;
    }
    while ( v30 != (volatile signed __int32 *)v31 );
    if ( (a3 & 1) != 0 && (v18 = KiRemoveBoostThread((__int64)CurrentPrcb, (__int64)CurrentPrcb->CurrentThread), a2) )
    {
      v19 = 2;
      if ( v18 > (char)a2 )
        a2 = v18;
    }
    else
    {
      v19 = 1;
    }
    if ( (a3 & 2) != 0 && v19 == 1 )
      a2 = 1;
    KiExitDispatcher((__int64)CurrentPrcb, 0LL, v19, a2, v32);
    *a1 = 0LL;
  }
  return v3;
}
