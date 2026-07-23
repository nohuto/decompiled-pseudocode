/*
 * XREFs of AlpcpDeletePort @ 0x140617AB0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     AlpcpFreeCompletionPacketLookaside @ 0x14010AAE4 (AlpcpFreeCompletionPacketLookaside.c)
 *     AlpcpSendCloseMessage @ 0x140617910 (AlpcpSendCloseMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x140619C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpDestroyPort @ 0x14061A068 (AlpcpDestroyPort.c)
 */

_QWORD *__fastcall AlpcpDeletePort(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rcx
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rsi
  void *v7; // rcx
  int v8; // ecx
  void *v9; // rcx
  void *v10; // rcx
  ULONG_PTR v11; // rcx
  void *v13; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
    AlpcpSendCloseMessage(a1);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    ExAcquirePushLockExclusiveEx(v3 - 16, 0LL);
    v4 = *(_DWORD *)(a1 + 416) & 6;
    switch ( v4 )
    {
      case 2:
        **(_QWORD **)(a1 + 16) = 0LL;
        break;
      case 4:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL);
        goto LABEL_7;
      case 6:
        *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) = 0LL;
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL);
LABEL_7:
        if ( v5 )
        {
          *(_QWORD *)(v5 + 424) = 0LL;
          *(_QWORD *)(v5 + 432) = 0LL;
        }
        break;
    }
    v6 = *(_QWORD *)(a1 + 16);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v6 - 16));
    KeAbPostRelease(v6 - 16);
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 16));
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  v7 = *(void **)(a1 + 32);
  if ( v7 )
  {
    ObfDereferenceObject(v7);
    AlpcpFreeCompletionPacketLookaside(*(KSPIN_LOCK **)(a1 + 48));
  }
  v8 = *(_DWORD *)(a1 + 416);
  if ( (v8 & 6) == 4 && (v8 & 0x400) == 0 )
  {
    v13 = *(void **)(a1 + 80);
    if ( v13 )
      ObfDereferenceObject(v13);
  }
  v9 = 0LL;
  if ( (*(_QWORD *)(a1 + 24) & 1) == 0 )
    v9 = *(void **)(a1 + 24);
  if ( v9 )
    ObfDereferenceObjectWithTag(v9, 0x63706C41u);
  v10 = *(void **)(a1 + 368);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = _InterlockedExchange64((volatile __int64 *)(a1 + 440), 0LL);
  if ( v11 )
    AlpcpDereferenceBlobEx(v11);
  AlpcpDestroyPort(a1);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
