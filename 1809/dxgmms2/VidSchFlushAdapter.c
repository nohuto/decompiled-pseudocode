/*
 * XREFs of VidSchFlushAdapter @ 0x1C00C80E0
 * Callers:
 *     VidSchiHandleControlEvent @ 0x1C00C6BC8 (VidSchiHandleControlEvent.c)
 *     VidSchTerminateAdapter @ 0x1C00C9A80 (VidSchTerminateAdapter.c)
 * Callees:
 *     VidSchIsTDRPending @ 0x1C00083F0 (VidSchIsTDRPending.c)
 *     VidSchIsWorkerThread @ 0x1C000FCE0 (VidSchIsWorkerThread.c)
 *     VidSchiInterlockedReadUlong @ 0x1C00115E0 (VidSchiInterlockedReadUlong.c)
 *     VidSchiClearFlipDevice @ 0x1C00118C8 (VidSchiClearFlipDevice.c)
 *     VidSchiGetSchedulerStatus @ 0x1C0015B84 (VidSchiGetSchedulerStatus.c)
 *     memset @ 0x1C001A9C0 (memset.c)
 *     VidSchiUnlinkCrossAdapterSyncObjects @ 0x1C0030988 (VidSchiUnlinkCrossAdapterSyncObjects.c)
 *     VidSchiUnwaitAllContexts @ 0x1C0030A48 (VidSchiUnwaitAllContexts.c)
 *     ??$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE@@_NP6AXPEAVHwQueueStagingList@@0@Z@Z @ 0x1C0030E3C (--$VidSchRundownUnorderedWaiter@U_VIDSCH_GLOBAL@@@@YAJPEAU_VIDSCH_GLOBAL@@0W4_VIDSCH_FLUSH_STAGE.c)
 *     ?VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031430 (-VidSchRundownUnorderedWaiterGlobal@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     ?VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0031554 (-VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiCleanupQueuedCommand @ 0x1C003951C (VidSchiCleanupQueuedCommand.c)
 *     VidSchiCompleteAllPendingCommand @ 0x1C003957C (VidSchiCompleteAllPendingCommand.c)
 *     VidSchiWaitFlushCompletion @ 0x1C007AE7C (VidSchiWaitFlushCompletion.c)
 *     VidSchResumeAdapter @ 0x1C007EE60 (VidSchResumeAdapter.c)
 *     VidSchiRequestSchedulerStatus @ 0x1C0083DE8 (VidSchiRequestSchedulerStatus.c)
 *     VidSchiCancelDelayTimerDevice @ 0x1C00C675C (VidSchiCancelDelayTimerDevice.c)
 *     VidSchiHandleControlEvent @ 0x1C00C6BC8 (VidSchiHandleControlEvent.c)
 *     VidSchiWaitForEmptyHwQueue @ 0x1C00C7990 (VidSchiWaitForEmptyHwQueue.c)
 *     VidSchiBlockDriverCallback @ 0x1C00CB37C (VidSchiBlockDriverCallback.c)
 */

__int64 __fastcall VidSchFlushAdapter(struct _VIDSCH_GLOBAL *a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // esi
  int v5; // r12d
  __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _VIDSCH_GLOBAL *i; // r14
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  _QWORD v19[20]; // [rsp+38h] [rbp-59h] BYREF

  v2 = 0;
  v3 = a2;
  v5 = 0;
  if ( a1 )
  {
    if ( (_DWORD)a2 == 15 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread != *((struct _KTHREAD **)a1 + 19) && CurrentThread != *((struct _KTHREAD **)a1 + 20) )
        *((_BYTE *)a1 + 2428) |= 3u;
    }
    if ( VidSchIsWorkerThread((__int64)a1) )
    {
      if ( v3 )
      {
        if ( VidSchIsTDRPending((__int64)a1) )
        {
          if ( *((_DWORD *)a1 + 601) == 3 )
          {
            VidSchiBlockDriverCallback(a1);
            *((_DWORD *)a1 + 9) = 23;
            RtlClearAllBitsEx((char *)a1 + 568);
            VidSchiCompleteAllPendingCommand((__int64)a1, v11, v12);
          }
        }
        else
        {
          VidSchiWaitForEmptyHwQueue((__int64)a1);
        }
        if ( v3 == 15 || *((_DWORD *)a1 + 601) == 3 )
        {
          VidSchiUnlinkCrossAdapterSyncObjects((__int64)a1);
          VidSchiProcessCrossAdapterSignaledSyncObjectsFromPassiveLevel(a1, v13, v14);
        }
        VidSchRundownUnorderedWaiterGlobal(a1, v9, v10);
        for ( i = (struct _VIDSCH_GLOBAL *)*((_QWORD *)a1 + 35);
              i != (struct _VIDSCH_GLOBAL *)((char *)a1 + 280);
              i = *(struct _VIDSCH_GLOBAL **)i )
        {
          VidSchiCancelDelayTimerDevice(0LL, (__int64)i - 104);
        }
        VidSchResumeAdapter((__int64)a1, 0);
        VidSchiUnwaitAllContexts((__int64)a1);
        VidSchiClearFlipDevice(a1, 0LL, 9u);
        VidSchiCleanupQueuedCommand(a1, v16, v17);
        if ( (unsigned int)(*((_DWORD *)a1 + 75) - 2) > 1 )
          VidSchiHandleControlEvent(a1);
      }
    }
    else if ( *(_BYTE *)(*((_QWORD *)a1 + 1) + 777LL) )
    {
      v5 = VidSchiRequestSchedulerStatus((__int64)a1, 3, 1);
    }
    else if ( (unsigned int)VidSchiGetSchedulerStatus((__int64)a1) == 1 )
    {
      v5 = VidSchRundownUnorderedWaiter<_VIDSCH_GLOBAL>(v18, (__int64)a1, v3);
      if ( v5 >= 0 && (v3 & 1) != 0 )
      {
        if ( VidSchIsTDRPending((__int64)a1) || v3 == 15 )
          VidSchiUnwaitAllContexts((__int64)a1);
        if ( *((_DWORD *)a1 + 177) )
        {
          memset(v19, 0, sizeof(v19));
          LODWORD(v19[4]) |= 0x10u;
          LODWORD(v19[2]) = 1;
          v19[5] = (char *)a1 + 708;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v19, 0x1Au);
        }
        if ( *((_DWORD *)a1 + 180) )
        {
          memset(v19, 0, sizeof(v19));
          LODWORD(v19[4]) |= 0x10u;
          LODWORD(v19[2]) = 3;
          v19[5] = (char *)a1 + 720;
          VidSchiWaitFlushCompletion((__int64)a1, (__int64)v19, 0x19u);
        }
        if ( v3 != 5 )
        {
          VidSchiClearFlipDevice(a1, 0LL, 9u);
          VidSchiInterlockedReadUlong((KSPIN_LOCK *)a1 + 209, (_DWORD *)a1 + 180);
        }
      }
    }
    LOBYTE(v2) = v3 == 15;
    _InterlockedOr((volatile signed __int32 *)a1 + 1485, v2);
    return (unsigned int)v5;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v6);
    return 3221225485LL;
  }
}
