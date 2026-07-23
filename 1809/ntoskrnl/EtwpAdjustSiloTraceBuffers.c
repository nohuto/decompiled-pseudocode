/*
 * XREFs of EtwpAdjustSiloTraceBuffers @ 0x140014E94
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14008F590 (EtwpAdjustTraceBuffers.c)
 * Callees:
 *     EtwpDequeueBuffer @ 0x1400153A8 (EtwpDequeueBuffer.c)
 *     EtwpUnlockBufferList @ 0x140015480 (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1400154CC (EtwpLockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x14001557C (EtwpQueryUsedProcessorCount.c)
 *     EtwpRemoveBufferFromGlobalList @ 0x1401B7524 (EtwpRemoveBufferFromGlobalList.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpReleaseLoggerContext @ 0x1405C6160 (EtwpReleaseLoggerContext.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1405C61A8 (EtwpAcquireLoggerContextByLoggerId.c)
 */

__int64 __fastcall EtwpAdjustSiloTraceBuffers(__int64 a1)
{
  __int64 result; // rax
  unsigned int v2; // edi
  void *v4; // r14
  __int64 v5; // rbx
  int UsedProcessorCount; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  void *v11; // rbp
  char i; // [rsp+40h] [rbp+8h] BYREF

  result = 0LL;
  v2 = 0;
  for ( i = 0; v2 < *(_DWORD *)(a1 + 16); ++v2 )
  {
    v4 = 0LL;
    result = EtwpAcquireLoggerContextByLoggerId(a1, v2, 0LL);
    v5 = result;
    if ( result )
    {
      if ( (*(_DWORD *)(result + 12) & 0x400) == 0 )
      {
        UsedProcessorCount = EtwpQueryUsedProcessorCount(result, *(unsigned int *)(result + 244));
        if ( v7 > *(_DWORD *)(v8 + 240) && v7 > 2 * UsedProcessorCount )
        {
          EtwpLockBufferList(v8, &i);
          v9 = EtwpDequeueBuffer(v5, v5 + 64);
          v11 = (void *)v9;
          if ( v9 )
            v4 = (void *)EtwpRemoveBufferFromGlobalList(v10, v9);
          EtwpUnlockBufferList(v5, &i);
          if ( v11 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 248));
            _InterlockedDecrement((volatile signed __int32 *)(v5 + 244));
            _InterlockedExchangeAdd(
              (volatile signed __int32 *)(*(_QWORD *)(v5 + 1080) + 4LL * (*(_DWORD *)(v5 + 316) & 1) + 4116),
              -*(_DWORD *)(v5 + 4));
            ExFreePoolWithTag(v11, 0);
            if ( v4 )
              ExFreePoolWithTag(v4, 0);
          }
        }
      }
      result = EtwpReleaseLoggerContext(v5, 0LL);
    }
  }
  return result;
}
