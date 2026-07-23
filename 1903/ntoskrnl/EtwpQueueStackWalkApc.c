/*
 * XREFs of EtwpQueueStackWalkApc @ 0x14032CF00
 * Callers:
 *     EtwpStackTraceDispatcher @ 0x14032D1BC (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkDpc @ 0x14032D390 (EtwpStackWalkDpc.c)
 * Callees:
 *     KeInitializeApc @ 0x140081C30 (KeInitializeApc.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140096A80 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     KeInsertQueueApc @ 0x1400AECB0 (KeInsertQueueApc.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400FA0F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KeRemoveQueueApc @ 0x1401317E4 (KeRemoveQueueApc.c)
 *     RtlpInterlockedPopEntrySList @ 0x1401CB9F0 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401CBA30 (RtlpInterlockedPushEntrySList.c)
 *     KeTryToInsertQueueApc @ 0x1402AB500 (KeTryToInsertQueueApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14032D0DC (EtwpQueueStackWalkDpc.c)
 */

void __fastcall EtwpQueueStackWalkApc(__int64 a1, unsigned __int8 a2, unsigned int *a3, unsigned int *a4)
{
  char v4; // r12
  _SLIST_ENTRY *v5; // rsi
  unsigned int v10; // ebp
  __int64 v11; // r8
  __int64 v12; // rdx
  char inserted; // al
  signed int v14; // eax

  v4 = 0;
  v5 = 0LL;
  if ( (struct _KTHREAD *)a1 != KeGetCurrentThread() )
    return;
  if ( *(_DWORD *)(*(_QWORD *)(a1 + 544) + 624LL) + ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 440LL) >> 3) & 1) )
    return;
  if ( *(_BYTE *)(a1 + 644) )
    return;
  v10 = (*((_WORD *)a3 + 417) & 7) + 24;
  if ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), v10) )
    return;
  if ( (*(_DWORD *)(a1 + 116) & 0x4000) == 0 )
    goto LABEL_15;
  if ( !ExAcquireRundownProtectionCacheAwareEx(
          *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a3 + 139) + 448LL) + 8LL * *a3),
          1u) )
    goto LABEL_15;
  v4 = 1;
  v5 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)a3 + 58);
  if ( !v5 )
    goto LABEL_15;
  KeInitializeApc(
    (__int64)v5,
    a1,
    0,
    (__int64)EtwpStackWalkApc,
    (__int64)EtwpCancelStackWalkApc,
    (__int64)EtwpStackWalkApc,
    0,
    (__int64)a3);
  if ( !a3[84] )
    goto LABEL_15;
  v11 = a4[1];
  v12 = *a4;
  if ( a2 <= 2u )
    inserted = KeInsertQueueApc((__int64)v5, v12, v11, 0);
  else
    inserted = KeTryToInsertQueueApc((__int64)v5, v12, v11);
  if ( !a3[84] )
  {
    if ( inserted && !KeRemoveQueueApc((__int64)v5) )
      return;
    goto LABEL_15;
  }
  if ( !inserted )
  {
    if ( a2 > 2u )
      EtwpQueueStackWalkDpc(a1, a3, a4);
LABEL_15:
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), v10);
    if ( v4 )
      ExReleaseRundownProtectionCacheAwareEx(
        *(PEX_RUNDOWN_REF_CACHE_AWARE *)(*(_QWORD *)(*((_QWORD *)a3 + 139) + 448LL) + 8LL * *a3),
        1u);
    if ( v5 )
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)a3 + 58, v5);
    return;
  }
  _InterlockedIncrement((volatile signed __int32 *)a3 + 240);
  v14 = a3[240];
  if ( v14 > (int)a3[241] )
    a3[241] = v14;
}
