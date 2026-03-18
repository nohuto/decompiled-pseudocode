/*
 * XREFs of ??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z @ 0x1C0145DEC
 * Callers:
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z @ 0x1C0106B60 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXW4_DXGKETW_PROFILER_TYPE@@PEAD@Z.c)
 *     ?AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C01243EC (-AcquireCoreResourceExclusiveWithTracking@DXGADAPTER@@AEAAXW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@.c)
 * Callees:
 *     <none>
 */

DXGDEADLOCK_TRACKER *__fastcall DXGDEADLOCK_TRACKER::DXGDEADLOCK_TRACKER(char *DeferredContext, struct DXGADAPTER *a2)
{
  struct _KTIMER *v2; // rdi
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rax

  *((_DWORD *)DeferredContext + 2) = 0;
  v2 = (struct _KTIMER *)(DeferredContext + 176);
  *((_DWORD *)DeferredContext + 3) = 0;
  *((_DWORD *)DeferredContext + 4) = 0;
  *((_WORD *)DeferredContext + 20) = 0;
  *((_QWORD *)DeferredContext + 4) = a2;
  DeferredContext[42] = 1;
  v4 = DXGDEADLOCK_TRACKER::DeadlockCounter;
  *((_QWORD *)DeferredContext + 39) = 0LL;
  *((_QWORD *)DeferredContext + 38) = v4;
  *(_QWORD *)DeferredContext = MEMORY[0xFFFFF78000000014];
  KeInitializeTimer((PKTIMER)(DeferredContext + 176));
  KeInitializeDpc((PRKDPC)(DeferredContext + 240), (PKDEFERRED_ROUTINE)DeadlockTimeOutDpc, DeferredContext);
  KeInitializeTimer((PKTIMER)(DeferredContext + 48));
  KeInitializeDpc((PRKDPC)(DeferredContext + 112), (PKDEFERRED_ROUTINE)DeadlockPulseDpc, DeferredContext);
  _InterlockedIncrement64((volatile signed __int64 *)(*((_QWORD *)DeferredContext + 4) + 24LL));
  v5 = *((_QWORD *)DeferredContext + 4);
  *((_QWORD *)DeferredContext + 39) = -1LL;
  v6 = *(int *)(v5 + 4352);
  *((_DWORD *)DeferredContext + 2) = v6;
  if ( KeSetTimer(v2, (LARGE_INTEGER)(-10000 * v6), (PKDPC)(DeferredContext + 240)) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v9 + 24) = 10813LL;
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *((_QWORD *)DeferredContext + 4);
  v11 = *(int *)(v10 + 4356);
  *((_DWORD *)DeferredContext + 3) = v11;
  *((_DWORD *)DeferredContext + 4) = *(_DWORD *)(v10 + 4360);
  if ( KeSetTimer((PKTIMER)(DeferredContext + 48), (LARGE_INTEGER)(-10000 * v11), (PKDPC)(DeferredContext + 112)) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v14 + 24) = 10820LL;
    WdLogEvent5_WdAssertion(v14);
  }
  return (DXGDEADLOCK_TRACKER *)DeferredContext;
}
