/*
 * XREFs of KeDeregisterBoundCallback @ 0x1402A5740
 * Callers:
 *     <none>
 * Callees:
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     ExCompareExchangeCallBack @ 0x14018F34C (ExCompareExchangeCallBack.c)
 *     RtlpSysVolFree @ 0x1406E4210 (RtlpSysVolFree.c)
 *     ExWaitForCallBacks @ 0x14090CF2C (ExWaitForCallBacks.c)
 */

__int64 __fastcall KeDeregisterBoundCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v3; // esi
  struct _EX_RUNDOWN_REF *v4; // rax
  struct _EX_RUNDOWN_REF *v5; // rbx
  char v6; // di
  signed __int64 v7; // rax
  signed __int64 v8; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = -1073741816;
  --CurrentThread->KernelApcDisable;
  v4 = ExReferenceCallBackBlock(&KiBoundsCallback);
  v5 = v4;
  if ( v4 )
  {
    v6 = 0;
    if ( v4[1].Count == a1 )
      v6 = ExCompareExchangeCallBack(&KiBoundsCallback, 0LL, (__int64)v4);
    _m_prefetchw(&KiBoundsCallback);
    v7 = KiBoundsCallback;
    while ( ((unsigned __int64)v5 ^ v7) < 0xF )
    {
      v8 = v7;
      v7 = _InterlockedCompareExchange64(&KiBoundsCallback, v7 + 1, v7);
      if ( v8 == v7 )
        goto LABEL_8;
    }
    ExReleaseRundownProtection_0(v5);
LABEL_8:
    if ( v6 )
    {
      ExWaitForCallBacks(v5);
      RtlpSysVolFree(v5);
      v3 = 0;
    }
  }
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return v3;
}
