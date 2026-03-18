/*
 * XREFs of EtwpRealtimeFlushSavedBuffers @ 0x1406AD1F0
 * Callers:
 *     EtwpLogger @ 0x1406ACDA0 (EtwpLogger.c)
 * Callees:
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpRealtimeDeliverBuffer @ 0x140633534 (EtwpRealtimeDeliverBuffer.c)
 *     EtwpSendSessionNotification @ 0x1406A9B10 (EtwpSendSessionNotification.c)
 *     EtwpRealtimeRestoreBuffer @ 0x1406AD808 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1406AF504 (EtwpRealtimeZeroTruncateLogfile.c)
 *     EtwpRealtimeResetReferenceTime @ 0x1409002B8 (EtwpRealtimeResetReferenceTime.c)
 */

__int64 __fastcall EtwpRealtimeFlushSavedBuffers(__int64 a1)
{
  PVOID PoolWithTag; // rax
  __int64 v4; // rsi
  int v5; // edx
  __int64 v6; // rbx
  __int64 v7; // r8
  bool v8; // sf

  if ( !*(_DWORD *)(a1 + 440) || !*(_DWORD *)(a1 + 360) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(a1 + 4), 0x50777445u);
  v4 = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, *(unsigned int *)(a1 + 4));
    v5 = *(_DWORD *)(a1 + 440);
    if ( v5 )
    {
      while ( *(_DWORD *)(a1 + 360) )
      {
        v6 = *(_QWORD *)(a1 + 408);
        if ( (int)EtwpRealtimeRestoreBuffer(a1, v4) < 0 )
        {
          *(_DWORD *)(a1 + 276) += *(_DWORD *)(a1 + 440);
          *(_DWORD *)(a1 + 440) = 0;
          *(_QWORD *)(a1 + 424) = 0LL;
          *(_DWORD *)(a1 + 464) = 3;
          EtwpSendSessionNotification(a1, 4u, 0xC0000102);
          EtwpRealtimeZeroTruncateLogfile(a1);
          ExFreePoolWithTag((PVOID)v4, 0);
          if ( (*(_DWORD *)(a1 + 832) & 1) != 0 )
            EtwpRealtimeResetReferenceTime(a1);
          return 3221225730LL;
        }
        if ( (int)EtwpRealtimeDeliverBuffer(a1, v4) < 0 )
        {
          v5 = *(_DWORD *)(a1 + 440);
          *(_QWORD *)(a1 + 408) = v6;
          break;
        }
        if ( (*(_DWORD *)(a1 + 832) & 1) != 0 && *(_WORD *)(v4 + 54) == 3 )
          *(_OWORD *)(a1 + 448) = *(_OWORD *)(v4 + 56);
        v5 = --*(_DWORD *)(a1 + 440);
        v7 = *(_QWORD *)(a1 + 424) - *(unsigned int *)(v4 + 48);
        v8 = *(int *)(a1 + 16) < 0;
        *(_QWORD *)(a1 + 424) = v7;
        if ( v8
          && *(_QWORD *)(a1 + 432) - v7 > (unsigned __int64)(unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 252)) )
        {
          *(_DWORD *)(a1 + 16) = 0;
        }
        if ( !v5 )
          goto LABEL_14;
      }
      if ( v5 )
        goto LABEL_15;
    }
LABEL_14:
    EtwpRealtimeZeroTruncateLogfile(a1);
LABEL_15:
    ExFreePoolWithTag((PVOID)v4, 0);
    return 0LL;
  }
  return 3221225495LL;
}
