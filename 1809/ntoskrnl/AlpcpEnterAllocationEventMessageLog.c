/*
 * XREFs of AlpcpEnterAllocationEventMessageLog @ 0x14084A484
 * Callers:
 *     AlpcpAllocateMessage @ 0x140616D6C (AlpcpAllocateMessage.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14061A900 (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     AlpcpAllocateMessageLog @ 0x14084A294 (AlpcpAllocateMessageLog.c)
 */

__int64 __fastcall AlpcpEnterAllocationEventMessageLog(__int64 a1)
{
  __int64 MessageLog; // rax
  __int64 *v3; // rcx
  char *v4; // rdx
  char *v5; // rcx
  char **v6; // rax

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpMessageLogLock, 0LL);
  MessageLog = AlpcpAllocateMessageLog();
  if ( MessageLog )
  {
    *(_QWORD *)(MessageLog + 32) = a1;
    *(_DWORD *)(MessageLog + 40) = *(_DWORD *)(a1 + 264);
    *(_DWORD *)(MessageLog + 44) = 1;
    v3 = (__int64 *)qword_14041AAF8;
    if ( *(__int64 **)qword_14041AAF8 != &AlpcpMessageLogListHead
      || (*(_QWORD *)(MessageLog + 8) = qword_14041AAF8,
          *(_QWORD *)MessageLog = &AlpcpMessageLogListHead,
          v4 = (char *)(MessageLog + 16),
          *v3 = MessageLog,
          qword_14041AAF8 = MessageLog,
          v5 = (char *)AlpcpMessageLogLookupTable + 16 * ((*(_DWORD *)(MessageLog + 40) >> 2) & 0x3FF),
          v6 = (char **)*((_QWORD *)v5 + 1),
          *v6 != v5) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v4 = v5;
    *((_QWORD *)v4 + 1) = v6;
    *v6 = v4;
    *((_QWORD *)v5 + 1) = v4;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpMessageLogLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpMessageLogLock);
  return KeAbPostRelease((ULONG_PTR)&AlpcpMessageLogLock);
}
