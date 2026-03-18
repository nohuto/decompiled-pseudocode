/*
 * XREFs of AlpcpInitializePort @ 0x14065C694
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x14065BBC8 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x14065CA48 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x1406D9188 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x14000A420 (KeInitializeSemaphore.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400CA44C (ExAllocateFromNPagedLookasideList.c)
 */

__int64 __fastcall AlpcpInitializePort(__int64 a1, char a2, char a3)
{
  unsigned int v4; // ecx
  __int64 *v5; // rax
  char v6; // al
  struct _KSEMAPHORE *v8; // rax

  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  *(_QWORD *)(a1 + 192) = a1 + 184;
  *(_QWORD *)(a1 + 184) = a1 + 184;
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 216) = a1 + 208;
  *(_QWORD *)(a1 + 208) = a1 + 208;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 240) = a1 + 232;
  *(_QWORD *)(a1 + 232) = a1 + 232;
  *(_QWORD *)(a1 + 224) = 0LL;
  v4 = *(_DWORD *)(a1 + 416) & 0xFFFFFDF9 | (2 * (a2 & 3 | ((a3 & 1) << 8)));
  *(_DWORD *)(a1 + 416) = v4;
  if ( a3 )
  {
    *(_DWORD *)(a1 + 256) |= 0x40000u;
    v8 = (struct _KSEMAPHORE *)ExAllocateFromNPagedLookasideList(&AlpcpNPLookasides);
    *(_QWORD *)(a1 + 248) = v8;
    if ( !v8 )
      return 3221225626LL;
    KeInitializeSemaphore(v8, 0, 0x7FFFFFFF);
    v4 = *(_DWORD *)(a1 + 416);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = AlpcpDummyEvent;
  }
  *(_DWORD *)(a1 + 416) = v4 | 1;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&AlpcpPortListLock, 0LL);
  v5 = (__int64 *)qword_1404463F8;
  if ( *(__int64 **)qword_1404463F8 != &AlpcpPortList )
    __fastfail(3u);
  *(_QWORD *)(a1 + 8) = qword_1404463F8;
  *(_QWORD *)a1 = &AlpcpPortList;
  *v5 = a1;
  qword_1404463F8 = a1;
  v6 = _InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v6 & 2) != 0 && (v6 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  return 0LL;
}
