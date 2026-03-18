/*
 * XREFs of VidSchiProcessIsrHwQueuePageFaulted @ 0x1C0038E74
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B220 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

const signed __int64 *__fastcall VidSchiProcessIsrHwQueuePageFaulted(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v5; // r8
  const signed __int64 *result; // rax
  __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rcx
  PSLIST_ENTRY v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _SLIST_ENTRY v13; // xmm1
  __int64 v14; // rax

  v3 = *(__int64 **)(a1 + 616);
  v5 = *(_DWORD *)(a2 + 40) + (unsigned int)*(unsigned __int8 *)(*(unsigned int *)(a2 + 44) + a1 + 76);
  if ( (unsigned int)v5 < *(_DWORD *)(a1 + 688) )
    v3 += v5;
  result = *(const signed __int64 **)(a1 + 576);
  v7 = *v3;
  if ( !_bittest64(result, (unsigned int)v5) )
  {
    result = (const signed __int64 *)*(unsigned int *)(v7 + 16);
    if ( (_DWORD)result != 1 )
    {
      if ( *(_DWORD *)(v7 + 16) == 2 )
      {
        v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError((unsigned int)v5, a2);
        v8[3] = 281LL;
        v8[4] = 16LL;
        v8[5] = a1;
        v9 = *(unsigned __int16 *)(v7 + 4);
        v8[7] = 0LL;
        v8[6] = v9;
        WdLogEvent5_WdCriticalError(v8);
        __debugbreak();
      }
      v10 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v7 + 6192));
      if ( v10 )
      {
        v10[2].Next = (struct _SLIST_ENTRY *)v7;
        *(PSLIST_ENTRY)((char *)v10 + 40) = *(PSLIST_ENTRY)(a2 + 8);
        *(PSLIST_ENTRY)((char *)v10 + 56) = *(PSLIST_ENTRY)(a2 + 24);
        *(PSLIST_ENTRY)((char *)v10 + 72) = *(PSLIST_ENTRY)(a2 + 40);
        v13 = *(struct _SLIST_ENTRY *)(a2 + 56);
        LODWORD(v10->Next) = 12;
        *(PSLIST_ENTRY)((char *)v10 + 88) = v13;
        return (const signed __int64 *)ExpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 1696), v10 + 1);
      }
      else
      {
        v14 = WdLogNewEntry5_WdAssertion(v12, v11);
        *(_QWORD *)(v14 + 24) = *(unsigned __int16 *)(v7 + 4);
        return (const signed __int64 *)WdLogEvent5_WdAssertion(v14);
      }
    }
  }
  return result;
}
