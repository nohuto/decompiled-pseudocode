/*
 * XREFs of AlpcpMapLegacyPortRemoteView @ 0x14071CDF0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140648064 (AlpcpAcceptConnectPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064A878 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpInsertResourcePort @ 0x14064B47C (AlpcpInsertResourcePort.c)
 *     AlpcpRemoveResourcePort @ 0x14064C4F0 (AlpcpRemoveResourcePort.c)
 */

__int64 __fastcall AlpcpMapLegacyPortRemoteView(signed __int64 *Object, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdi
  signed __int64 *v4; // rbx
  signed __int64 *v7; // rcx

  v3 = *(_QWORD *)(a2 + 40);
  v4 = Object + 44;
  ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(v3 + 16));
  v7 = *(signed __int64 **)(v3 + 24);
  if ( Object != v7 )
  {
    AlpcpRemoveResourcePort((__int64)v7, v3);
    ObfDereferenceObject(*(PVOID *)(v3 + 24));
    ObfReferenceObject(Object);
    *(_QWORD *)(v3 + 24) = Object;
    AlpcpInsertResourcePort((__int64)Object, v3);
  }
  *a3 = 0LL;
  a3[1] = 0LL;
  a3[2] = 0LL;
  *(_DWORD *)a3 = 24;
  a3[2] = *(_QWORD *)(v3 + 40);
  a3[1] = *(_QWORD *)(v3 + 48);
  AlpcpUnlockBlob(*(_QWORD *)(v3 + 16));
  if ( _InterlockedCompareExchange64(v4, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return 0LL;
}
