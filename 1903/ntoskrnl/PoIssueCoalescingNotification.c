/*
 * XREFs of PoIssueCoalescingNotification @ 0x1402F7210
 * Callers:
 *     CmpIssueNewDirtyCallback @ 0x1406EAC74 (CmpIssueNewDirtyCallback.c)
 *     PopCoalescingCallbackWorker @ 0x1408A7800 (PopCoalescingCallbackWorker.c)
 * Callees:
 *     PopReleaseRwLock @ 0x140004A90 (PopReleaseRwLock.c)
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection_0 @ 0x140043820 (ExReleaseRundownProtection_0.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

void __fastcall PoIssueCoalescingNotification(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *i; // rdi
  signed __int64 *v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // rax
  struct _EX_RUNDOWN_REF *v6; // rbx
  signed __int64 v7; // rax
  signed __int64 v8; // rtt
  _DWORD v9[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  v9[0] = 0;
  v9[1] = a2;
  v10 = 0LL;
  LOBYTE(v9[0]) = *(_BYTE *)(a1 + 32);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&PopCoalRegistrationListLock, 0LL);
  for ( i = (signed __int64 *)PopCoalRegistrationList;
        i != (signed __int64 *)&PopCoalRegistrationList;
        i = (signed __int64 *)*i )
  {
    v4 = i + 2;
    v5 = ExReferenceCallBackBlock(i + 2);
    v6 = v5;
    if ( v5 )
    {
      if ( *((_BYTE *)i - 16) != LOBYTE(v9[0]) )
        ((void (__fastcall *)(struct _EX_RUNDOWN_REF *, _DWORD *, __int64))v5[1].Count)(v5, v9, v10);
      _m_prefetchw(v4);
      v7 = *v4;
      while ( ((unsigned __int64)v6 ^ v7) < 0xF )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange64(v4, v7 + 1, v7);
        if ( v8 == v7 )
          goto LABEL_9;
      }
      ExReleaseRundownProtection_0(v6);
    }
LABEL_9:
    ;
  }
  PopReleaseRwLock((ULONG_PTR)&PopCoalRegistrationListLock);
}
