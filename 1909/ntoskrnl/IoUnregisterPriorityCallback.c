/*
 * XREFs of IoUnregisterPriorityCallback @ 0x140298D00
 * Callers:
 *     IopDeleteDriver @ 0x140786390 (IopDeleteDriver.c)
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14001D290 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExCompareExchangeCallBack @ 0x14018A28C (ExCompareExchangeCallBack.c)
 *     RtlpSysVolFree @ 0x1406E51F0 (RtlpSysVolFree.c)
 *     ExWaitForCallBacks @ 0x14090C98C (ExWaitForCallBacks.c)
 */

void __fastcall IoUnregisterPriorityCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // r15
  signed __int64 *i; // r14
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  signed __int64 v9; // rax
  signed __int64 v10; // rtt

  if ( (*(_DWORD *)(a1 + 16) & 0x200) == 0 )
    return;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = 0LL;
  for ( i = IopUpdatePriorityCallbackRoutine; ; ++i )
  {
    v5 = ExReferenceCallBackBlock(&IopUpdatePriorityCallbackRoutine[v3]);
    v6 = v5;
    if ( v5 )
    {
      if ( v5[4].Count != a1 )
      {
        _m_prefetchw(i);
        v9 = *i;
        while ( ((unsigned __int64)v6 ^ v9) < 0xF )
        {
          v10 = v9;
          v9 = _InterlockedCompareExchange64(i, v9 + 1, v9);
          if ( v10 == v9 )
            goto LABEL_15;
        }
        ExReleaseRundownProtection_0(v6);
        goto LABEL_15;
      }
      if ( ExCompareExchangeCallBack(&IopUpdatePriorityCallbackRoutine[v3], 0LL, (__int64)v5) )
        break;
    }
LABEL_15:
    v3 = (unsigned int)(v3 + 1);
    if ( (unsigned int)v3 >= 8 )
    {
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
      return;
    }
  }
  _InterlockedDecrement(&IopUpdatePriorityCallbackRoutineCount);
  _m_prefetchw(&IopUpdatePriorityCallbackRoutine[v3]);
  v7 = IopUpdatePriorityCallbackRoutine[v3];
  if ( ((unsigned __int64)v6 ^ v7) >= 0xF )
  {
LABEL_9:
    ExReleaseRundownProtection_0(v6);
  }
  else
  {
    while ( 1 )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(&IopUpdatePriorityCallbackRoutine[v3], v7 + 1, v7);
      if ( v8 == v7 )
        break;
      if ( ((unsigned __int64)v6 ^ v7) >= 0xF )
        goto LABEL_9;
    }
  }
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  ExWaitForCallBacks(v6);
  RtlpSysVolFree(v6);
  *(_DWORD *)(a1 + 16) &= ~0x200u;
}
