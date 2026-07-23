/*
 * XREFs of PdcNotificationClientAcknowledge @ 0x14089BA5C
 * Callers:
 *     PopDirectedDripsProcessWork @ 0x140869698 (PopDirectedDripsProcessWork.c)
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PdcPortSendMessage @ 0x14089B860 (PdcPortSendMessage.c)
 *     PdcAcquireRwLockExclusive @ 0x14089C12C (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcNotificationClientAcknowledge(__int64 a1)
{
  unsigned int v2; // ebx
  signed __int64 *v3; // rdi
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  signed __int64 v6; // rtt
  int v7; // eax
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  _DWORD v12[200]; // [rsp+20h] [rbp-328h] BYREF

  if ( !a1 || *(_DWORD *)a1 != 1315136592 )
    return (unsigned int)-1073741585;
  v3 = (signed __int64 *)(a1 + 8);
  PdcAcquireRwLockExclusive(a1 + 8);
  if ( *(_DWORD *)(a1 + 96) != 1 || *(_BYTE *)(a1 + 104) )
  {
    v2 = -1073741811;
LABEL_9:
    v3[1] = 0LL;
    _m_prefetchw(v3);
    v4 = *v3;
    v5 = *v3 - 16;
    if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v5 = 0LL;
    if ( (v4 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v5, v4)) )
      ExfReleasePushLock(v3);
    KeAbPostRelease((ULONG_PTR)v3);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v2;
  }
  if ( *(struct _KTHREAD **)(a1 + 112) == KeGetCurrentThread() )
  {
    *(_DWORD *)(a1 + 120) = 0;
    *(_BYTE *)(a1 + 104) = 1;
    v2 = 0;
    goto LABEL_9;
  }
  memset(v12, 0, sizeof(v12));
  v7 = *(_DWORD *)(a1 + 92);
  *(_DWORD *)(a1 + 96) = 0;
  v12[16] = v7;
  v3[1] = 0LL;
  v12[10] = 2;
  v12[14] = 0;
  _m_prefetchw(v3);
  v8 = *v3;
  v9 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v9 = 0LL;
  if ( (v8 & 2) != 0 || (v10 = *v3, v10 != _InterlockedCompareExchange64(v3, v9, v8)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((ULONG_PTR)v3);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)PdcPortSendMessage(*(_QWORD *)(a1 + 40), (__int64)v12);
}
