/*
 * XREFs of StorPortPause @ 0x1C003EE40
 * Callers:
 *     StorPortNotification @ 0x1C00053A0 (StorPortNotification.c)
 *     RaidpLinkDown @ 0x1C003DFF8 (RaidpLinkDown.c)
 *     StorPortPauseVrfy @ 0x1C00776F0 (StorPortPauseVrfy.c)
 * Callees:
 *     RaidQueueDeferredItem @ 0x1C000246C (RaidQueueDeferredItem.c)
 *     DbgLogRequest @ 0x1C00027C4 (DbgLogRequest.c)
 *     RaidPauseAdapterQueue @ 0x1C00142F8 (RaidPauseAdapterQueue.c)
 *     RaidResumeAdapterQueue @ 0x1C001435C (RaidResumeAdapterQueue.c)
 *     McTemplateK0pqq @ 0x1C003D8DC (McTemplateK0pqq.c)
 */

char __fastcall StorPortPause(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // [rsp+20h] [rbp-38h]
  __int64 v10; // [rsp+28h] [rbp-30h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v5 = **(_QWORD **)(a1 - 16);
  if ( (qword_1C00612B0 & 0x200) != 0 )
    DbgLogRequest(v5, 14, retaddr, **(_QWORD **)(a1 - 16), a2, 0LL, 0LL);
  v6 = 255LL;
  if ( v5 )
    v6 = *(unsigned int *)(v5 + 56);
  if ( (Microsoft_Windows_StorPortEnableBits & 4) != 0 )
  {
    LODWORD(v10) = a2;
    LODWORD(v9) = v6;
    McTemplateK0pqq((struct _MCGEN_TRACE_CONTEXT *)v6, &EventPortPause, a3, a1, v9, v10);
  }
  if ( !v5 )
    return 0;
  ++*(_DWORD *)(v5 + 5516);
  *(_DWORD *)(v5 + 1520) = a2;
  _InterlockedExchange((volatile __int32 *)(v5 + 1524), 1);
  RaidPauseAdapterQueue(v5);
  v8 = v5 + 1360;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 1376), 134684676, 134684677) != 134684677 )
    v8 = 0LL;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 32) = 3;
    RaidQueueDeferredItem((char *)(v5 + 1152), (struct _SLIST_ENTRY *)v8);
  }
  else
  {
    _InterlockedIncrement(&RaidUnloggedErrors);
    if ( (qword_1C00612B0 & 0x800) != 0 )
      DbgLogRequest(v5, 22, retaddr, 288LL, 0LL, 0LL, 0LL);
    if ( !(unsigned int)RaidResumeAdapterQueue(v5) )
      KeInsertQueueDpc((PRKDPC)(v5 + 1856), 0LL, 0LL);
  }
  return 1;
}
