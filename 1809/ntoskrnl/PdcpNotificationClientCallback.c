/*
 * XREFs of PdcpNotificationClientCallback @ 0x14089BEB0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1400913C0 (ExfReleasePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PdcPortSendMessage @ 0x14089B860 (PdcPortSendMessage.c)
 *     PdcAcquireRwLockExclusive @ 0x14089C12C (PdcAcquireRwLockExclusive.c)
 */

__int64 __fastcall PdcpNotificationClientCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  signed __int64 *v5; // rsi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  signed __int64 v8; // rax
  signed __int64 v9; // rdx
  signed __int64 v10; // rtt
  signed __int64 v11; // rax
  signed __int64 v12; // rdx
  signed __int64 v13; // rtt
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  int v17; // eax
  int v18; // ebp
  __int64 v19; // rcx
  unsigned int v20; // eax
  signed __int64 v21; // rax
  signed __int64 v22; // rdx
  signed __int64 v23; // rtt
  _DWORD v25[200]; // [rsp+20h] [rbp-328h] BYREF

  if ( !a1 )
    return (unsigned int)-1073741585;
  if ( (unsigned int)(*(_DWORD *)(a2 + 40) - 2) > 1 )
    return (unsigned int)-1073740030;
  if ( *(_DWORD *)a1 != 1315136592 )
    return (unsigned int)-1073741585;
  v5 = (signed __int64 *)(a1 + 8);
  PdcAcquireRwLockExclusive(a1 + 8);
  if ( *(_BYTE *)(a1 + 88) )
  {
    if ( *(_DWORD *)(a2 + 40) == 3 )
    {
      if ( !*(_DWORD *)(a1 + 100) )
      {
        if ( *(_QWORD *)(a1 + 80) )
        {
          v6 = *(_QWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 100) = 1;
          v7 = *(_DWORD *)(a2 + 56);
          v5[1] = 0LL;
          _m_prefetchw(v5);
          v8 = *v5;
          v9 = *v5 - 16;
          if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
            v9 = 0LL;
          if ( (v8 & 2) != 0 || (v10 = *v5, v10 != _InterlockedCompareExchange64(v5, v9, v8)) )
            ExfReleasePushLock(v5);
          KeAbPostRelease((ULONG_PTR)v5);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          (*(void (__fastcall **)(__int64, _QWORD))(a1 + 80))(v6, v7);
          PdcAcquireRwLockExclusive(v5);
          --*(_DWORD *)(a1 + 100);
        }
        v4 = 0;
        goto LABEL_32;
      }
    }
    else if ( !*(_DWORD *)(a1 + 96) )
    {
      v4 = 0;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 64);
      *(_DWORD *)(a1 + 96) = 1;
      *(_BYTE *)(a1 + 104) = 0;
      *(_QWORD *)(a1 + 112) = KeGetCurrentThread();
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1760LL) = KeGetCurrentThread();
      v5[1] = 0LL;
      _m_prefetchw(v5);
      v11 = *v5;
      v12 = *v5 - 16;
      if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
        v12 = 0LL;
      if ( (v11 & 2) != 0 || (v13 = *v5, v13 != _InterlockedCompareExchange64(v5, v12, v11)) )
        ExfReleasePushLock(v5);
      KeAbPostRelease((ULONG_PTR)v5);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      v14 = *(_QWORD *)(a1 + 48);
      v15 = *(unsigned int *)(a2 + 56);
      LOBYTE(v16) = *(_BYTE *)(a2 + 60);
      if ( *(_DWORD *)(a1 + 56) == 1 )
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 64))(v14, v15, v16);
      else
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(a1 + 72))(v14, v15, v16);
      v18 = v17;
      PdcAcquireRwLockExclusive(v5);
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 1760LL) = 0LL;
      *(_QWORD *)(a1 + 112) = 0LL;
      if ( *(_BYTE *)(a1 + 104) )
        v18 = *(_DWORD *)(a1 + 120);
      if ( v18 != 259 )
      {
        memset(v25, 0, sizeof(v25));
        v19 = *(_QWORD *)(a1 + 40);
        v25[16] = *(_DWORD *)(a1 + 92);
        v25[10] = 2;
        v25[14] = v18;
        v20 = PdcPortSendMessage(v19, (__int64)v25);
        --*(_DWORD *)(a1 + 96);
        v4 = v20;
      }
      goto LABEL_32;
    }
    v4 = -1073740030;
  }
  else
  {
    v4 = -1073741431;
  }
LABEL_32:
  v5[1] = 0LL;
  _m_prefetchw(v5);
  v21 = *v5;
  v22 = *v5 - 16;
  if ( (*v5 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v22 = 0LL;
  if ( (v21 & 2) != 0 || (v23 = *v5, v23 != _InterlockedCompareExchange64(v5, v22, v21)) )
    ExfReleasePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
