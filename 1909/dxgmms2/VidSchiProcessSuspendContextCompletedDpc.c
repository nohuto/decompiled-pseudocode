/*
 * XREFs of VidSchiProcessSuspendContextCompletedDpc @ 0x1C0039260
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C0004330 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C002DCC0 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011240 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00113C4 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiSignalRegisteredEvent @ 0x1C0012164 (VidSchiSignalRegisteredEvent.c)
 *     ?VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C00371C8 (-VidSchiUpdateHwSchRunningTime@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 */

void __fastcall VidSchiProcessSuspendContextCompletedDpc(PSLIST_ENTRY ListEntry)
{
  struct _SLIST_ENTRY *Next; // rbx
  unsigned __int64 v2; // rdi
  struct _SLIST_ENTRY *v3; // rsi
  __int64 v4; // r14
  __int64 v5; // rbp
  __int64 v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF
  __int16 v12; // [rsp+40h] [rbp-18h]

  Next = ListEntry[2].Next;
  v2 = *((_QWORD *)&ListEntry[2].Next + 1);
  v3 = Next[1].Next;
  v4 = *((_QWORD *)&Next->Next + 1);
  v5 = *((_QWORD *)&v3[1].Next + 1);
  ExpInterlockedPushEntrySList((PSLIST_HEADER)&v3[500], ListEntry);
  v12 = 256;
  v11[0] = v5 + 1648;
  AcquireSpinLock::Acquire((Acquire *)v11);
  v7 = *((_QWORD *)&Next[10].Next + 1);
  if ( v2 != v7 )
  {
    v8 = (unsigned __int64)Next[10].Next;
    if ( v2 > v8 )
    {
      v9 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
      v9[3] = 281LL;
      v9[4] = 17LL;
      v9[5] = v2;
      v9[6] = *((_QWORD *)&Next[10].Next + 1);
      v9[7] = Next[10].Next;
      v8 = WdLogEvent5_WdCriticalError(v9);
      __debugbreak();
    }
    if ( v2 < v7 )
    {
      v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v7, v6);
      v10[3] = 281LL;
      v10[4] = 17LL;
      v10[5] = v2;
      v10[6] = *((_QWORD *)&Next[10].Next + 1);
      v10[7] = Next[10].Next;
      v8 = WdLogEvent5_WdCriticalError(v10);
      __debugbreak();
    }
    *((_QWORD *)&Next[10].Next + 1) = v2;
    if ( v2 == v8 )
      VidSchiSignalRegisteredEvent(v5, (struct _KEVENT **)(v4 + 168));
  }
  VidSchiUpdateHwSchRunningTime((struct _VIDSCH_NODE *)v3);
  AcquireSpinLock::Release((AcquireSpinLock *)v11);
}
