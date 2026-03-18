/*
 * XREFs of VidSchiProcessSuspendContextCompletedDpc @ 0x1C0038814
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C00033B0 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002D5AC (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C0011474 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ??0AcquireSpinLock@@QEAA@AEA_K_N1@Z @ 0x1C0011694 (--0AcquireSpinLock@@QEAA@AEA_K_N1@Z.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C00134BC (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C003678C (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessSuspendContextCompletedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbx
  unsigned __int64 v2; // rdi
  struct _SLIST_ENTRY *v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _BYTE v12[56]; // [rsp+20h] [rbp-38h] BYREF

  Next = ListEntry[2].Next;
  v2 = *((_QWORD *)&ListEntry[2].Next + 1);
  v3 = Next[1].Next;
  v4 = *((_QWORD *)&Next->Next + 1);
  v5 = *((_QWORD *)&v3[1].Next + 1);
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&v3[500], ListEntry);
  AcquireSpinLock::AcquireSpinLock((AcquireSpinLock *)v12, (unsigned __int64 *)(v5 + 1648), v6, 1);
  v8 = *((_QWORD *)&Next[10].Next + 1);
  if ( v2 != v8 )
  {
    v9 = (unsigned __int64)Next[10].Next;
    if ( v2 > v9 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
      v10[3] = 281LL;
      v10[4] = 17LL;
      v10[5] = v2;
      v10[6] = *((_QWORD *)&Next[10].Next + 1);
      v10[7] = Next[10].Next;
      v9 = WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
    }
    if ( v2 < v8 )
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v8, v7);
      v11[3] = 281LL;
      v11[4] = 17LL;
      v11[5] = v2;
      v11[6] = *((_QWORD *)&Next[10].Next + 1);
      v11[7] = Next[10].Next;
      v9 = WdLogEvent5_WdCriticalError(v11);
      __debugbreak();
    }
    *((_QWORD *)&Next[10].Next + 1) = v2;
    if ( v2 == v9 )
      VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v4 + 168));
  }
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v12);
}
